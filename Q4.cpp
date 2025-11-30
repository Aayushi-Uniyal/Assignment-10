#include <iostream>
using namespace std;

int firstNonRepeating(int arr[], int n) {
    int freq[10000] = {0};

    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    for (int i = 0; i < n; i++)
        if (freq[arr[i]] == 1)
            return arr[i];

    return -1;
}

int main() {
    int arr[] = {4, 5, 1, 2, 0, 4};
    int n = 6;
    cout << firstNonRepeating(arr, n);
}
