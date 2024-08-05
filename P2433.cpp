#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
#define pi 3.141593;

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    }
    else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3) {
        cout << 14 / 4 << endl;
        cout << 14 / 4 * 4 << endl;
        cout << 14 % 4;
    }
    else if (T == 4) {
        double a = 500.0 / 3;
        cout << setprecision(6) << a;
    }
    else if (T == 5) {
        cout << (260 + 220) / (12 + 20);
    }
    else if (T == 6) {
        cout << sqrt(pow(6, 2) + pow(9, 2));
    }
    else if (T == 7) {
        cout << 110 << "\n" << 90 << "\n" << 0 << "\n";
    }
    else if (T == 8) {
        cout << 2 * 5 * pi;
        cout << endl << pow(5, 2) * pi;
        cout << endl << pow(5, 3) * 4 / 3 * pi;

    }
    else if (T == 9) {
        int a = 1;
        for (int i = 0; i < 3; i++)
        {
            a++;
            a = a * 2;
        }
        cout << a;
    }
    else if (T == 10) {
        cout << 9;
    }
    else if (T == 11) {
        cout << 100.0 / 3;
    }
    else if (T == 12) {
        cout << 13 << "\n" << "R";
    }
    else if (T == 13) {
        double a = pow(4, 3) * 4 / 3 * pi;
        double b = pow(10, 3) * 4 / 3 * pi;
        int x = pow(a + b, 1.0 / 3);
        cout << x;
    }
    else if (T == 14) {
        int b = 120;
        for (int i = 0; i < 110; i++)
        {
            if (i * b == 3500) {
                cout << i;
                break;
            }
            b--;
        }
    }
    return 0;
}