#include <stdio.h>


int main() {

    int arr[6] = { 3, 7, 2, 5, 1, 4 };
    int length = sizeof(arr) / sizeof(int);
    int max, tmp;

    printf("���� �� : ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < length - 1; i++) {
        max = i;

        // 1, �ּҰ��� Ž���Ѵ�.
        for (int j = i + 1; j < length; j++) {
            if (arr[j] > arr[max])
                max = j;
        }

        // �ּҰ��� �ڱ� �ڽ��� �ƴҶ�, ��ȯ
        if (i != max) {
            tmp = arr[i];
            arr[i] = arr[max];
            arr[max] = tmp;
        }
    }


    printf("\n���� �� : ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}