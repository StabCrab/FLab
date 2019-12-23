//
// Created by trykr on 15.12.2019.
//
#include <iostream>
using namespace std;
struct human_not_lined
{
    bool gender;
    int age;
    char name[10];
    float height;
    int weight;
};

struct human_lined
{
    int age;
    float height;
    int weight;
    char name[10];
    bool gender;
};
#pragma pack(push,1)
struct human_with_pragma
{
    bool gender;
    int age;
    char name[10];
    float height;
    int weight;
};
#pragma pack(pop)


int main()
{
    human_lined a;
    human_not_lined b;
    human_with_pragma c;
    cout << sizeof(b) << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(c) << endl;
}