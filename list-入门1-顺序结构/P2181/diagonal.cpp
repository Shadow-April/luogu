/*************************************************************************
	> File Name: diagonal.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Mon, Sep  7, 2020  8:04:24 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a;
	scanf("%lld", &a);
	printf("%lld",a*(a-1)*(a-2)*(a-3)/24);
	return 0;
}
