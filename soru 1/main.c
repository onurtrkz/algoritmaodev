#include <stdio.h>

int main()
{
  int sayi, y;     //depi�ken tan�mlar�
y=0;

  for (sayi=0; sayi<1000; sayi++) {   //for d�ng�s� ba�lat�l�yor
       if((sayi%3==0) || (sayi%5==0)) { //3�n veya 5 in katlar� toplan�yor
          printf("%d\n ", sayi);      //denklem sonland�r�l�yor
          y = y+ sayi;
       }
       
  }

  printf("3 un ve 5 in kati olan sayilarin toplami =  %d", y); //denklem bitti sonu� yazd�r�l�yor


}
