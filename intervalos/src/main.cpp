#include <iostream>
#include <iomanip>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

int main(void){
int SIZE = 5;
int x = 0;
int cont = 0;  
std::array <int,5> intervalo{0,0,0,0,0};
	setlocale (LC_ALL,"Portuguese");
    while( cin >> std::ws >> x) {
     cont++; 
	  //realização da contagem em relação aos intervalos
     if (x >= 0 && x < 25)
    	{
    		 intervalo[0]++;
        }
	 else if(x>= 25 && x < 50)
    	{
    		 intervalo[1]++;
    	}
	 else if(x>= 50 && x < 75)
      {
    	 	 intervalo[2]++;
 	  }
	 else if(x>= 75 && x < 100)
      {
    		 intervalo[3]++; 
 	  }
	 else if(x < 0 || x >= 100)
  	  {
		 	 intervalo[4]++; 
	  }
	}
	
	for (int i = 0; i < SIZE; i++){
	cout << setprecision ( 4 ) << (( float )intervalo[i]/( float )cont)* 100 << std::endl;
	}
	
	return 0;
}