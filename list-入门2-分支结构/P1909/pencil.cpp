/*************************************************************************
	> File Name: pencil.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Sun, Sep 13, 2020  7:12:43 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int m,a,b,c,ans=2100000000,x,i;
int main()
{
	scanf("%d",&m);
	for (;i<3;i++)
	{
		scanf("%d%d",&a,&b);
		x=std::ceil(m*1.0/a)*b;
		ans=std::min(x,ans);
	}
	printf("%d\n",ans);
	return 0;
}

