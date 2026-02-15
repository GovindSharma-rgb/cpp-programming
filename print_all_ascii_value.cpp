#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the Number :";
    cin>>n;
    int i;
    for(i=65; i<=n; i++){
        cout<<i<<" "<<(char)i<<"\n";
    }
   
}