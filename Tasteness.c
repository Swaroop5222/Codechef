#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c, d, f, s;
	scanf("%d",&t);
while(t--){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    f=a;
    else
    f=b;
    if(c>d)
    s=c;
    else
    s=d;
    printf("%d\n",f+s);
}	
	return 0;
}

