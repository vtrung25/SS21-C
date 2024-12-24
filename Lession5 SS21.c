#include<stdio.h>
int main(){
	FILE *fptr;

	char sen[100][100];
	int n;
	
	fptr = fopen("bt05.txt", "w");
	printf("Nhap so dong: ");
	
	scanf("%d", &n);
	getchar();
	printf("Nhap noi dung tung dong\n");
	for(int i = 0; i<n; i++ ){
		printf("ND dong %d: ", i+1);
		fgets(sen[i], sizeof(sen[i]), stdin);
	}
	
     for(int i = 0; i<n; i++){
     	fputs(sen[i], fptr);
     	
     	
     	
	 }
	 fclose(fptr);
	fptr = fopen("bt05.txt", "r");
	for (int i = 0; i<n; i++){
		fgets(sen[i],sizeof(sen[i]),fptr);
		printf("Dong %d tu file: %s", i+1, sen[i]);
	}
	fclose(fptr);
	return 0;
}