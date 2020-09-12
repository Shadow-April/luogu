/*************************************************************************
	> File Name: happy.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Sat, Sep 12, 2020  4:18:40 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,t,max=0,i,day=0;
	for(i=1;i<8;i++)
	{
		cin>>a>>b;
		t=a+b;
		if((t>max)&&(t>8)) max=t,day=i;
	}
	cout<<day;
	return 0;
}

