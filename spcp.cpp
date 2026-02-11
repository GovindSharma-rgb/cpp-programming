#include<iostream>
using namespace std;
int main(){
    int cp;
    cin>>cp;
    int sp;
    cin>>sp;
    if(cp>sp)
    cout<<"loss is"<<sp-cp;
    else if(sp>cp)
    cout<<"profit is :"<<cp-sp;44
    else
    cout<<"No profit ,No loss";
    
}