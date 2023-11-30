#include<stdio.h>

int difference(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	int signal = *a-*b;
	return signal;
}

int main(){
	int a = 25;
	int b = 50;
	printf("Truoc khi duoc bien doi a = %d, b = %d, hieu = %d\n",a,b,a-b);
	int signal = difference(&a,&b);
	printf("sau khi duoc bien doi a = %d, b = %d, hieu = %d\n",a,b,signal);
}
