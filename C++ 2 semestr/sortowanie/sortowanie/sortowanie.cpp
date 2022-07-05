#include <iostream>
#include <time.h>
#include <stdio.h> 

using namespace std;

void bubblesort(int* tab, int n);
void quicksort(int* tab, int l, int p);
void countingsort(int* tab, int n);


int main() {
    clock_t start, stop, start1, stop1, start2, stop2;
    double czas, czas1, czas2;
    srand(time(NULL));
    int rozmiar = 100;
    int* tab = new int[rozmiar];
    int* tab1 = new int[rozmiar];
    int* tab2 = new int[rozmiar];
    //losowo------------------
    // for (int i = 0; i < rozmiar; i++) {
    //     tab[i] = rand() % 1000 + 1;
    //     tab1[i] = tab[i];
    //     tab2[i] = tab[i];   
    // }
    //rosnąco------------------
    // for (int i = 0; i < rozmiar; i++) {
    //     tab[i] = i;
    //     tab1[i] = tab[i];
    //     tab2[i] = tab[i];      
    // }
    //malejąco------------------
    int tmp = rozmiar;
    for (int i = 0; i < rozmiar; i++) {
        tab[i] = tmp;
        tmp--;
        tab1[i] = tab[i];
        tab2[i] = tab[i];
    }

    start = clock();
    bubblesort(tab, rozmiar);
    stop = clock();

    start1 = clock();
    quicksort(tab1, 0, rozmiar - 1);
    stop1 = clock();

    start2 = clock();
    countingsort(tab2, rozmiar);
    stop2 = clock();

    for (int i = 0; i < rozmiar; i++) {
        // cout << tab[i]<< " " << tab1[i] << " " << tab2[i] << endl;
    }

    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    czas1 = (double)(stop1 - start1) / CLOCKS_PER_SEC;
    czas2 = (double)(stop2 - start2) / CLOCKS_PER_SEC;

    cout << "czas bubblesort: " << czas << "s" << endl;
    cout << "czas quicksort: " << czas1 << "s" << endl;
    cout << "czas countingsort: " << czas2 << "s" << endl;

    delete[] tab;
    delete[] tab1;
    delete[] tab2;

    return 0;
}

void bubblesort(int* tab, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 1; j--) {
            if (tab[j] < tab[j - 1]) {
                int temp = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = temp;
            }
        }
    }
}
void quicksort(int* tab, int l, int p) {
    int v = tab[(l + p) / 2];
    int i, j, x;
    i = l;
    j = p;
    do {
        while (tab[i] < v) i++;
        while (tab[j] > v) j--;
        if (i <= j) {
            x = tab[i];
            tab[i] = tab[j];
            tab[j] = x;
            i++;
            j--;
        }
    } while (i <= j);
    if (j > l) quicksort(tab, l, j);
    if (i < p) quicksort(tab, i, p);
}
void countingsort(int* tab, int n) {
    // The size of count must be at least the (max+1) but
    // we cannot assign declare it as int count(max+1) in C++ as
    // it does not support dynamic memory allocation.
    // So, its size is provided statically.
    int tmp = 0;
    if (n < 1000) {
        tmp = 1000;
    }
    int* output = new int[n + 1 + tmp];
    int* count = new int[n + 1 + tmp];
    // int output[r + 1];
    // int count[r + 1];
    int max = tab[0];

    // Find the largest element of the array
    for (int i = 1; i < n; i++) {
        if (tab[i] > max)
            max = tab[i];
    }

    // Initialize count array with all zeros.
    for (int i = 0; i <= max; ++i) {
        count[i] = 0;
    }
    // Store the count of each element
    for (int i = 0; i < n; i++) {
        count[tab[i]]++;
    }

    // Store the cummulative count of each array
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // Find the index of each element of the original array in count array, and
    // place the elements in output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[tab[i]] - 1] = tab[i];
        count[tab[i]]--;
    }

    // Copy the sorted elements into original array
    for (int i = 0; i < n; i++) {
        tab[i] = output[i];
    }
    delete[] count;
    delete[] output;
}