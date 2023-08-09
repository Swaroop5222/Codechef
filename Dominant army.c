#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c;
	scanf("%d",&t);
	while(t--){
	   scanf("%d%d%d",&a,&b,&c);
	   if(a>b+c || b>a+c || c>a+b)
	   printf("yes\n");
	   else
	   printf("no\n");
	   
	}
	return 0;
}

