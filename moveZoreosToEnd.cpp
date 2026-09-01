#include <iostream>
using namespace std;

void moveZeroes(int a[], int n) {
    int j = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
}

int main() {
    int a[] = {0, 1, 0, 3, 12};
    int n = 5;

    moveZeroes(a, n);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
