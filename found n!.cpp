#include<stdio.h>

int main(){
	
	// write the program that found the n!
	
	int n,i,fac=1;
	
	printf("Enter the number which you want to take it's factorial\n");
	scanf("%d",&n);
	printf("The number that you entered is : %d\n",n);
	
	for(i=1; i<=n; i++)
	{
		fac*=i;
	}
	printf("The factorial of the number %d is %d",n,fac);
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	return 0;
}
