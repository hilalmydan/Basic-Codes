/* Problem : Random degerlerle olusturulacak nxn'lik matrisi kullan�c�y� 5 sn bekleterek yazd�ran, 
e�er n istenilen boyuta uymuyorsa n'i kullan�c�dan belirtilen standartlar sa�lanana kadar tekrar tekrar daha isteyen 
bunlar� yaparken matristeki en b�y�k say�y� bulan ve bunu bulurken ka� tane de�i�im yapt���n� sayan
program  */ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main()
{
	int i,j,n,max=0,change=-1;
	int A[20][20];
	printf("Olusturmak istediginiz matris kaca kaclik?\nLutfen 1den 20ye kadar bir sayi giriniz...");
	scanf("%d",&n);
	if(n<1 || n>20){
			printf("Olusturmak istediginiz matris belirtilen buyukluge uymuyor!!!\nLutfen 1den 20ye kadar bir sayi giriniz...");
				scanf("%d",&n);
			while (n>0 || n<20){
				if(n>1 && n<20)	break;
		
				else{
					printf("Olusturmak istediginiz matris belirtilen buyukluge uymuyor!!!\nLutfen 1den 20ye kadar bir sayi giriniz...");
            	    scanf("%d",&n);
				}		
			}
	}
     
		printf("%dX%d lik matrisiniz olusturuluyor. Lutfen bekleyiniz...\n",n,n);
   		sleep(5);
   	    srand(time(NULL));
	for(i=0;i<n;i++){	
		for(j=0;j<n;j++){		
		A[i][j]=rand()%100 ;
		printf("%d\t",A[i][j]);		
			if(A[i][j]>max){
			max=A[i][j];
			change++;
		}
		else continue;
		}
			printf("\n");
	}
	printf("Max number in the matrix is : %d\n",max);
    printf("Max sayi bulunurken yap�lan degisim say�s� : %d",change);
		
	
	return 0;
}
