#include <stdio.h>
int z, a,toplamb, toplamc;
kareler(z){
	int i,toplamc,toplamj,toplamb;  //de�i�ken tan�mlar�
	
	
	toplamc = 0;	     //de�i�ken ba�lang��lar�
	toplamj = 0;
	
	
	for(i=0;i<=z;i++){   //for d�ng�s� ba�lat�l�yor
	
	
	
	toplamc +=(i*i);    //ilk y�z say�n�n karesi
	
	toplamj += i;
	toplamb = (toplamj*toplamj);    // ilk y�z say�n�n toplam�n�n karesi
	}
	a=toplamb-toplamc;
	return a;
} 



int main() {
 printf("bir deger giriniz");
 scanf("%i",&z);
 kareler(z);
 printf(" SONUCUNUZ = %d \n " , a );     //d�ng� bitmi�tir

return 0;
}

