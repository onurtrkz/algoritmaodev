#include <stdio.h>
#include <time.h>
 
int i,j,z,a;
  
 
int bubblesort(int z){
	
int	sevgi[z];

// rasgele say�lar atanan b�l�m
 for(i = 0; i<z ;i++){
        
		sevgi[i]=rand()%10000;
        
		printf("%d  ", sevgi[i]);
    }
    
//s�ralama dizisi rastgele say��lar� analiz ediyor
printf("\n l�tfen bekleyiniz bubble hallediyor: \n");
    for(i = 1; i< z; i++){
        
		for(j = 0; j< z-i; j++){
            
			if(sevgi[j]> sevgi[j+1]){
                
				int a;
				a= sevgi[j];
                
				sevgi[j]= sevgi[j+1];
                
				sevgi[j+1]= a;
            }
        }
    }

//bubble sort parametrelerinin bulundu�u k�s�m
    for(i = 0; i<z; i++){

        printf("%d  ", sevgi[i]);
	}
}
int main(){
	printf("ne vercen ne alcan? Bir deger giriniz.");
	scanf("%i",&a);
    bubblesort(a);
    return 0;
}
