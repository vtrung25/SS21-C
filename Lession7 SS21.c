#include<stdio.h>
struct SinhVien{
	int id;
	char name[25];
	int age;
};
int main(){
	
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	getchar();
	struct SinhVien sv[n];
	for(int i = 0; i<n; i++){
		printf("Nhap thong tin sv thu %d:\n", i+1);
		printf("ID: ");
		scanf("%d", &sv[i].id);
		getchar();
		printf("Ten: ");
		fgets(sv[i].name,sizeof(sv[i].name), stdin);
		printf("Tuoi: ");
		scanf("%d", &sv[i].age);
		getchar();
		printf("\n");
	}
	FILE *fptr;
	fptr = fopen("students.txt", "w");
	for(int i = 0; i<n; i++){
		fprintf(fptr,"%d.ID: %d,Ten: %s,Tuoi: %d", i+1, sv[i].id, sv[i].name, sv[i].age );
	}
	fclose(fptr);
	return 0;
}