#include<stdio.h>
int main() {
    int array[100];
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Vi tri phan tu  %d: ", i);
        scanf("%d", &array[i]);
    }
    int index, valueItem;
    printf("Vi tri muon chen vao: ");
    scanf("%d", &index);
    printf("Nhap gia tri muon chen: ");
    scanf("%d", &valueItem);

    for (int i = n; i > index; i--) {
        array[i] = array[i - 1];
    }
    array[index] = valueItem;
    n++;
    printf("Mang sau khi chen:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

