#include<iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter Number of Rows: ";
    cin >> row;

    int* arr_jag[row];
    int size[row];

    for (int i = 0; i < row; i++)
    {
        cout << "Enter number of elements in row " << i + 1 << ": ";
        cin >> size[i];
        arr_jag[i] = new int[size[i]];
    }

    for (int i = 0; i < row; i++)
    {
        cout << "Enter elements for row " << i + 1 << ": ";
        for (int j = 0; j < size[i]; j++)
        {
            cin >> arr_jag[i][j];
        }
    }

    cout << "\nJagged Array:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cout << arr_jag[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr_jag[i];
    }

    return 0;
}