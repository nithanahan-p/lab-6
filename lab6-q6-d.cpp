#include<iostream>
using namespace std;
//writing the func
int func(int a,int b){
   int sum;
   //giving condition
   for(int i=a;i<b;i++){
     if(i%2==0){
     sum=sum+(i*i);}
}
return sum;
}
//main function
int main(){
  //declairing variables
  int a,b;
  //asking user for values
  cout<<"enter a"<<endl;
  cin>>a;
  cout<<"enter b"<<endl;
  cin>>b;
  cout<<func(a,b);
}

