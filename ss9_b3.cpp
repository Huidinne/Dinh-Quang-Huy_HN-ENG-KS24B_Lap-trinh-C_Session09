#include<stdio.h>
int main(){
    int array[100];
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Vi tri phan tu %d: ", i);
        scanf("%d", &array[i]);
	}
	
    int deleteIndex;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &deleteIndex);
    for (int i = deleteIndex; i < n - 1; i++) {
        array[i] = array[i + 1]; 
    }
    n--;
    printf("Mang sau khi xoa phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

