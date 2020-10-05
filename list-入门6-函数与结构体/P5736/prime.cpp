/*************************************************************************
	> File Name: prime.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Mon, Oct  5, 2020  6:30:29 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
bool isprime(int x){//判断是否素数
	if(x<=1) return false;//如果小于2，一定不是素数
	for(int i=2;i<=sqrt(x);i++){//为什么要到sqrt(x)呢，因为如果有一个大于sqrt(n)的数可以被n整除，那么必有一个数n/i也可以被n整除且小于i
		if(x%i==0) return false;//如果可以整除，那么不是素数
	}
	return true;//是素数
}
int main(){
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(isprime(a)){
			cout<<a<<" ";//是素数，就输出
		}
	}
	return 0;
}


