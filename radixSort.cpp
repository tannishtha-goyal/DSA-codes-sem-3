#include <iostream>
using namespace std;

void radixSort(int a[], int n) {
    int max = a[0];

    for(int i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];

    for(int pos = 1; max / pos > 0; pos *= 10) {
        int b[100] = {0};

        for(int i = 0; i < n; i++)
            b[(a[i] / pos) % 10]++;

        for(int i = 1; i < 10; i++)
            b[i] += b[i - 1];

        int output[100];

        for(int i = n - 1; i >= 0; i--) {
            int digit = (a[i] / pos) % 10;
            output[--b[digit]] = a[i];
        }

        for(int i = 0; i < n; i++)
            a[i] = output[i];
    }
}

int main() {
    int a[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = 8;

    radixSort(a, n);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
