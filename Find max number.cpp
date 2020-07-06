/* Bir dizideki en büyük sayýyý bulan program.*/

#include<stdio.h>

int main(){
	
	int max=0,i,j,A[10];
	printf("Bir eleman giriniz.");
	for(i=0;i<10;i++){
		scanf("%d",&A[i]);
	}
	printf("Girdiðiniz dizi : ");
	for(i=0;i<10;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
    
	
	for(j=0;j<10;j++){
		
		if(A[j]>max){
			max=A[j];
		}
		else 
		continue;
		
		
	}
	printf("Max number is : %d\n",max);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
