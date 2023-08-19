#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        int r=x/5;
        int q=x%5;
        if(r%2==0&&q!=0)
        {
            x=r*5;
        }
        else if(r%2!=0)
        {
            x=(r+1)*5;
        }
        
        printf("%d\n",(100-x));
        
    }
	// your code goes here
	return 0;
}



