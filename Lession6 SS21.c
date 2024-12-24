#include<stdio.h>
int main(){
	FILE *fptr1, *fptr2;
	fptr1 = fopen("bt01.txt","r");
	char a;
	
	fptr2 = fopen("bt06.txt", "w");
 while ((a = fgetc(fptr1)) != EOF) {
		
		fputc(a, fptr2);
	}
     fclose(fptr1);
     fclose(fptr2);
     return 0;
}