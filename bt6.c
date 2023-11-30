#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printMenu(){
	printf("******************************MENU******************************\n");
	printf("1. Nhap vao chuoi.\n");
	printf("2. In ra chuoi.\n");
	printf("3. Sao chep vao mot chuoi khac.\n");
	printf("4. Nhap vao chuoi khac, them chuoi do vao chuoi ban dau.\n");
	printf("5. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau.\n");
	printf("6. In ra chuoi dao nguoc.\n");
	printf("7. Thoat.\n");
}
//ham nhap
void inputString(char *stra){
	gets(stra);
}
//ham in
void printString(char *stra){
	puts(stra);
}
//ham sao chep
void copyString(char *stra,char *strb,int size){
	int i;
	for(i=0;i<size;i++){
		*(strb+i)= *(stra+i);
	}
}
//ham them gia tri
void addString(char *stra,char *strc){
	strcat(stra, strc);
}
//ham so sanh
int compareString(char *stra,char *strd){
	int result = strcmp(stra,strd);
	if(result==0){
		printf("hai chuoi giong nhau");
	}else{
		printf("hai chuoi khac nhau");
	}
	return result;
}

int main(){
	int i;
	char str1[256],str2[256],str3[256],str4[256];
	int choice;
	do{
		printMenu();
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				fflush(stdin);
				printf("Nhap chuoi: ");
				inputString(str1);
				printf("\n");
				break;
			case 2:
				printString(str1);
				printf("\n");
				break;
			case 3:
				copyString(str1,str2,strlen(str1));
				printf("chuoi da sao chep:\n");
				printString(str2);
				printf("\n");
				break;
			case 4:
				fflush(stdin);
				printf("Nhap chuoi thu 2: ");
				inputString(str3);
				printf("Chuoi ban dau sau khi duoc them:\n");
				addString(str1,str3);
				printString(str1);
				printf("\n");
				break;
			case 5:
				fflush(stdin);
				printf("Nhap chuoi thu 3: ");
				inputString(str4);
				compareString(str1,str4);
				printf("\n");
				break;
			case 6:
				
				break;
			case 7:
				exit(0);
			default:
			 printf("Vui long chon tu 1-7.\n");  
		}
	}
	while(1==1);
}
