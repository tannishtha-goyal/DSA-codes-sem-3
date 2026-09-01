#include <bits/stdc++.h>
using namespace std;

void sortArray(int a[], int n) {
    for(int i = 1; i < n; i++) {
        int k = i;

        while(k > 0 && a[k] < a[k-1]) {
            swap(a[k], a[k-1]);
            k--;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sortArray(a, n);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
