#include<stdio.h>
int main(){

FILE *fptr;
fptr = fopen("bt01.txt", "a");
char add[50];
char a = "\n";
fprintf(fptr, "%c", a);
printf("Nhap chuoi muon them: ");
fgets(add, sizeof(add),stdin);
fprintf(fptr,"%s",add);
fclose(fptr);
return 0;


}
