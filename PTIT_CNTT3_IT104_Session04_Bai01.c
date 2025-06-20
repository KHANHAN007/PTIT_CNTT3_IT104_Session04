#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    int p=-1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            p = i;
            break;
        }
    }
    return p;
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d,", a+i);
    }
    int key;
    scanf("%d", &key);
    if (linearSearch(a, n, key)==-1) {
        printf("Not Found\n");
        return -1;
    }
    printf("%d\n", linearSearch(a, n, key));
    return 0;
}