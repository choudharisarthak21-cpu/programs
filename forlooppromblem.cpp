#include<iostream>
using namespace std;

int main()
{
    for(int i = 100; i <= 200; i++)
    {
        if((i / 10) % 10 == 7)
        {
            cout << i << endl;
        }
    }
}