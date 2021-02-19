#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, c;
    cout<<" please input three nums, a, b, c: ";
    cin>>a>>b>>c;
    if (a > b) {
        swap(&a, &b);
    }
    if (a > c) {
        swap(&a, &c);
    }
    if (b > c){
        swap(&b, &c);
    }
    printf("\n\n %d %d %d\n\n", a, b, c);
    return 0;
}
