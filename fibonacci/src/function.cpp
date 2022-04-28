#include "function.h"
#include <iostream>

std::vector<unsigned int> fib_below_n( unsigned int n )
{
	vector<unsigned int> seqFib; 
	
	bool FibBelow_n= true;
	unsigned int Num;
	int i = 0; 
	
while (FibBelow_n)
{
	 if ( i == 0 || i == 1)
	 {
		if (n > 1)
		{
			
		 seqFib.push_back(1);
		} 
		else return seqFib;
	 }		 
 
	  else
	    {
		Num = seqFib[i-1] + seqFib[i-2];
		    if (Num < n)
			{
			 seqFib.push_back(Num);
			} 
			else
			{	
			 FibBelow_n = false;    
	        }
		}	
	i++;
}
	return seqFib; 
}
