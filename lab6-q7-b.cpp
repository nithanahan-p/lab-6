#include<iostream>
using namespace std;
//writing the function
char func(int s){
  int p;
  //giving condition
  for(int i=65;i<=90;i++){
  if(s==i){
  p=s;}}
return p;
}
//driving the function
int main(){
  //declairing variables
  int s;
  char a;
  cout<<"enter the alphabet in uppercase:";
  cin>>a;
  //type casting
  s=int(a);
  int f=func(s);
  cout<<"lowercase alphabet is:"<<char(f+32);
return 0;
}
