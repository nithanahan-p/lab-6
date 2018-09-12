#include<iostream>
using namespace std;
//writing the function
//function to add even numbers
   int func1(int a,int b){
   int sum;
   for(int i=a;i<=b;i++){
     if(i%2==0){
     sum=sum+i;}
}
return sum;}
//function to add odd numbers
   int func2(int a,int b){
   int sum;
   for(int i=a;i<=b;i++){
     if(i%2==1){
     sum=sum+i;}

return sum;}
}
//function to add square of even numbres
  int func3(int a,int b){
  int sum;
  for(int i=a;i<=b;i++){
    if(i%2==0){
    sum=sum+(i*i);}
}
return sum;d declaration before ‘}’ token
 return sum;}

}
//func to add square of odd num
  int func4(int a,int b){
  int sum;
  for(int i=a;i<=b;i++){
   if(i%2==1){
   sum=sum+(i*i);}
}
return sum;
}

//main function
int main(){
  //declairing variables
  int a,b;
  cout<<"enter the numbers:"<<endl;
  cin>>a;
  cin>>b;
  
  int p;
 //ask user which func you wanted
  cout<<"which func u wanted:1)func1 or 2)func2 or 3)func3   or 4)func4"<<endl;
 cin>>p;
  //condition 
  if(p==1){
     cout<<"sum of even num :"<<func1(a,b)<<endl;}
  
  if(p==2){
     cout<<"sum of odd num :"<<func2(a,b)<<endl;;}
  
  if(p==3){
     cout<<"sum of squares of even num"<<func3(a,b)<<endl;;}
  if(p==4){
     cout<<"sum of squares of odd nums"<<func4(a,b)<<endl;;}
return 0;
}

      



