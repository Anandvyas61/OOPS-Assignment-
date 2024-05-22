#include<iostream>
using namespace std;
void swap(int &i, int &j);
int main(){
int a,b;
cout<<"enter the first number : "<<endl;
cin>>a;
cout<<"enter the  second number : "<<endl;
cin>>b;
cout<<"Before swaping : "<<endl;
cout<<"a="<<a<<endl<<"b="<<b<<endl;
swap(a,b);
cout<<"after swaping : "<<endl;
cout<<"a="<<a<<endl<<"b="<<b<<endl;

    return 0;
}
void swap(int &i,int &j){
    int t=i;
    i=j;
    j=t;
}
