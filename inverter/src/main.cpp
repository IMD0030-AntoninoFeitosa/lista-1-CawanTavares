#include <array>
using std::array;
#include <iostream>
using std::cout; 
#include <string>
using std::string;

int main()
{
	const int SIZE = 4;
		
	std::array< std::string, SIZE > arr{"um","dois","tres","quatro"};
	int n = arr.size();
	for (int i = 0; i < n/2; i++)
	{
		swap(arr[i], arr[n-i-1]);
		n--; 
	}
	for (int j = 0; j < SIZE; j++)
	{
		std::cout<<arr[i]<<"  "; 
	}	

	return 0; 

}	
