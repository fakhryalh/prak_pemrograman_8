#include <iostream>
#include <iomanip>
using namespace std;

void insertion_sort(int data[], int s) {
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

int main() {
    int n;
    cin >> n;
    
    int data[n];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    
    insertion_sort(data, n);
    
    if (n % 2 == 1) {
        int median = data[n / 2];
        cout << median << endl;
    } else {
        double median = (data[n / 2 - 1] + data[n / 2]) / 2.0;
        cout << median << endl;
    }
    
    return 0;
}
