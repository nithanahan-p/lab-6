#include<iostream>
using namespace std;
//writing function
//call by ref
void funcR(int a,int b,int &c){
   if (a>b){
   c=a;
   }
   else{
   c=b;
  }
}
//driving the function
int main(){
   //declairing variables
   int a,b,max;
   //asking parameters
   cout<<"write the two parameters "<<endl;
   cin>>a;
   cin>>b;
   funcR(a,b,max);
   cout<<"the max is "<<max<<endl;
}
