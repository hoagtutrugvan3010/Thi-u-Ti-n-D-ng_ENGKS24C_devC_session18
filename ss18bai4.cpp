#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    
    struct SinhVien students[50];
    int n = 5; 

    for (int i = 0; i < n; i++) {
        students[i].id = i + 1; 
        printf("Nhap thong tin sinh vien %d:\n", i + 1);

        printf("Nhap ten: ");
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);
        getchar(); 
        printf("Nhap so dien thoai: ");
        fgets(students[i].phoneNumber, 20, stdin);
        students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = '\0'; 

        printf("\n");
    }

    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

