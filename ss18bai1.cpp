#include<stdio.h>

int main(){
	struct Student{
		int id;
		char fulname[100];
		int age;
		char phone[20];			
	};
	struct Student user01={1,"thieu tien dung",18,"0969780623"};
printf("id la %d\ntien la %s\ntuoi la %d\nso dt la %s",user01.id,user01.fulname,user01.age,user01.phone);
 return 0;
 }

