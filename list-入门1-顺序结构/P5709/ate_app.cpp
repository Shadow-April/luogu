/*************************************************************************
	> File Name: ate_app.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Sat, Sep  5, 2020 10:51:33 AM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int m,t,s;
int main()
{
	cin>>m>>t>>s;
	if(t==0) cout<<m;
	else{
		if(s%t==0) cout<<max(0,m-s/t);
		else cout<<max(0,m-s/t-1);
	}
	return 0;
}

