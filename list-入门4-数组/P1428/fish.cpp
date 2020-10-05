/*************************************************************************
	> File Name: fish.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Mon, Oct  5, 2020 11:31:47 AM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k=0;
	scanf("%d",&k);
	int cute[k];
	int more[k];
	for(int i=0;i<k;i++){
		scanf("%d",&cute[i]);
		more[i] = 0;
	}
	for(int j=0;j<k;j++){
		if(j!=0){
			for(int n=0;n<j;n++)
			cute[j]>cute[n]?more[j]+=1:more[j]+=0;
		}	
	}
	for(int m=0;m<k;m++)
	{
		m==k-1 ? printf("%d",more[m]) : printf("%d ",more[m]);
	}
	return 0;
}
