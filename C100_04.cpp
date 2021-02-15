#include <iostream>
using namespace std;

/**
 * 9*9³Ë·¨¿Ú¾÷
 */
void printMultiplicationFormula() {
    for (int i=1; i<=9; i++) {
        for (int j=1; j<=i; j++) {
            if (i*j < 10) {
                cout<<" "<<j<<" * "<<i<<" = "<<i*j<<"  ";
            } else {
                cout<<" "<<j<<" * "<<i<<" = "<<i*j<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
    printMultiplicationFormula();
}
