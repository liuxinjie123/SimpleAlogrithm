#include<iostream>
using namespace std;

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int buf[n][11];
        for (int x=0; x<n; x++) {
            for (int y=0; y<11; y++) {
                scanf("%d", &buf[x][y]);
            }
        }

        printf("\n\n");


        for (int i=0; i<n; i++) {
            int key;
            for (int j=1; j<=3; j++) {
                for (int k=j+1; k<11; k++) {
                    key = buf[i][j];
                    if (buf[i][j] < buf[i][k]) {
                        int temp = buf[i][j];
                        buf[i][j] = buf[i][k];
                        buf[i][k] = temp;
                        if (j == 3) {
                            key = buf[i][j];
                        }
                    }
                }
            }
            printf("%d %d\n", buf[i][0], key);
        }
        return 0;
    }
    return 0;
}
