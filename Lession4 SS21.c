#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01", "r");
	char line[50];
	if(fptr==NULL){
		printf("Loi mo file");
		return 1;
	}
	fgets(line,50,fptr );
	printf("Dong dau tien la %s", line);
	fclose(fptr);
	return 0;
}