#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int m = 0, n = 0, soma = 0; // não devem ser usadas variáveis globais
int main(void)
{
  setlocale (LC_ALL,"Portuguese");
  
  cin >> m;
  cin >> n;
  
  if (n == 0)
  {
  	// faltou tratar esse caso
  }
  else if (n > 0)
  {	
	  for (int i = m; i < m + n; i++)
		soma = soma + i;
  }	  
  else if (n < 0)
  {
  	for (int i = m; i > m - (n* (-1)); i--)
		soma = soma + i;
  }
  cout << soma << endl;	  
  return 0;
}
