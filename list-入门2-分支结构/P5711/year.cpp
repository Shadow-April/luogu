/*************************************************************************
	> File Name: year.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Thu, Sep 10, 2020  8:48:36 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int year;
	scanf("%d", &year);
	if(year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) printf("0\n");
	else printf("1\n");
	return 0;
}
