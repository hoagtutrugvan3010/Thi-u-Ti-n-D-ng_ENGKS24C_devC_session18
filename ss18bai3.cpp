#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
   
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("sinh vien thu %d:\n", i + 1);

        printf("ten la: ");
        fflush(stdin); 
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("tuoi : ");
        scanf("%d", &students[i].age);

        fflush(stdin); 
        printf("sdt: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);

        printf("\n"); 
    }

  
    printf("tt sv la:\n");
    for (int i = 0; i < 5; i++) {
        printf("sv thu %d:\n", i + 1);
        printf("ten: %s", students[i].name);
        printf("tuoi: %d\n", students[i].age);
        printf("sdt: %s", students[i].phoneNumber);
        printf("\n"); 
    }

    return 0;
}

