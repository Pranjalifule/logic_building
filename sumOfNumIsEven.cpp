 #include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        int n = i;
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        if (sum % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
