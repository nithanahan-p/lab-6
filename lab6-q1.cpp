#include<iostream>
using namespace std;
//function obtains values of unitcost(c),units(u) and taxrarte(r)
void funcR1(int &u,int &c,int &r){
cout<<"enter the value of u"<<endl;
cin>>u;
cout<<"enter the value of r"<<endl;
cin>>r;
cout<<"enter the value of c"<<endl;
cin>>c;
cout<<endl;}
//func that recieves u,c,r and returns to salestax(st) and totdue(td)
void funcR2(int u,int c,int r,int &st,int &td){
//calculate st and td
  st=u*c*r;
  td=st+(u*c);}
//func that recieves u,c,r,st and td and outputs them in a readable format
void func3(int u,int c,int r,int st,int td){
cout<<"value of unitcost is "<<c<<endl;
cout<<"total no.of unit is "<<u<<endl;
cout<<"value of taxrate is "<<r<<endl;
cout<<"value of salestax is "<<st<<endl;
cout<<"value of totdue is "<<td<<endl;
}
 
//main func with u,c,r,st,td
int main(){
    //declairing variables
    int u,c,r,st,td ;  
    //displaying the funcs
    funcR1(u,c,r);
    funcR2(u,c,r,st,td);
    func3(u,c,r,st,td);
return 0;
}    

