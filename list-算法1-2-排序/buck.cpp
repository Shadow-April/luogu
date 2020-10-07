/*************************************************************************
	> File Name: buck.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Wed, Oct  7, 2020 10:24:22 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	int sum(0),bus[1002]={0};
	for(int i=1;i<=n;i++){
		cin>>x;
		if(bus[x])
			continue;
		bus[x]++;
		sum++;
	}
	cout<<sum<<endl;
	for(int i=1;i<=1000;i++)
		if(bus[i])
			cout<<i<<' ';
	cout<<endl;
	return 0;
}
