#include<iostream>
using namespace std;
//writing the function
int func(int a,int b)
{
   int sum=0;
  //giving condition using loop
   for(int i=a;i<=b;i++){
   
   if(i%2==0)
{

   sum=sum+i;
}
}
   return sum;
}
//driving the function
int main()
{
  //declairing variables
  int a,b;
  //asking user for values of a and b
  cout<<"enter a"<<endl;
  cin>>a;
  cout<<"entre b"<<endl;
  cin>>b;
 cout<<"the sum of even numbers is :"<<func(a,b);
return 0;
}
