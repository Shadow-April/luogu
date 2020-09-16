/*************************************************************************
	> File Name: fish.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Wed, Sep 16, 2020 10:26:11 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int day,num,i,mile=0;
	cin>>day>>num;
	for(i=day;i<=day+num-1;++i){
		if(i%7==6||i%7==0){
			continue;
		}
		mile+=250;
	}
	cout<<mile<<endl;
	return 0;
}

