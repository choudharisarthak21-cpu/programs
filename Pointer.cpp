#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr;

    ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value using pointer (*ptr): " << *ptr << endl;

    return 0;
}