#include <stdio.h>
int z, a,toplamb, toplamc;
kareler(z){
	int i,toplamc,toplamj,toplamb;  //deðiþken tanýmlarý
	
	
	toplamc = 0;	     //deðiþken baþlangýçlarý
	toplamj = 0;
	
	
	for(i=0;i<=z;i++){   //for döngüsü baþlatýlýyor
	
	
	
	toplamc +=(i*i);    //ilk yüz sayýnýn karesi
	
	toplamj += i;
	toplamb = (toplamj*toplamj);    // ilk yüz sayýnýn toplamýnýn karesi
	}
	a=toplamb-toplamc;
	return a;
} 



int main() {
 printf("bir deger giriniz");
 scanf("%i",&z);
 kareler(z);
 printf(" SONUCUNUZ = %d \n " , a );     //döngü bitmiþtir

return 0;
}

