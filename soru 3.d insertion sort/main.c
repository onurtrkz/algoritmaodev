#include<stdio.h>
#include<time.h>

int(,z,j,size,array)
void insertionSort(int array[],int size){
	
	for(int i=1;i<z;i++);
	{
		int temp = array[i];
		int j = i-1;
		
		while(j>=0 && temp<array[j]){
			array[j+1] = array[j];
			j -=1;
		}
		array[j+1] = temp;
	}
	
}

void maxToMin(int array[],int size){
	
	for(int i =1;i<size;i++){
		int temp = array[i];
		int j = i-1;
		
		while(j>=0 && temp>array[j]){
			array[j+1] = array[j];
			j = j-1;
		}
		array[j+1]=temp;
	}
}


int main(){
	
	int array[] = {};
	int size = sizeof(array)/sizeof(array[0]);
	
	
	
	//rastgele sayi secimi 
	for(i=0 i<z; i++){
	
	sayi[i]=rand()%10000
	printf("%d",sayi[i])
	
}
	insertionSort(array,z);
	
	printf("Insertion Sort\n");
	for(int i=0; i<z;i++){
		printf("%d ",array[i]);
	}
	
	maxToMin(array,z);
	printf("\nMax to Min\n");
	for(int i=0;i<z;i++){
		printf("%d ",array[i]);
	}
}
