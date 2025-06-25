#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[100];
    int age;
};
typedef struct Student Student;
void toLowerCase(char *str) {
    for (int i=0;str[i];i++) {
        str[i]=tolower(str[i]);
    }
}
int main() {
    Student student[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap vao sinh vien thu %d\n", i+1);
        Student* s=&student[i];
        s->id=i+1;
        printf("Nhap ten sinh vien:");
        fgets(s->name, 100,stdin);
        s->name[strcspn(s->name,"\n")]=0;
        printf("Nhap tuoi:");
        scanf("%d", &s->age);
    }
    char keyWord[100], keyCopy[100];
    int found=0;
    printf("Nhap ten sinh vien can tim");
    scanf("%s", keyWord);
    strcpy(keyCopy,keyWord);
    toLowerCase(keyCopy);
    for (int i = 0; i < 5; i++) {
        Student* s=&student[i];
        char nameCopy[100];
        strcpy(nameCopy,s->name);
        toLowerCase(nameCopy);
        if (strstr(nameCopy, keyCopy)!=NULL) {
            found=1;
            printf("id: %d,name: %s,age: %d\n", s->id, s->name, s->age);
        }
    }
    if (!found)
        printf("Khong ton tai ten sinh vien can tim");
    return 0;
}
