/*************************************************************************
	> File Name: elec.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Tue, Sep 15, 2020 11:31:08 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
	double p;
	int n;
	scanf("%d", &n);
	if(n>400)
		p=150*0.4463+250*0.4663+(n-400)*0.5663;
	else
		if(n>150)
			p=150*0.4463+(n-150)*0.4663;
		else
			p=n*0.4663;
	cout<<floor(p*10+0.5)/10.0;
	return 0;
}
