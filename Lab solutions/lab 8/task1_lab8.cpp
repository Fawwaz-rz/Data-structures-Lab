//#include <iostream> 
//#include <stack>
//using namespace std;
//bool isbalanced(stack<char> exp,const int size)
//{
//	stack<char> temp;
//	for (int i = 0; i < size; i++)
//	{
//		if (exp.top()==']')
//		{
//			temp.push(']');
//			exp.pop();
//		}
//		else if (exp.top() == '}')
//		{
//			temp.push('}');
//			exp.pop();
//		}
//		else if (exp.top() == ')')
//		{
//			temp.push(')');
//			exp.pop();
//		}
//		else if (exp.top()=='[')
//		{
//			if (temp.top() == ']')
//			{
//				temp.pop();
//				exp.pop();
//			}
//			else
//			{
//				temp.push('[');
//			}
//		}
//		else if (exp.top()=='{')
//		{
//			if (temp.top()=='}')
//			{
//				temp.pop();
//				exp.pop();
//			}
//			else
//			{
//				temp.push('{');
//			}
//		}
//		else if (exp.top()=='(')
//		{
//			if (temp.top() == ')')
//			{
//				temp.pop();
//				exp.pop();
//			}
//			else
//			{
//				temp.push('(');
//			}
//		}
//	}
//	if (temp.empty())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main() {
//    stack<char> stack;
//	string str;
//	cout << "please enter expression :  ";
//	cin >> str;
//	char* ch = new char[str.length()];
//	for (int i = 0; i < str.length(); i++)
//	{
//		*(ch + i) = str[i];
//
//	}
//	for (int j = 0; j < str.length(); j++)
//	{
//		stack.push(*(ch+j));
//	}
//	if (isbalanced(stack,stack.size()))
//	{
//		cout << "Balanced";
//
//	}
//	else
//	{
//		cout << "not Balanced";
//	}
//}
//
//	