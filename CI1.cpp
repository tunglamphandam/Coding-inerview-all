#include <iostream>
#include <stdio.h>

using namespace std; 

void input(int n, int Arr[])
{
	for ( int i=0; i<n; i++)
	{
		cin >> Arr[i];
	}
}
bool check( int k , int n, int Arr[])
{
    for (int i=0; i<n; i++)
    	{ 
    		if (Arr[i] == k)
    			return false ;
    		}
    		{
    return true; 
    	}
}
int main()
{
	int n;
	cin >> n;
	int Arr[n] ;
	input( n , Arr );
	for (int k=1; k<=100; k++)
	{
		if (check( k, n ,Arr) == true)
		{
			cout << k << " ";
		}
		else 
		{
			continue;
		}
	}
	return 0;
}
