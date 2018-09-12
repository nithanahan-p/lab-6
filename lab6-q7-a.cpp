#include<iostream>
using namespace std;
//writing function
char func(int s){
  int p;
  //giving condition
  for(int i=97;i<=122;i++){
   if(s==i){
   p=i;}
   }
return p;
}
 
//driving the function
int main(){
  //declairing variables
  
  char a;
  cout<<"enter alphabet in lowercase:";
  cin>>a;
  //type casting
  int s=int(a);
   int f=func(s);
  cout<<"uppercase is:"<<char(f-32);
return 0;
}
  
