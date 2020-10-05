/*************************************************************************
	> File Name: autocr.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Mon, Oct  5, 2020 12:00:36 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
		if(s[i]>='a' && s[i]<='z') s[i]-=32;
	cout<<s;
	return 0;
}
