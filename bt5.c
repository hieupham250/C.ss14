#include<stdio.h>
//hoan doi
void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
} 
//sap xep
int bubbleSort(int arr[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(){
	int size,i;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&size);
	int a[size];
	printf("Nhap gia tri cac phan tu:\n");
	for(i=0;i<size;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	printf("Mang truoc khi sap xep:\n");
	printArray(a,size);
	bubbleSort(a,size);
	printf("Mang sau khi sap xep:\n");
	printArray(a,size);
}
