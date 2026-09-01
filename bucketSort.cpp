#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> bucket[10];

    for(int i = 0; i < n; i++)
        bucket[a[i] / 10].push_back(a[i]);

    for(int i = 0; i < 10; i++)
        sort(bucket[i].begin(), bucket[i].end());

    for(int i = 0; i < 10; i++)
        for(int x : bucket[i])
            cout << x << " ";

    return 0;
}
