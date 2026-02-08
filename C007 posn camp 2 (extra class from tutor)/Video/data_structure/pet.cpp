#include <bits/stdc++.h>
using namespace std;

struct Dog
{
    string name;
    int age;
    Dog(string s, int a)
    {
        name = s;
        age = a;
    }
    void bark()
    {
        cout << "Wolf ! Wolf ! aulf aulf ! \n";
    }
    int addage(int x)
    {
        age += x;
        return age;
    }
};

int main()
{
    string name;
    int age;
    cin >> name >> age;
    Dog data = Dog(name, age);
    cout << data.name << " " << data.age << "\n";
    data.bark();
    cout << data.addage(5);
}