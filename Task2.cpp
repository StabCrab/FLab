//
// Created by trykr on 15.12.2019.
//
#include <iostream>
using namespace std;
int main()
{
    int static_array1[3];
    int static_array2[3] [3];
    int* dynamic_array1 = new int[3];
    int** dynamic_array2 = new int*[3];
    for (int i = 0; i < 3; i++)
    {
        dynamic_array2[i] = new int [5];
    }
    cout << "Static 1" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << &static_array1[i] << endl;
    }
    cout << endl;
    cout << "Static 2" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << &static_array2[i][j] << endl;
        }
    }
    cout << endl;
    cout << "Dynamic 1" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << &dynamic_array1[i] << endl;
    }
    cout << endl;
    cout << "Dynamic 2" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            cout << &dynamic_array2[i][j] << endl;
        }
    }
}

