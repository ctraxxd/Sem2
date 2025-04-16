#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>

int cntq, cnth, cntm;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        cnth++;
        heapify(arr, n, largest);
    }
}

void heap_sort(int *arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int partition(int *arr, int l, int r) {
    int pivot = arr[(l + r) / 2];
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
            cntq++;
        }
    }
    std::swap(arr[i + 1], arr[r]);
    cntq++;
    return i + 1;
}

void quick_sort(int *arr, int l, int r) {
    if (l < r) {
        int pi = partition(arr, l, r);
        quick_sort(arr, l, pi - 1);
        quick_sort(arr, pi + 1, r);
    }
}

void merge_sort(int *arr, int l, int r) {
    if (l == r)
        return;
    int m = (l + r) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    int *b = new int[(r - l + 1)];
    int i = l, j = m + 1, pos = 0;
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j])
            b[pos] = arr[i], i++;
        else b[pos] = arr[j], j++;
        pos++;
        cntm++;
    }
    for (; i <= m; i++)
        b[pos] = arr[i], pos++;
    for (; j <= r; j++)
        b[pos] = arr[j], pos++;
    for (int I = 0; I < (r - l + 1); I++) {
        arr[l + I] = b[I];
        cntq++;
    }
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
    int *arr1 = new int[n];
    int *arr2 = new int[n];
    int *arr3 = new int[n];
    for(int i = 0; i < n; i++)
        arr1[i] = arr[i], arr2[i] = arr[i], arr3[i] = arr[i];
    int t0 = clock();
    heap_sort(arr1, n);
    int t1 = clock();
    quick_sort(arr2, 0, n - 1);
    int t2 = clock();
    merge_sort(arr3, 0, n - 1);
    int t3 = clock();
    std::cout << std::fixed << std::setprecision(15);
    std::cout << "heap_sort:" << cnth << " " << (t1 - t0) / (double)CLOCKS_PER_SEC << '\n';
    std::cout << "quick_sort:" << cntq << " " << (t2 - t1) / (double)CLOCKS_PER_SEC << '\n';
    std::cout << "merge_sort:" << cntm << " " << (t3 - t2) / (double)CLOCKS_PER_SEC << '\n';
    merge_sort(arr, 0, n - 1);
    int x;
    std::cin >> x;
    std::cout << binsearch(arr, n, x);
    return 0;
}
