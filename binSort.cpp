#include <iostream>
using namespace std;

void binSort(int a[], int n) {
    int bin[10][10] = {0};
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        int index = a[i] / 10;
        bin[index][count[index]++] = a[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < count[i] - 1; j++) {
            for (int k = j + 1; k < count[i]; k++) {
                if (bin[i][j] > bin[i][k]) {
                    swap(bin[i][j], bin[i][k]);
                }
            }
        }
    }

    int k = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < count[i]; j++) {
            a[k++] = bin[i][j];
        }
    }
}

int main() {
    int a[] = {42, 23, 4, 16, 8, 15};
    int n = 6;

    binSort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
