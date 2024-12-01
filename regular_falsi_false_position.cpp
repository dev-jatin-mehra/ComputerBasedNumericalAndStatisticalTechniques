#include<bits/stdc++.h>
using namespace std;
#define itr 1000000

double func(double x)
{
    return x*x*x - 4*x -9;
}

void regulaFalsi(double a, double b)
{
	if (func(a) * func(b) >= 0)
	{
		cout << "You have not assumed right a and b";
		return;
	}
	double c = a; 
	for (int i=0; i < itr; i++)
	{
		c = (a*func(b) - b*func(a))/ (func(b) - func(a));
		if (func(c)==0)
			break;
		else if (func(c)*func(a) < 0)
			b = c;
		else
			a = c;
	}
	cout << "The value of root is : " << c;
}

int main()
{
	double a =2, b = 3;
	regulaFalsi(a, b);
	return 0;
}
