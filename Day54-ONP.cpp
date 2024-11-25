#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string infixToPostfix(const string& expression) {
    stack<char> operators;
    string result = "";
    for (char ch : expression) {
        if (isalpha(ch)) {
            result += ch;
        } else if (ch == '(') {
            operators.push(ch);
        } else if (ch == ')') {
            while (!operators.empty() && operators.top() != '(') {
                result += operators.top();
                operators.pop();
            }
            operators.pop();
        } else {
            while (!operators.empty() && precedence(operators.top()) >= precedence(ch)) {
                result += operators.top();
                operators.pop();
            }
            operators.push(ch);
        }
    }
    while (!operators.empty()) {
        result += operators.top();
        operators.pop();
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string expression;
        cin >> expression;
        cout << infixToPostfix(expression) << endl;
    }
    return 0;
}