#include <iostream>
#include <random>
#include "../my_struct/vector.h"

int main() {
    std::mt19937 mt(time(NULL));
    Vector<double> a, b;
    int n;
    std::cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
        a[i] = mt() % 1000;
    for (int i: a)
        std::cout << i << " ";
    std::cout << '\n';
    for (int i = 0; i < a.size(); i += 3) {
        if (i + 3 > a.size()) {
            double sum = 0, cnt = 0;
            for (int j = i; j < a.size(); j++)
                sum += a[j], cnt++;
            b.push_back(sum / cnt);
        } else b.push_back(a[i] + a[i + 1] + a[i + 2] - std::max(a[i], std::max(a[i + 1], a[i + 2])) -
                           std::min(a[i], std::min(a[i + 1], a[i + 2])));
    }
    for (double i: b)
        std::cout << i << " ";
    return 0;
}
