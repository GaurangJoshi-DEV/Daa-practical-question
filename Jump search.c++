/*
Question: Jump Search
Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],...,arr[2k] and so on. Once the interval (arr[2k] < key < arr[2k+1]) is found, perform a linear search operation from the index 2k to find the element key.

Input Format:
The first line contains number of test cases, T. For each test case, there will be three input lines. 
First line contains n (the size of array).
Second line contains n space-separated integers describing array.
Third line contains the key element that need to be searched in the array.

Output Format:
The output will have T number of lines.
For each test case, output will be "Present" if the key element is found in the array, otherwise "Not Present".
Also for each test case output the number of comparisons required to search the key.

Time Complexity: O(√n)
Space Complexity: O(1)
*/

#include <iostream>
#include <cmath>
using namespace std;

void jumpSearch(int arr[], int n, int key) {
    int comparisons = 0;
    bool found = false;
    
    // Find the block size to be jumped
    int step = sqrt(n);
    
    // Finding the block where element is present
    int prev = 0;
    while(arr[min(step, n) - 1] < key) {
        comparisons++;
        prev = step;
        step += sqrt(n);
        if(prev >= n) {
            break;
        }
    }
    
    // Doing a linear search for key in block beginning with prev
    while(prev < min(step, n)) {
        comparisons++;
        if(arr[prev] == key) {
            found = true;
            break;
        }
        prev++;
    }
    
    if(found) {
        cout << "Present " << comparisons << endl;
    } else {
        cout << "Not Present " << comparisons << endl;
    }
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
        
        jumpSearch(arr, n, key);
        
        delete[] arr;
    }
    
    return 0;
} 
