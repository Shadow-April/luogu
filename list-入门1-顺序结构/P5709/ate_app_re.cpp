/*************************************************************************
	> File Name: ate_app_re.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Mon, Sep  7, 2020 12:22:45 AM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int m,t,s;
int main()
{
	cin>>m>>t>>s;
	if(t==0)
	{
		cout<<0<<endl;
		return 0;
	}
	if(s%t==0)
		cout<<max(m-s/t,0)<<endl;
	else
		cout<<max(m-s/t-1,0)<<endl;
	return 0;
}

