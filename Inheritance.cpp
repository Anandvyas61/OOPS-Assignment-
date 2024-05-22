#include<iostream>
using namespace std;
class A{
int a=4,b=5;
public:
int mul(){
    return a*b;
}
};
class B:public A{
    public:
    void display(){
        cout<<"the multiplication of a and b is : "<<mul()<<endl;
    }
};
int main(){
    B obj;
    obj.display();
    return 0;
}
