#include<iostream>
using namespace std;
class base
{
public:
virtual void func1()=0;
virtual void func2()=0;
};
class derived1:public base
{
public:
void func1()override 
{
cout<<"vuggam naresh yadav"<<endl;
}
};
class derived2:public base
{
public:
void func2()override
{
cout<<"in derived2"<<endl;
}
};
int main()
{
derived2 d2;
derived1 d1;
d1.func1();
d2.func2();
}
