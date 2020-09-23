#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int main()
{
	scanf("%d",&n);
	while(n){
		n>>=1;
		sum++;
	}
	printf("%d",sum);
	return 0;
}
