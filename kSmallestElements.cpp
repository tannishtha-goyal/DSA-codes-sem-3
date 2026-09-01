#include <iostream>
using namespace std;

int partitionArray(int a[], int low, int high) {
    int pivot = a[low];
    int left = low, right = high;

    while(left < right) {
        while(left <= high && a[left] <= pivot)
            left++;

        while(a[right] > pivot)
            right--;

        if(left < right)
            swap(a[left], a[right]);
    }

    swap(a[low], a[right]);
    return right;
}

void findKSmallest(int a[], int low, int high, int k) {
    while(low <= high) {
        int pos = partitionArray(a, low, high);

        if(pos == k)
            break;
        else if(k < pos)
            high = pos - 1;
        else
            low = pos + 1;
    }
}

int main() {
    int a[] = {3, 2, 10, 5, 4, 7, 8, 9, 1, 6, 15, 11};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 8;

    findKSmallest(a, 0, n - 1, k - 1);

    cout << k << " smallest elements: ";
    for(int i = 0; i < k; i++)
        cout << a[i] << " ";

    return 0;
}
