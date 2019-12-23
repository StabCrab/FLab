//
// Created by trykr on 10.12.2019.
//
#include <iostream>

using namespace std;
int static_global1 = 1;
int static_global2 = 1;
int main()
{
    int automatic1 = 2;
    int automatic2 = 2;
    cout << "Global" << endl;
    cout << &static_global1 << endl;
    cout << &static_global2 << endl;
    cout << "Automatic" << endl;
    cout << &automatic1 << endl;
    cout << &automatic2 << endl;
    int *dynamic1 = new int;
    int *dynamic2 = new int;
    *dynamic1 = 3;
    *dynamic2 = 3;
    cout << "Dynamic" << endl;
    cout << dynamic1 << endl;
    cout << dynamic2 << endl;
    delete dynamic1;
    delete dynamic2;
}
