/* Problem : Bir otoparkta tabelada ��yle yazmaktad�r.Giren ara�lar�n bekleme s�relerine g�re �deyecekleri fiyat listesi :

   0-4 saat 10 lira
   5-8 saat 12 lira
   9-12 saat 15 lira
   12 saat �st� 20 lira
 �eklinde bir �cretlendirme vard�r.Girilen sonu�lara g�re fiyat ��kt�s� veren program� kodlay�n�z. */

#include<stdio.h>

int main(){
	
	int hours;
	int pay;
	printf("How much times did you stay at parking lot?\n");
	scanf("%d",&hours);
	
	if(hours>=0 && hours<=4){
		pay=10;
		printf("You must pay %d Turkish liras",pay);
	}
	
	 else if(hours>=5 && hours<=8)
	{	pay=12;
		printf("You must pay %d Turkish liras",pay);
	}
	
		else if(hours>=9 && hours<=12)
	{	pay=15;
		printf("You must pay %d Turkish liras",pay);
	}
		else
	{	pay=20;
		printf("You must pay %d Turkish liras",pay);
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
