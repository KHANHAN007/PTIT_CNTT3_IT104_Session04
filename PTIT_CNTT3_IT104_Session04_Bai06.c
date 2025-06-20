#include <stdio.h>

typedef struct {
    int id;
    char name[100];
    int age;
} student;

int main() {
    student std[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &std[i].id);
        scanf("%s", std[i].name);
        scanf("%d", &std[i].age);
    }
    int id;
    scanf("%d", &id);
    if (id > 5) {
        printf("Sinh viên không tồn tại");
        return 0;
    }
    printf("id: %d, ", id);
    printf("name: %s, ", std[id - 1].name);
    printf("age: %d ", std[id - 1].age);
}
