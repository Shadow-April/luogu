/*************************************************************************
	> File Name: trangle.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Thu, Oct  8, 2020  9:39:48 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
long long n,m,rec,sqr;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			if(i==j) sqr+=(n-i)*(m-j);
			else rec+=(n-i)*(m-j);
		}
	cout<<sqr<<" "<<rec<<endl;
	return 0;
}

