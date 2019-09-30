#include<iostream>
using namespace std;
int main ()
{
	int orignum,num,rem,sem=0;
	cout<<"enter a positive integer";
	cin>>orignum;
	 num=orignum;
	 while(num !=0)
	 {
	 	rem=num%10;
	 	sum+=rem*rem;
	 	num/=10;
	 	
	 }
	 if(sum==orignum)
	 cout<<original<<"is an armstrong num";
	 else
	 cout<<orignum <<"is not an armstromg num";
	
	return 0;
0}
