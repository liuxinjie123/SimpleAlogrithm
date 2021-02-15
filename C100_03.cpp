#include <iostream>
using namespace std;

void sort(int arr[], int length) {
    for (int i=0; i<length; i++) {
        for (int j=i; j<length; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i=0; i<length; i++) {
        cout<< " " <<arr[i];
    }
    cout<<endl;
}

int main() {
    cout <<" please input three nums:(x,y,z):";
    int x, y, z;
    cin >>x>>y>>z;
    cout <<" x="<<x<<" y="<<y<<" z="<<z<<endl;
    int arr[] = {x, y, z};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<length; i++) {
        cout <<" " <<arr[i];
    }
    cout<<endl;

    sort(arr, length);

    for (int i=0; i<length; i++) {
        cout <<" " <<arr[i];
    }
    cout <<endl;
    return 0;
}
