#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt", "w");
	char text[50];
	printf("Nhap mot chuoi: ");
	fgets(text,sizeof(text),stdin);
	fprintf(fptr,"%s", text);
	return 0;
}