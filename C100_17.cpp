/**
 * 打印出如下图案（菱形）
 *
 *    *
 *   ***
 *  *****
 * *******
 *  *****
 *   ***
 *    *
 */
#include <iostream>
using namespace std;

void printDiamond(int rows) {
    int high = rows / 2 + 1;
    for (int i=0; i<high; i++) {
        for (int j=0; j<high-i; j++) {
            cout<<" ";
        }
        for (int k=0; k<2*i+1; k++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int l=0; l<high-1; l++) {
        for (int n=0; n<=l+1; n++) {
            cout<<" ";
        }
        for (int m=2*(high-l-1)-1; m>0; m--) {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    cout<<" c++"<<endl;
    int rows;
    cout<<" please input the rows(rows>0): ";
    cin>>rows;
    printDiamond(rows);
    cout<<endl<<endl;
    return 0;
}
