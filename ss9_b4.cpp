#include <stdio.h>
int main(){
    int arr[100], n = 0, choose;
    do{
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Chen phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);

        switch (choose) {
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap gia tri phan tu %d: ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                for (int i = 0; i < n; i++) {
        			printf("%d ", arr[i]);
    			}
                break;
            case 3:
                int index, valueItem;
                printf("Nhap vi tri muon chen vao: ");
                scanf("%d", &index);
                printf("Nhap gia tri muon chen: ");
                scanf("%d", &valueItem);
                for (int i = n; i > index; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[index] = valueItem;
                n++;
                printf("Mang sau khi chen:\n");
                for (int i = 0; i < n; i++) {
        			printf("%d ", arr[i]);
    			}
                break;
            case 4:
            	int newValue;
                printf("Nhap vi tri can sua: ");
                scanf("%d", &index);
                printf("Nhap gia tri moi: ");
                scanf("%d", &newValue);
                arr[index] = newValue;
                printf("Mang sau khi sua:\n");
                for (int i = 0; i < n; i++) {
        			printf("%d ", arr[i]);
    			}
                break;
            case 5:
                int deleteIndex;
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &deleteIndex);
                for (int i = deleteIndex; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Mang sau khi xoa phan tu:\n");
                for (int i = 0; i < n; i++) {
        			printf("%d ", arr[i]);
    			}
                break;
            case 6:
                printf("Thoat chuong trinh");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choose != 6);
    return 0;
}
