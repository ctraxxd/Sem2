#include <iostream>

void move(int n, int l, int r) {
    std::cout << n << " " << char('A' + l) << " " << char('A' + r) << '\n';
}

void hanoi(int n, int l = 0, int r = 2) {
    if(n == 0)
        return;
    int x = 3 - l - r;
    hanoi(n - 1, l, x);
    move(n, l, r);
    hanoi(n - 1, x, r);
}

int main() {
    hanoi(5);
    return 0;
}
