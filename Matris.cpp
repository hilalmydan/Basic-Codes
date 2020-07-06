/* Problem : Random degerlerle olusturulacak nxn'lik matrisi kullanıcıyı 5 sn bekleterek yazdıran, 
eğer n istenilen boyuta uymuyorsa n'i kullanıcıdan belirtilen standartlar sağlanana kadar tekrar tekrar daha isteyen 
program  */ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main()
{
	int i,j,n;
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
		}
			printf("\n");
	}
	
		
	
	return 0;
}
