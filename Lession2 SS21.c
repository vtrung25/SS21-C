#include<stdio.h>
int main(){
FILE *fptr;
fptr = fopen("bt01.txt","r");
int c = fgetc(fptr);
printf("ki tu dau tien cua chuoi la %c", c);

fclose(fptr);
return 0;
	
	
	
}