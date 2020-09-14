/*************************************************************************
	> File Name: IBSN.cpp
	> Author: april
	> Mail: aprildykj@gmail.com 
	> Created Time: Mon, Sep 14, 2020  9:09:54 PM
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	char m[14], mod[12]="0123456789X";
	gets(m);
	int i,j=1,t=0;
	for(i=0;i<12;i++){
		if(m[i]=='-') continue;
		t+=(m[i]-'0')*j++;
	}
	if(mod[t%11]==m[12]) printf("Right");
	else{
		m[12]=mod[t%11];
		puts(m);
	}
	return 0;
}
