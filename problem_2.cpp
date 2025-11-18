#include <iostream>

using namespace std;

void insertion_sort_asc(int data[], int s) {
    for (int i = 1; i < s; i++) {
        int key = data[i];
        int j = i - 1;
        
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

void insertion_sort_desc(int data[], int s) {
    for (int i = 1; i < s; i++) {
        int key = data[i];
        int j = i - 1;
        
        while (j >= 0 && data[j] < key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

int main() {
    int n;
    cin >> n;
    
    int data[n];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    
    int ganjil[n], genap[n];
    int n_ganjil = 0, n_genap = 0;
    
    for (int i = 0; i < n; i++) {
        if (data[i] % 2 == 1) {
            ganjil[n_ganjil++] = data[i];
        } else {
            genap[n_genap++] = data[i];
        }
    }
    
    insertion_sort_asc(ganjil, n_ganjil);
    insertion_sort_desc(genap, n_genap);
    
    for (int i = 0; i < n_ganjil; i++) {
        cout << ganjil[i];
        if (i < n_ganjil - 1 || n_genap > 0) {
            cout << ",";
        }
    }
    
    for (int i = 0; i < n_genap; i++) {
        cout << genap[i];
        if (i < n_genap - 1) {
            cout << ",";
        }
    }
    cout << endl;
    
    return 0;
}
