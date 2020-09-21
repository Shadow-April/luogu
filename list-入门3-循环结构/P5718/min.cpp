#include<bits/stdc++.h> //万能头文件
using namespace std;
int n,minn=0x3f3f3f3f,a;

int main()
{
	scanf("%d",&n);
	while(n--)
		scanf("%d",&a),minn=min(a,minn);
	printf("%d",minn);
	return 0;
}