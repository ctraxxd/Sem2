#include <iostream>
#include <random>
#include <ctime>

int binpow(int digit, int powder, int mod = (int) 1e9 + 7) {
    if (powder == 0)
        return 1;
    if (powder & 1)
        return (1LL * binpow(digit, powder - 1, mod) * digit) % mod;
    int t = binpow(digit, powder << 1, mod);
    return (1LL * t * t) % mod;
}

int interpolation_sort(int *arr, int sz, int l, int r) {
    if (r - l + 1 <= 1)
        return 0;
    int mn = (1LL << 31) - 1, mx = -(1LL << 31);
    for (int i = l; i <= r; i++)
        mn = std::min(mn, arr[i]), mx = std::max(mx, arr[i]);
    if (mn == mx)
        return 0;
    int *siz = new int[r - l + 1];
    for(int i = 0; i < r - l + 1; i++)
        siz[i] = 0;
    int cnt = 0;
    for (int i = l; i <= r; i++) {
        int idx = (1LL * arr[i] - mn) * (r - l) / (1LL * mx - mn);
        siz[idx]++;
        if(siz[idx] == 1)
            cnt++;
    }
    int *L = new int[cnt], *R = new int[cnt];
    int lst = -1;
    cnt = 0;
    for(int i = 0; i < r - l + 1; i++) {
        if(!siz[i])
            continue;
        int nlst = lst + siz[i];
        L[cnt] = lst + 1, R[cnt] = nlst;
        cnt++;
        siz[i] = lst + 1;
        lst = nlst;
    }
    int *b = new int[r - l + 1];
    for (int i = l; i <= r; i++) {
        int idx = (1LL * arr[i] - mn) * (r - l) / (1LL * mx - mn);
        b[siz[idx]++] = arr[i];
    }
    for(int i = l; i <= r; i++)
        arr[i] = b[i - l];
    for(int i = 0; i < sz; i++)
        std::cout << arr[i] << " ";
    std::cout << '\n';
    for(int i = 0; i < cnt; i++)
        interpolation_sort(arr, sz, L[i], R[i]);
}

int binsearch(int *arr, int sz, int digit) {
    int l = 0, r = sz - 1;
    while (l < r) {
        int m = (l + r) / 2;
        if (arr[m] >= digit)
            r = m;
        else l = m + 1;
    }
    return (arr[l] == digit) ? l : -1;
}

int main() {
    std::mt19937 mt(time(NULL));
    int n;
    std::cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = mt() % 100000;
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << '\n';
    interpolation_sort(arr, n, 0, n - 1);
    int x;
    std::cin >> x;
    std::cout << binpow(binsearch(arr, n, x), n);
    return 0;
}
