/*************************************************************************
	> File Name: counter.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Wed, Sep 30, 2020 11:27:23 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	scanf("%d%d", &n,&x);
	stringstream ssr;
	for(n++;--n;ssr<<n);
	string s = ssr.str();
	cout<<count(s.begin(),s.end(),x+'0')<<endl;
	return 0;
}
