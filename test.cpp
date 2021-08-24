#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void f1() {}
    virtual ~A() {cout<<"ff"<<endl;} //late binding due to virtual destructor
};
class B : public A
{
    int b;

public:
    void f2() {}
    B() { cout << "gg" << endl; } //if parent is virtual it automatically gets virtual
};
int fun()
{
    A *p = new B; //it can only access object which are present in A class//base poointer can point to object of derived class
    p->f1();      //correct
    //p->f2();//error//due to early binding when virtual not defined
    delete p; //it deletes B//then it calls A class destructor then ,p gets deleted
}
int main()
{
    fun();
}
//gg//ff
// Pure virtual destructor is useful when you want to make a class abstract and you don't have any other method in the base class or you have but you don't want to force the derived classes to override those so you won't make them pure virtual.

// Then simply make the destructor pure virtual.