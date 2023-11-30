#include<stdio.h>
#include<string.h>

//do dai chuoi 
int lenghtChar(char *str){
	int count = 0;
	char *ptr = str;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}
	return count;
}
//so sanh
void compareString(int a, int b){
	if(a>b){
		printf("chuoi thu 1 dai hon chuoi thu 2");
	}else if(a<b){
		printf("chuoi thu 2 dai hon chuoi thu 1");
	}else{
		printf("chuoi 1 va chuoi 2 bang nhau");
	}
} 

int main(){
	char str1[100];
	char str2[100];
	printf("Nhap chuoi thu 1: ");
	gets(str1);
	printf("Nhap chuoi thu 2: ");
	gets(str2);
	int lenght1 = lenghtChar(str1);
	printf("Do dai cua chuoi 1: %d\n",lenght1);
	int lenght2 = lenghtChar(str2);
	printf("Do dai cua chuoi 2: %d\n",lenght2);
	compareString(lenght1,lenght2);
	return 0;
}
