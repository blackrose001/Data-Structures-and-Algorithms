#include <iostream>
using namespace std;

int main(void) {
    int even;
    int odd = 0;
    int divisor = 2;
    int array[2][3];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> array[i][j];
        }
    }
    cout << "Th eeven numbers in the aray are: ";

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if(array[i][j] % 2 == 0) {
                cout << array[i][j] << ",";
            }
        }
    }
    cout << endl;
    cout << "The odd numbers in array are: ";

            for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if(array[i][j] % 2 != 0) {
                cout << array[i][j] << ", ";
            }
        }
}
cout << endl;
}