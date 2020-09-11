/*************************************************************************
	> File Name: bmi.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Fri, Sep 11, 2020  9:34:04 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
double mg, height, bmi;
int main()
{
	cin>>mg>>height;
	bmi=mg/(height*height);
	if(bmi<18.5) cout<<"Underweight"<<endl;
	if(bmi>=18.5 && bmi<24)
		cout<<"Normal";
	if(bmi>=24)
		cout<<bmi<<endl<<"Overweight"<<endl;
	return 0;
}

