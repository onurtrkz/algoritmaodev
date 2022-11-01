#include <stdio.h>
#include <time.h>
 
int i,j,z,a;
  
 
int bubblesort(int z){
	
int	sevgi[z];

// rasgele sayýlar atanan bölüm
 for(i = 0; i<z ;i++){
        
		sevgi[i]=rand()%10000;
        
		printf("%d  ", sevgi[i]);
    }
    
//sýralama dizisi rastgele sayýýlarý analiz ediyor
printf("\n lütfen bekleyiniz bubble hallediyor: \n");
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

//bubble sort parametrelerinin bulunduðu kýsým
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
