#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int i, j = 0;

    for (i = 1; i < n; i++) {
        int isDuplicate = 0;


        for (int k = 0; k < j; k++) {
            if (arr[k] == arr[i]) {
                isDuplicate = 1;
                break;
            }
        }


        if (!isDuplicate) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;
}

int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    n = removeDuplicates(arr, n);


    printf("Array sem duplicatas:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

