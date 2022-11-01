#include <stdio.h>

int main()
{
  int sayi, y;     //depiþken tanýmlarý
y=0;

  for (sayi=0; sayi<1000; sayi++) {   //for döngüsü baþlatýlýyor
       if((sayi%3==0) || (sayi%5==0)) { //3ün veya 5 in katlarý toplanýyor
          printf("%d\n ", sayi);      //denklem sonlandýrýlýyor
          y = y+ sayi;
       }
       
  }

  printf("3 un ve 5 in kati olan sayilarin toplami =  %d", y); //denklem bitti sonuç yazdýrýlýyor


}
