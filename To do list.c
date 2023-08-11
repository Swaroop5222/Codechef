#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int a;
	    scanf("%d",&a);
	    int count=0;
	    for(int i=1; i<=a; i+=1)
	    {
	        int arr[a];
	        scanf("%d",&arr[i]);
	        if(arr[i]>=1000)
	            count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

