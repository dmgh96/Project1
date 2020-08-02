#include <stdio.h>


int main() {

    int arr[] = { 10, 9, 11, 20, 1, 5, 3, 6, 7, 4, 2,8,13,12 };
    int tmp = 0;
    int length = sizeof(arr) / sizeof(int);

    printf("정렬 전 : \n");

    for (int i = 0; i < length; i++) {
        printf("%d -> ", arr[i]);
    }

    printf("\n");

    //-- 

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    printf("정렬 후: \n");

    for (int i = 0; i < length; i++) {
        printf("%d -> ", arr[i]);
    }


    return 0;

}