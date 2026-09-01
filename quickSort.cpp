#include <bits/stdc++.h>
using namespace std;

void mergeSort(int a[], int l, int r) {
    if (l >= r) return;

    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);

    int i = l, j = m + 1;
    vector<int> temp;

    while (i <= m && j <= r) {
        if (a[i] < a[j])
            temp.push_back(a[i++]);
        else
            temp.push_back(a[j++]);
    }

    while (i <= m) temp.push_back(a[i++]);
    while (j <= r) temp.push_back(a[j++]);

    for (int k = 0; k < temp.size(); k++)
        a[l + k] = temp[k];
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
