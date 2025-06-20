#include <stdio.h>

void selectionSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int min=i;
        for (int j = i+1; j < n; j++) {
            if (a[j] < a[min]) {
                min=j;
            }
        }
        if (min != i) {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
int binarySearch(int a[],int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid =a[(left+right)/2];

    if (target==a[mid]) {
        return mid;
    }
    else if (target < a[mid]) {
        binarySearch(a,left, mid-1, target);
    }
    else if (target > a[mid]) {
        binarySearch(a,mid+1, right, target);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d,", a+i);
    }
    selectionSort(a, n);
    int target;
    scanf("%d", &target);
    if (binarySearch(a,0, n-1, 0) == -1) {
        printf("Khong co phan tu trong mang");
    }
    else {
        printf("Phan tu co trong mang");
    }
}