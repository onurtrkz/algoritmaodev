#include <stdio.h>
#include <stdlib.h>

int  a, b, c, position, swap;

selectionsort(int c){
	
		int sinir[c];
	
		for(a= 0; a<c ;a++){
		sinir[a]=rand()%10000;
        
		printf("%d  ", sinir[a]);
	
}
 
 //selection sort algoritmasi
   for (a=0 ; a< (c - 1); a++){
      position = a;
 
      for ( b= a+1 ; b< c; b++){
         
	   		if (sinir[position] > sinir[b])
            	position = b;
        }
      		if (position != a){
      	
         		swap = sinir[a];         
         		sinir[a] = sinir[position];
         
         		sinir[position] = swap;
        }
    }
 
   printf("\n Buyukten kucuge siralanisi \n");
  
  for (a = 0 ; a < c ; a++){ //siralama bölümü
      printf("%d    ", sinir[a]);
    }
  return 0;
}

int main(){
	printf("0 ile 10000 arasinde rasgele olusmasi gereken  sayi miktarini giriniz: ");
	scanf("%i",&c);
	selectionsort(c);
	   
   return 0;
}
