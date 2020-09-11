/*************************************************************************
	> File Name: apples.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Thu, Sep 10, 2020  9:00:52 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int ate_apple(apple){
	if(apple == 0){
		return 0;
	} else if(apple == 1){
		return 1;
	} else {
		return 2;
	}
	
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("I ate apple %d\n", ate_apple(a));
	return 0;
}

// 真难，我不会写C++的方法
