#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,count=0;
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        count+=i;
    }
    printf("%d",count);
    return 0;
}
