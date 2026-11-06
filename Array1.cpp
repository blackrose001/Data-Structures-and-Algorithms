#include <iostream>
using namespace std;

int main(void) {
    // we took a variable here to put inside the array then the size of the array will be equal to the value of the variable
    const int size = 200;
    char text[size];
    cout << "Enet a few lines: ";
    // here we had taken the "text" n "size" as pe the variable name is text n size n in general also we put name the size of array here
    cin.getline(text, size);
    for(int i = 0; text[i] != '\o', i++;) {
        cin >> text[i];
    }
    for(int i = 0; text[i] != '\o', i++;) {
        cout << text[i];
}
}