#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d,", a+i);
    }
    int found=0, key;
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co phan tu trong mang");
    }
}