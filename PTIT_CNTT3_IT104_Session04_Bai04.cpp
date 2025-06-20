#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d,", a+i);
    }
    int key, p=-1;
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (key == a[i]) {
            p=i;
        }
    }
    if (p==-1) {
        printf("Khong tim thay\n");
        return -1;
    }
    printf("%d\n", p);
}