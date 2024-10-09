#include <iostream>
#define windows ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

bool isPrime(int num) {
    int div = 2;
    while (div <= num - 1 && num % div != 0) div++;
    if (div == num) return true;
    else return false;
}

int main() { windows;
    int count = 0, num; cin >> num;

    for (int i = 2; i <= num; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << "\n" << count;

    return 0;
}