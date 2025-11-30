#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 4, 3, 2};
    int n = 6;

    int freq[10000] = {0};

    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    for (int i = 0; i < 10000; i++)
        if (freq[i] > 0)
            cout << i << " → " << freq[i] << " times" << endl;
}
