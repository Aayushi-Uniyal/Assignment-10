#include <iostream>
using namespace std;

bool containsDuplicate(int arr[], int n) {
    bool hash[10000] = {false};  

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        if (hash[x]) return true;
        hash[x] = true;
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 1};
    int n = 4;
    cout << (containsDuplicate(arr, n) ? "true" : "false");
}
