#include "function.h"


std::pair<int,int> min_max( int V[], size_t n )
{
	int Vmax = A[0];
	int Vmin = A[0];
	std::size_t VmaxPos = 0; 
	std::size_t VminPos = 0; 
	
	if (n == 0) std::make_pair(-1,-1); // VAZIO
		
	for (std::size_t i = 0; i < n; i++)
	{
		if (A[i] < Vmin)
		{
		   Vmin = A[i];
		   Vmin = i;	  	   	
			
		}	
		if (A[i] > Vmax)
		{
		    Vmax = A[i];
			Vmax = i;	   	
		}
	}
	
		
	
    return std::make_pair(Vmin, Vmax);;
}
