/*************************************************************************
	> File Name: demo.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Tue, Sep 22, 2020  2:04:30 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
double a,b;
int n,k,c;
int main()
{
  scanf("%d%d",&n,&k);
  c=n/k;//同上的c
  a=c*(c+1)/2*k;
  b=n*(n+1)/2-a;//求好两类的和
  printf("%.1f %.1f",a/c,b/(n-c));//除以数的个数即可得到
  return 0;
}
