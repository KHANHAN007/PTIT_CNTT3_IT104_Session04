#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", a+i);
    }
    int found=0;
    for (int i = 0; i < n/2; i++) {
        if (a[i]==a[n-1-i]) {
            printf("(%d,%d)\n", a[i], a[n-1-i]);
            found=1;
        }
    }
    if (!found) {
        printf("Khong co cap doi xung");
    }
}