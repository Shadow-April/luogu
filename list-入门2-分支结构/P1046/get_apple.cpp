/*************************************************************************
	> File Name: get_apple.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Fri, Sep 18, 2020  8:46:17 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int height[15],H,s;
int main()
{
	for(int i=0;i<10;i++)cin>>height[i];
	cin>>H;
	H+=30;
	for(int i=0;i<10;i++)s+=!(H<height[i]);
	cout<<s;
	return 0;
}

