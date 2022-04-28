#include <iostream>
using namespace std; 

const int SIZE = 5; // input size.
int negativo = 0;
int entradas; 
int cont = 0;


int main(void)
{
	 setlocale(LC_ALL, "Portuguese");
	
	cout<<"Digite 5 números:";
	while (cont < SIZE)
    {
	cin>>entradas;
	   if (entradas < 0)
       {
		   negativo = negativo + 1;
	   }	
	cont++;	
	}
	cout<<negativo;
	
    return 0;
}
