
/* Program to print 5 to 1 numbers on screen 

Input:5

Output:5
	   4
	   3
	   2
	   1
	  
*/


#include<stdio.h>


int Display()
{
	int i=0;
	
	for(i=5;i>=1;i--)
	{
		printf("%d\n",i);
		
	}
	
}

int main()
{
	
	Display();
	
	return 0;
}
