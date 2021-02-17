/**
 * 给一个不多于5位的正整数，
 * 要求：
 *   一、求它是几位数，
 *   二、逆序打印出各位数字。
 */
 #include <iostream>
 using namespace std;

 void printNumReverse(int n) {
    if (n > 0 && n < 10) {
        cout<<" one digit number."<<endl;
        cout<<" "<<n<<endl<<endl;
        return;
    }
    if (n >=10 && n < 100) {
        int ten = n / 10;
        int one = n % 10;
        cout<<" two digit nubmer."<<endl;
        cout<<" "<<one<<ten<<endl<<endl;
        return;
    }
    if (n >= 100 && n < 1000) {
        int hundred = n / 100;
        int ten = (n % 100) / 10;
        int one = n % 10;
        cout<<" three digit number."<<endl;
        cout<<" "<<one<<ten<<hundred<<endl<<endl;
        return;
    }
    if (n > 1000 && n < 10000) {
        int thousand = n / 1000;
        int hundred = (n % 1000) / 100;
        int ten = (n % 100) / 10;
        int one = n %10;
        cout<<" four digit number."<<endl;
        cout<<" "<<one<<ten<<hundred<<thousand<<endl<<endl;
        return;
    }
    if (n > 10000 && n < 100000) {
        int tenthousand = n / 10000;
        int thousand = (n % 10000) / 1000;
        int hundred = (n % 1000) / 100;
        int ten = (n % 100) / 10;
        int one = n % 10;
        cout<<" five digit number."<<endl;
        cout<<" "<<one<<ten<<hundred<<thousand<<tenthousand<<endl<<endl;
        return;
    }
 }

 int main() {
     int n;
     cout<<" please input n(0<n<100000): ";
     cin>>n;
     if (n <= 0 || n >= 100000) {
        cout<<" n must be larger than 0 and less than 100000."<<endl<<endl;
        return 1;
     }
     printNumReverse(n);
     return 0;
 }
