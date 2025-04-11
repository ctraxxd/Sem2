#include <iostream>

int rec(int x, int y = 0) {
    if(!x)
        return y;
    return rec(x / 10, y * 10 + x % 10);
}

int main() {
    int x;
    std::cin >> x;
    std::cout << rec(x);
    return 0;
}
