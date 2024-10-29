//Leetoce problem no 1046 (Easy level question based on Topic Heap)

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //Build max heap..
        priority_queue<int> pq(stones.begin() , stones.end());

        //Main logic..
        while(pq.size() > 1){
            int m1 = pq.top();
            pq.pop();
            int m2 = pq.top();
            pq.pop();

            if(m1 != m2){
                pq.push(m1-m2);
            }
        }

        //if no stone then return 0 otherwise return top idx..
        return pq.empty() ? 0 : pq.top();
    }
};