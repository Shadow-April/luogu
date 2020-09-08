/*************************************************************************
	> File Name: diagonal_ac.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Tue, Sep  8, 2020  9:23:33 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
unsigned long long n,ans;
int main()
{
	scanf("lld",&n);
	ans=n*(n-1)/2*(n-2)/3*(n-3)/4;
	printf("%lld\n",ans);
	return 0;
}

