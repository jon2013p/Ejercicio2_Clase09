#include <iostream>
using namespace std;

int suma(int n);

int main()
{
	int numero;
	cout<<"Digite el numero"<<endl;
	cin>>numero;
	cout<<"La suma de los digitos del numero es: "<<suma(numero);
	
	return 0;	
}

int suma(int n)
{
	if (n==0)
	{
		return n;
	}
	else
	{
		return n%10+suma(n/10);
	}
}
