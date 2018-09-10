#include<iostream>
using namespace std;
//writing the function
//call by referance
void sumR(int a,int b,int &c){
     c=a+b;
}
//driving the function
int main(){
  //declairing variables
  int a,b,sum;
  //asking parameters
  cout<<"a"<<endl;
  cin>>a;
  cout<<"b"<<endl;
  cin>>b;
  sumR(a,b,sum);
  cout<<sum;
return sum;
}

