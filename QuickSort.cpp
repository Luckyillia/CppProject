#include <iostream>
#include <algorithm>

using namespace std;

void Sortowanie(int tab[], int left, int right) {
    int i = left;
    int j = right;
    int x = tab[(left + right) / 2];

    do {
        while (tab[i] > x) i++;
        while (tab[j] < x) j--;

        if (i <= j) {
            swap(tab[i], tab[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if (left < j) Sortowanie(tab, left, j);
    if (i < right) Sortowanie(tab, i, right);
}

int main() {
    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    int* tab = new int[n];
    cout << "Podaj elementy tablicy: ";
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    Sortowanie(tab, 0, n - 1);

    cout << "Posortowana tablica: ";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    delete[] tab;
    return 0;
}