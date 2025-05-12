// Ques>Program that finds three indices (i, j, k) such that arr[i] + arr[j] == arr[k].
// Solution>
#include <stdio.h>

int findTripletWithSum(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (k != i && k != j && arr[i] + arr[j] == arr[k]) {
                    printf("Indices: %d, %d, %d\n", i, j, k);
                    printf("Values: %d + %d = %d\n", arr[i], arr[j], arr[k]);
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (!findTripletWithSum(arr, n)) {
        printf("No such triplet found.\n");
    }

    return 0;
}
