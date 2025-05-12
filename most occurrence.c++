// Question:Find the most occurrence of an element in an array
Solution:#include <stdio.h>

void findMostFrequent(int arr[], int n) {
    int maxCount = 0, mostFrequent;
    
    for (int i = 0; i < n; i++) {
        int count = 1;
    
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
       
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    
    printf("Most frequent number: %d (appears %d times)\n", mostFrequent, maxCount);
}

int main() {
    int arr[] = {1, 3, 2, 3, 4, 1, 3, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMostFrequent(arr, n);

    return 0;
}
