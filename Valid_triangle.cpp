#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the side a:";
    cin>>a;
    int b;
     cout<<"Enter the side b:";
    cin>>b;
    int c;
     cout<<"Enter the side c:";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b)
    cout<<"Valid Triangle";
    else 
    cout<<"Not a Valid Triangle";
}