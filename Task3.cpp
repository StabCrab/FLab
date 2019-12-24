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
    cout << "Address lined" << endl;
    cout << "gender: " << &a.gender << endl;
    cout << "age: " << &a.age << endl;
    cout << "name: " << &a.name << endl;
    cout << "height: " << &a.height << endl;
    cout << "weight: " << &a.weight << endl;
    cout << "Address not lined" << endl;
    cout << "gender: " << &b.gender << endl;
    cout << "age: " << &b.age << endl;
    cout << "name: " << &b.name << endl;
    cout << "height: " << &b.height << endl;
    cout << "weight: " << &b.weight << endl;
    cout << "Address with pragma" << endl;
    cout << "gender: " << &c.gender << endl;
    cout << "age: " << &c.age << endl;
    cout << "name: " << &c.name << endl;
    cout << "height: " << &c.height << endl;
    cout << "weight: " << &c.weight << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
}
