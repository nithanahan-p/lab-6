#include<iostream>
using namespace std;
//function to  add 2 parametrs through call by value
int sum(int a, int b)
{	int sum=a+b;
	return sum;}
//function to add by reference
void sumR(int a, int b, int &sum)
{	sum=a+b;
	}
//function to find max 2 no. through call by value
int max(int a, int b)
{	 
	if(a>b)
	return a;
	else
	return b;
}

//function to find max  2 no. through all by reference
void maxR(int a, int b, int &max)
{	
	if(a>b)
	 max=a;
	else
	 max=b;
	}
//function to find min 2 no. through call by value
int min(int a, int b)
{	 
	if(a>b)
	return b;
	else
	return a;
}

//function to  to find min 2 no. through call by reference
void minR(int a, int b, int &min)
{	
	if(a>b)
	 min=b;
	else
	 min=a;
	}

int main(){
	//declare the variables 	
	int a, b,c;
	
 	cout<<"enter the parameters"<<endl;
	cin>>a;
	cin>>b;
	int p,q;
	//ask the user about the function it wants to perform
	cout<<"enter which function wanted: 1)sum or 2)max or 3)min"<<endl;
	cin>>p;
	//ask if operation to be performrd by value or reference
	cout<<" 1) call by value"<<endl<<"2) call by reference"<<endl;
	cin>>q;
	//perform the operation entered by user
	if(p==1)
	{	if(q==1)
			{	
		
			//display the sum through call by value
			 cout<<"the sum is:"<< sum(a,b);}


		else	
			{//call the function sum through call by reference
			sumR(a,b,c);
			//display the sum which is stored in c
			 cout<<"the sum is:"<< c;}	
	}

	else if(p==2)
	
	{	if(q==1)
			{
			//display the max of two no. through call by value
			cout<<"the max of two no. is"<<max(a,b);
			}
		else{
			//call the function max through call by reference
			maxR(a,b,c);
			//display the max which is stored in c
			 cout<<"the max of two no. is"<< c;
			}
	}
	
	else
	{	if(q==1){
			//display the min of two no.through call by value
			cout<<"the min of two no. is"<<min(a,b)<<endl;
	
			}
		else{
			//call the function sum through call by reference
			minR(a,b,c);
			//display the min which is stored in c
			 cout<<"the min of two no. is"<< c;

			
			}	
	}
}


