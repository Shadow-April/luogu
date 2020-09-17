/*************************************************************************
	> File Name: triangle.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Thu, Sep 17, 2020  7:44:05 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int a[3];
int main()
{
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	cout<<a[0]<<'/'<<a[2];
	return 0;
}

