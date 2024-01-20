//#include <iostream>
//#include <stack>
//using namespace std;
//
//int precedence(char ch) {
//    if (ch == '^') 
//    {
//         return 3;
//    }
//    if (ch == '*' || ch == '/') 
//    {
//        return 2;
//    }
//    if (ch == '+' || ch == '-') 
//    {
//        return 1;
//    }
//    return 0;
//}
//
//void infixtopostfix(string str,int len) 
//{
//    stack<char> stack;
//    for (int i = 0; i < len; i++) 
//    {
//
//        if ((str[i] >=65&& str[i] <=90) ||(str[i] >= 97 && str[i] <= 122))
//        {
//            cout << str[i];
//        }
//        else if (str[i] == '(') 
//        {
//            stack.push(str[i]);
//        }
//        else if (str[i] == ')')
//        {
//            while (!stack.empty() && stack.top() != '(') 
//            {
//                cout << stack.top();
//                stack.pop();
//            }
//            if (!stack.empty() && stack.top() == '(')
//                stack.pop(); 
//        }
//        else {
//            while (!stack.empty() && precedence(str[i]) <= precedence(stack.top())) {
//                cout << stack.top();
//                stack.pop();
//            }
//            stack.push(str[i]);
//        }
//    }
//
//    while (!stack.empty()) {
//        cout << stack.top();
//        stack.pop();
//    }
//}
//
//int main() {
//    string str;
//    cout << "Please enter an expression: ";
//    cin >> str;
//    infixtopostfix(str,str.length());
//    return 0;
//}