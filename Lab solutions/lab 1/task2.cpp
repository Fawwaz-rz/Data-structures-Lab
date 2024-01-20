
#include <iostream>
using namespace std;
class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex(double x = 0, double y = 0) :real(x), imaginary(y)
	{
		
	}
	friend ostream& operator<<(ostream& output, const Complex& T) {
		output << T.real << "  " << T.imaginary<<"i";
		return output;
	}

	friend istream& operator>>(istream& input, Complex& T) {
		input >> T.real >> T.imaginary;
		return input;
	}
	Complex operator + (Complex plus)
	{
		Complex temp;
		temp.real = real + plus.real;
		temp.imaginary = imaginary + plus.imaginary;
		return temp;
	}
	Complex operator - (Complex minus)
	{
		Complex temp;
		temp.real = real - minus.real;
		temp.imaginary = imaginary - minus.imaginary;
		return temp;
	}
	Complex operator * (Complex minus)
	{
		Complex temp;
		temp.real = real * minus.real;
		temp.imaginary = imaginary * minus.imaginary;
		return temp;
	}
	Complex operator / (Complex minus)
	{
		Complex temp;
		temp.real = real / minus.real;
		temp.imaginary = imaginary / minus.imaginary;
		return temp;
	}
	
	void abs(Complex obj1, Complex obj2)
	{
		Complex output;
		output = sqrt((obj1.real * obj2.real) + (obj1.imaginary * obj2.imaginary));
			cout << "\n-----------------the abs is :  " << output<<"--------------------------";
	}
	void conjugate(Complex obj1, Complex obj2,int num)
	{
		Complex output;
		if (num == 1)
		{
			output = obj1 - obj2;
			cout << "\n------------------the conjugate is :  " << output;
		}
		if (num == 2)
		{
			output = obj1 + obj2;
			cout << "\n------------------the conjugate is :  " << output;
		}
		else if (num == 3)
		{
			output = obj1 / obj2;
			cout << "\n------------------the conjugate is :  " << output;
		}
		else if (num == 4)
		{
			output = obj1 * obj2;
			cout << "\n------------------the conjugate is :  " << output;
		}

	}
	void equals(Complex obj1,Complex obj2)
	{
		if (obj1.real == obj2.real&& obj1.imaginary== obj2.imaginary)
		{
			cout << "\n------------------------both are equal--------------------";
		}
		else
		{
			cout << "\n------------------------both are not equal--------------------";

		}
	}
	~Complex() {
	}
};
int main()
{
	Complex obj1,obj2,output,obj3;
	int num=0;
	cout << "please enter 1st number :";
	cin >> obj1;
	cout << "please enter 2nd number :";
	cin >> obj2;
	cout << "please enter \n1.plus\n2.minus\n3.multiply\n4.divide\n5.exit : ";
	cin >> num;
	while (num <= 4 && num >= 1)
	{
		if (num == 1)
		{
			output = obj1 + obj2;
			obj3.abs(obj1, obj2);
			obj3.conjugate(obj1, obj2, num);
			obj3.equals(obj1, obj2);
		}
		else if (num==2)
		{
			output = obj1 - obj2;
			obj3.abs(obj1, obj2);
			obj3.conjugate(obj1, obj2, num);
			obj3.equals(obj1, obj2);
		}
		else if (num == 3)
		{
			output = obj1 * obj2;
			obj3.abs(obj1, obj2);
			obj3.conjugate(obj1, obj2, num);
			obj3.equals(obj1, obj2);
		}
		else if (num == 4)
		{
			output = obj1 / obj2;
			obj3.abs(obj1, obj2);
			obj3.conjugate(obj1, obj2, num);
			obj3.equals(obj1, obj2);
		}
		cout << " \nthe answer is : " << output;
		cout << "\nplease enter: \n1.plus\n2.minus\n3.multiply\n4.divide\n5.exit : ";
		cin >> num;

	}
	
	
}