//#include<iostream>
//#include<string>
//#include<stack>
//using namespace	std;
//int main()
//{
//	stack<string> stack, second;
//	string webpage;
//	int num = 0;
//	do
//	{
//		cout << "\n1.New page\n2.Back page\n3.Forward Page\n-1. To terminate : \nPlease enter choice :  ";
//		cin >> num;
//		switch (num)
//		{
//		case 1:
//		{
//			cout << "			please enter web page name  : ";
//			cin >> webpage;
//			stack.push(webpage);
//			break;
//		}
//		case 2:
//		{
//			if (stack.empty())
//			{
//				cout << "\n			No previous webpage ";
//			}
//			else
//			{
//				second.push(webpage);
//				stack.pop();
//				if (stack.empty())
//				{
//					cout << "					No Before Page exist ";
//				}
//				else
//				{
//					cout << "				You visited this page before :  " << stack.top();
//				}
//			}
//
//			break;
//		}
//		case 3:
//		{
//			if (second.empty())
//			{
//				cout << "\n						No webpage forward";
//			}
//			else
//			{
//				cout << "                You visited this page before :           " << second.top();
//				second.pop();
//				
//			}
//			break;
//		}
//
//		default:
//			cout << "							wrong input";
//			break;
//		}
//
//	} while (num != -1);
//}