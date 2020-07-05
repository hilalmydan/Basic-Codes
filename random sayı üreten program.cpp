//Get the random number with C program
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int random;
	srand(time(NULL));
	random = 5+rand()%40;
	printf("random sayi = %d",random);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
