#include<iostream>
using namespace std;
inline int findLargest(int n1,int n2,int n3)
{
	return(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
}
int main()
{
	int n1,n2,n3;
	cout<<"enter the first number:";
	cin>>n1;
	cout<<"enter the second number:";
	cin>>n2;
	cout<<"enter the third number:";
	cin>>n3;
	int largest=findLargest(n1,n2,n3);
	cout<<"the largest number is:"<<largest<<endl;
	return 0;
}
