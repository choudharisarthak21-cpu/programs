#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << (a > 5 && b > 15) << endl;
    cout << (a > 5 || b < 15) << endl;
    cout << !(a > b) << endl;

    return 0;
}