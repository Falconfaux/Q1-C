#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m,flag=0;
	    scanf("%d%d",&n,&m);
	    int t[m],r;
	    for(int i=1;i<=m;i++)
	    t[i]=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&r);
	        t[r]=1;
	    }
	    for(int i=1;i<=m;i++){
	        if(t[i]==0)
	        flag=1;
	    }
	    if(flag==1) printf("Yes\n");
	    else printf("No\n");
	    
	}
	return 0;
}