#include <iostream>
#include <climits>
using namespace std;

int reverseInteger(int x) {
    long rev = 0;   

    while (x != 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }

    if (rev > INT_MAX || rev < INT_MIN)
        return -1;

    return (int)rev;
}

int main() {
    cout << reverseInteger(1534236469);
}
