#include<iostream>
using namespace std;
//writing the function
int sumOdd(int a,int b){
  int sum=0;
  //giving condition using loop
  for(int i=a;i<=b;i++){
    if(i%2==1){
    sum=sum+i;
    }
  }
   return sum;
}
//driving the function
int main(){
   //declairing variables
   int a,b;
   //asking user for values
   cout<<"enter a"<<endl;
   cin>>a;
   cout<<"enter b"<<endl;
   cin>>b;
   cout<<"the sum of odd numbers is :"<<sumOdd(a,b);
return 0;
}
  
