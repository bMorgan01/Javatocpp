#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Please enter two numbers to add." << endl;
    cin >> a >> b;

    c = a + b;

    if (c == 1979) {
        cout << "Special number!!!!!!" << endl;
    }

    cout << c << std::endl;
    return 0;
}
