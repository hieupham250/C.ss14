#include<stdio.h>

int main(){
	int a = 25;
	int *ptr = &a;
	printf("cach 1:\n");
	printf("Gia tri cua bien a: %d\n",a);
	printf("Dia chi cua bien a: %d\n",&a);
	printf("cach 2:\n");
	printf("Gia tri cua bien khi su dung con tro: %d\n",*ptr);
	printf("Dia tri cua bien khi su dung con tro: %d\n",ptr);
}
