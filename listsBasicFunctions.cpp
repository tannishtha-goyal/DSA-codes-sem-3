#include <iostream>
using namespace std;

class ArrayOp {
public:
    int search(int a[], int n, int x) {
        for(int i=0; i<n; i++)
            if(a[i]==x) return i;
        return -1;
    }

    void insert(int a[], int &n, int x, int y) {
        for(int i=0; i<n; i++)
            if(a[i]==x) {
                for(int j=n; j>i+1; j--)
                    a[j]=a[j-1];
                a[i+1]=y;
                n++;
                return;
            }
    }

    void remove(int a[], int &n, int x) {
        for(int i=0; i<n; i++)
            if(a[i]==x) {
                for(int j=i; j<n-1; j++)
                    a[j]=a[j+1];
                n--;
                return;
            }
    }

    void show(int a[], int n) {
        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;
    }
};

int main() {
    ArrayOp obj;
    int a[10]={1,4,6,7,8}, n=5, x, y;

    cin >> x;
    cout << "Index: " << obj.search(a,n,x) << endl;

    cin >> x >> y;
    obj.insert(a,n,x,y);
    obj.show(a,n);

    cin >> x;
    obj.remove(a,n,x);
    obj.show(a,n);

    return 0;
}
