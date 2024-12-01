#include<stdio.h>
int main(){
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int index, newValue;
    printf("Nhap vi tri can sua: ");
    scanf("%d", &index);

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    array[index] = newValue;

    printf("Mang sau khi sua:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

