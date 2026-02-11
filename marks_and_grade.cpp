#include<iostream>
using namespace std;
int main(){
   int marks;
   cout<<"Enter the Marks : ";
   cin>>marks;
   if(marks>=81 && marks<=100)
   cout<<"very good";
   if(marks>=61 && marks<=80)
   cout<<"good";
    if(marks>=41 && marks<=60)
   cout<<"average";
   else
   cout<<"fail";
}