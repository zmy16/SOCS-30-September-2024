#include<stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	
	char results[T][10];
	
	for (int i=1; i<=T; i++){
		int a,b;
		scanf("%d %d", &a,&b);
		
		if (a > b) {
		sprintf(results[i-1],"Go-Jo");
		}else {
		 sprintf(results[i-1],"Bi-Pay");
		}
	}
	for (int i = 1; i<=T; i ++){
		printf("Case #%d: %s\n",i,results[i-1]);
	}
	
	
	return 0;
}
