/*************************************************************************
	> File Name: type.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Tue, Sep 22, 2020  1:43:06 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,sumc,sumn;
	int flag;
	double canmod,canntmod;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		i%k==0 ? sumc+=i : sumn+=i;
		i%k==0 ? flag++ : flag+=0;
	}
	printf("%.2f",sumc/flag);
	return 0;
}
