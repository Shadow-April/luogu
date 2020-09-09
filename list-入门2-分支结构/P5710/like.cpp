/*************************************************************************
	> File Name: like.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Wed, Sep  9, 2020  5:34:46 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int a=0,b=0,c=0,d=0,m;
int main(){
	scanf("%d",&m);
	if(m%2==0&&m>4&&m<=12) a=1;
	if(m%2==0||m>4&&m<=12||m%2==0&&m>4&&m<=12) b=1;
	if(m%2==0&&m<=4&&m>12||m>4&&m<=12&&m%2==1) c=1;
	if(m%2==1&&m<=4||m%2==1&&m>12) d=1;
	printf("%d %d %d %d\n",a,b,c,d);
	return 0;
}
