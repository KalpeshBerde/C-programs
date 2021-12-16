/*Program to divide two numbers

Input:15 5
Output:3

*/

#include<stdio.h>


int Divide(int iValue1,int iValue2)
{
	int iRet=0;
	
	if(iValue1<iValue2)
	{
		return -1;
		
	}
	
	iRet=iValue1/iValue2;
	
	return iRet;
	
	
}

int main()
{
	
	int iNo1=15;
	int iNo2=5;
	
	int iAns=0;
	
	iAns=Divide(iNo1,iNo2);
	
	printf("Division is %d",iAns);
	
	return 0;
	
	
}
