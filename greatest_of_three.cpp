#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the 1st Number : ";
    cin>>a;
    int b;
    cout<<"Enter the 2nd Number : ";
    cin>>b;
    int c;
    cout<<"Enter the 3rd Number : ";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is greatest";
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is greatest";
    }
     else 
    {
        cout<<c<<" is greatest";
    }
}