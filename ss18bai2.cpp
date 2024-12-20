#include<stdio.h>
#include<string.h>
int main(){
	struct Sinhvien {
		char name[100];
		int age;
		char phonenum[20];
	};
	struct Sinhvien user01={};
	fflush;
	printf("nhap vao ten cua sv: ");
	fgets(user01.name,sizeof(user01.name),stdin);
	printf("\nnhap vao tuoi cua sv: ");
	scanf("%d",&user01.age);
	getchar();
	printf("\nnhap vao sdt cua sv: ");
	fgets(user01.phonenum,sizeof(user01.phonenum),stdin);
		
			printf("\nthong tin sv la: ");
			printf("\nten sv la : %s",user01.name);	
			printf("\ntuoi sv la : %d",user01.age);	
			printf("\nsdt sv la : %s",user01.phonenum);	
 return 0;
 }

