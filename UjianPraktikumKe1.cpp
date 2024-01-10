#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan Input : ";
    cin >> n;

    if (n < 1) {
        cout << "Masukkan angka yang lebih besar dari 0." << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }


        for (int k = 1; k <= i; ++k) {
            cout << "^ ";
        }

        cout << endl;
    }

}