//#include<iostream>
//using namespace std;
//int GCDrecurse(int num1,int num2,int div,int larg)
//{
//	if (num1%div==0)
//	{
//		if (num2%div==0)
//		{
//			larg = div;
//		}
//	}
//	div++;
//	if (div>=num2)
//	{
//		return larg;
//	}
//	return GCDrecurse(num1, num2, div,larg);
//
//}
//int main()
//{
//	int num1 = 100, num2 = 300;
//	cout << "GCD of "<<num1<<"  and  "<<num2<<"  is  :" << GCDrecurse(num1, num2, 1, 0);
//}