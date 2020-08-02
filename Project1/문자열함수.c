#include <stdio.h>


int main() {

    int arr[6] = { 3, 7, 2, 5, 1, 4 };
    int length = sizeof(arr) / sizeof(int);
    int max, tmp;

    printf("정렬 전 : ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < length - 1; i++) {
        max = i;

        // 1, 최소값을 탐색한다.
        for (int j = i + 1; j < length; j++) {
            if (arr[j] > arr[max])
                max = j;
        }

        // 최소값이 자기 자신이 아닐때, 교환
        if (i != max) {
            tmp = arr[i];
            arr[i] = arr[max];
            arr[max] = tmp;
        }
    }


    printf("\n정렬 후 : ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}