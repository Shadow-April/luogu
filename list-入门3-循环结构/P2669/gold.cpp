/*************************************************************************
	> File Name: gold.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Sat, Oct  3, 2020  9:51:24 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int K,N,coin=0;
	scanf("%d",&K);
	for(N=1;K-N>=0;K-=N++)
		coin+=N*N;
	printf("%d\n",coin+K*N);
	return 0;
}
// what the fucking genius!
