#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};
    int n = 4, m = 4;

    bool hash[10000] = {false};

    for (int i = 0; i < n; i++)
        hash[A[i]] = true;

    for (int i = 0; i < m; i++)
        if (hash[B[i]])
            cout << B[i] << " ";
}
