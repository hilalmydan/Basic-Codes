/* Problem : Random degerlerle olusturulacak 10×10’luk matrisi önce yazdýran 
ve program içerisinde bu iþlemi yaparken kaç kere deðiþtirme iþlemi yapýldýðýný,
en büyük rakamý ve kaç tane olduðunu ekrana yazdýran program kodunu yazýnýz. */ 
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
