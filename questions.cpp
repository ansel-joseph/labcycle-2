#include <iostream>
using namespace std;
int main() {
    cout << "Prime numbers from 1 to 100 are: " << endl;

    for (int i = 2; i <= 100; i++) {
        int j;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                break; 
            }
        }
        if (j == i) { 
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}