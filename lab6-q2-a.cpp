#include<iostream>
using namespace std;
//writing the function
int fun(int a,int b){
      //sum of two int parameters
      int sum=a+b;
      //returning the sum
      return sum;
}
//driving the function
int main(){
   //declairing variables
   int a,b;
   //asking parameters
   cout<<"first parameter is"<<endl;
   cin>>a;
   cout<<"second parameter is"<<endl;
   cin>>b;
   //output
   cout<<fun(a,b);
}
