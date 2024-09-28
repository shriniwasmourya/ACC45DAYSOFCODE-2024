#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

//Successfully run in VScode


class Node{
    public:
    int data;
    Node* left;
    Node* right;


    Node(int val){
        data = val;
        left  = right = NULL;
    }
};
static int idx = -1;
Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

bool isIdentical(Node* root1 , Node* root2){
    //Base Case...

    if(root1 == NULL && root2 == NULL){
        return true;
    }else if(root1 == NULL || root2 == NULL){
        return false;
    }

    if(root1->data != root2->data){
        return false;
    }

    return isIdentical(root1->left , root2->left) && isIdentical(root1->right , root2->right);
}

bool isSubTree(Node* root , Node* subroot){

    //Base Case...
    if(root == NULL && subroot == NULL){
        return true;
    }else if(root == NULL || subroot == NULL){
        return false;

    }

    if(root->data == subroot->data){
        //Identical check..
    }

    int isLeftSubtree = isSubTree(root->left , subroot);
    if(!isLeftSubtree){
        isSubTree(root->right,subroot);
    }

    return true;
}

int main(){
     vector<int> nodes= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root Node : "<<root->data<<endl;

    


return 0;
}
