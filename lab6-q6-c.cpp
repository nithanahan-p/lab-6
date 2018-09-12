#include<iostream>
using namespace std;

 //function to add sum of squares of even numbers
   int func(int a,int b){
   int sum;
   sum=0;
   for(int i=a;i<b;i++){
     if(i%2==1){
     sum=sum+(i*i);}}

return sum;
}
//main func
int main(){
  //declairing variables
  int a,b;
  //ask user
  cout<<"enter nums"<<endl;
  cin>>a;
  cin>>b;
  cout<<"sum of sq of even nums is:"<<func(a,b);
return 0;
}

