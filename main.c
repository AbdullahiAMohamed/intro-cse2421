#include <stdio.h>

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    printf("Sum = %d\n", sum);
    return 0;
}
