/* Problem : Random degerlerle olusturulacak 10�10�luk matrisi �nce yazd�ran 
ve program i�erisinde bu i�lemi yaparken ka� kere de�i�tirme i�lemi yap�ld���n�,
en b�y�k rakam� ve ka� tane oldu�unu ekrana yazd�ran program kodunu yaz�n�z. */ 
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
