#include <stdio.h>
int main(void) {
	int n,i;
    scanf("%d",&n);
    int a[n],b[n],lead[n],win[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    int sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        sum1+=a[i];
        sum2+=b[i];
        if(sum1>sum2)
        {
            lead[i]=sum1-sum2;
            win[i]=1;
        }
        else{
            lead[i]=sum2-sum1;
            win[i]=2;
        }
 }
  int w=0,l=0;
 for(i=0;i<n;i++){
  if(l<=lead[i])
  {
   l=lead[i];
   w=win[i];
  }
 }
 printf("%d %d",w,l);
	return 0;
}

