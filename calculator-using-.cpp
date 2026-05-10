#include <iostream>
using namespace std;
int main()
{
	double num1;
	double num2;
	char op;
	cout << "enter your 1 number :";
	cin >> num1;
	cout << "enter your operator (+,_,*,/)";
	cin >>  op;
	cout << "enter your 2 number :";
	cin >> num2;
	if (op == '+')
		cout << "result = " << num1 + num2;
	else if (op == '-')
		cout << "result = " << num1 - num2;
	else if (op == '*')
		cout << "result =" << num1 * num2;
	else if (op == '/')
	{
		if (num2 != 0)
			cout << "result =" << num1 / num2;
		else cout << " 0 error";
	}
	else cout << " invalid operator ";
	return 0;





}