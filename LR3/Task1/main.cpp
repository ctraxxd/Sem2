#include <iostream>
#include <string>

std::string Bin(int x) {
    std::cout << x << '\n';
    if (x)
        return (x >> 1 ? Bin(x >> 1) : "") + std::to_string(x & 1);
    else return std::to_string(x);
}

std::string Bin(double x, int sz = 0) {
    if (sz == 12)
        return "";
    x *= 2;
    std::string res = std::to_string((int) trunc(x)) + Bin(abs(x - floor(x)), sz + 1);
    return res;
}

std::string bin(double x) {
    return Bin((int) (trunc(x))) + "." + Bin(abs(x - floor(x)));
}

int main() {
    double x;
    std::cin >> x;
    std::cout << bin(x);
    return 0;
}
