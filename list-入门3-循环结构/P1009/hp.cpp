#include<bits/stdc++.h>
#define dfn 20
using namespace std;
int k=1,n,num[dfn],sz[dfn],ans,bj=0;
int gjd(void){
    for(int i=2;i<=n;i++){
        ans=0; //进位值
        for(int j=0;j<k;j++){
            num[j]=num[j]*i+ans;    //先乘再加前面的进位
            ans=num[j]/10000;
            num[j]%=10000;
            if(ans!=0&&j+1==k){    //判断进位后是否已是最大位，如果是便跳出循环
                num[k++]=ans;    //最大位赋上进位值
                break;
            }
        }
        for(int j=0;j<k;j++){
            sz[j]+=num[j];         //结果加上该阶层的值
            sz[j+1]+=sz[j]/10000;  
            sz[j]%=10000;
        }
    }
}
int main(){
    scanf("%d",&n);
    memset(num,0,sizeof(num));
    memset(sz,0,sizeof(sz));
    num[0]=1;
    sz[0]=1;
    gjd();//神他妈模板； 
    for(int i=dfn-1;i>=0; i--){//从高位开始向下输出 
        if(bj) printf("%04d",sz[i]);//表示在输出一个小于4位的数值时, 将在前面补0使其总宽度为4位
        else if(sz[i])
        {
            printf("%d",sz[i]);
            bj=1;
        }
    }
    return 0;
}
