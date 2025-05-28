#include <iostream>
using namespace std;

int main() {
    int B[6] = {5, 9, 2, 6, 1, 7};

    for (int i = 0; i < 6 ; i++) {
        for (int j = 0; j < 5; j++) { 
            if (B[j] > B[j + 1]) {  
                int temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }

    cout << "Sorted list: ";
    for (int i = 0; i < 6; i++) {
        cout << B[i] << " ";
    }

    return 0;
}
