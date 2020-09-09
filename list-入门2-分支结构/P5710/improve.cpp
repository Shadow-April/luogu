/*************************************************************************
	> File Name: improve.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Wed, Sep  9, 2020  6:38:33 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int x;
bool a,b;
int main()
{
	scanf("%d",&x);
	a=!(x&1), b=(x>4&&x<=12);
	printf("%d %d %d %d\n", a&&b,a||b,(a&&!b||b&&!a),!a&&!b);
}

