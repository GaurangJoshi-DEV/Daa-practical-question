/*
Question: Binary Search with Duplicates
Given a sorted array of positive integers containing few duplicate elements,
design an algorithm and implement it using a program to find whether the given
key element is present in the array or not. If present, then also find the
number of copies of given key.
*/

#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    int first = -1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == key) {
            first = mid;
            right = mid - 1;  // Continue searching in left half
        }
        else if(arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return first;
}

int findLastOccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    int last = -1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == key) {
            last = mid;
            left = mid + 1;  // Continue searching in right half
        }
        else if(arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return last;
}

void findKeyWithCount(int arr[], int n, int key) {
    // First check if key exists
    int first = findFirstOccurrence(arr, n, key);
    
    if(first == -1) {
        cout << "Key not present" << endl;
        return;
    }
    
    // If key exists, find its count
    int last = findLastOccurrence(arr, n, key);
    int count = last - first + 1;
    
    cout << key << " - " << count << endl;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int* arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int key;
        cin >> key;
        
        findKeyWithCount(arr, n, key);
        
        delete[] arr;
    }
    
    return 0;
} 
