#include<stdio.h>

int bubbleSort(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        int swap=0;
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                swap=1;
            }
        }
        if (!swap) {
            break;
        }
    }
}
int binarySearch(int *a, int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid=(low+high)/2;
        if (key == a[mid]) {
            return mid;
        }
        else if (key < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}
int main() {
    int n, key;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d,", a + i);
    }
    bubbleSort(a, n);
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", a[i]);
    // }
    scanf("%d", &key);
    if (binarySearch(a, n, key) == -1) {
        printf("Phan tu khong ton tai trong mang");
        return -1;
    }
    printf("Phan tu co trong mang");

}
