//MUHIB KHAN
//BSCS section(D)
//ASSIGNMENT
//DR.AYESHA HAKIM

#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char choice;
	
	while(true){
	
	cout<<"Enter First Number:"<<endl;
	cin>>i;
	cout<<"Enter Second Number:"<<endl;
	cin>>j;
	cout<<"Enter operation:"<<endl;
	cin>>choice;
	if (choice =='+')
	cout<<i<<"+"<<j<<"="<<i+j<<endl;

	    else if (choice =='-')
	cout<<i<<"-"<<j<<"="<<i-j<<endl;

		else if (choice =='*')
	cout<<i<<"*"<<j<<"="<<i*j<<endl;

		else if (choice =='/')
	cout<<i<<"/"<<j<<"="<<i/j<<endl;

		else if (choice =='%')
	cout<<i<<"%"<<j<<"="<<i%j<<endl;
else
break;


}
cout<<"invalid choice";


}
