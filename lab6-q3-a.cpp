#include<iostream>
using namespace std;
//writing the function
int func(int a,int b){
   //giving condition for max
   if(a>b){
   return a;}
   else{
   return b;}}
//driving the function
int main(){
  //declairing variables
  int a,b,fun;
  //asking for parameters
  cout<<"parameter a"<<endl;
  cin>>a;
  cout<<"parameter b"<<endl;
  cin>>b;
  cout<<"the max is "<<func(a,b);

}
