#include<stdio.h>
#define MAXIMUM_BLOCKS 100000
int main(){
	int L, H, i,blocked =0;
	int base[MAXIMUM_BLOCKS];
	int top[MAXIMUM_BLOCKS];
	scanf("%d %d",&L,&H);
	for(i=0;i< L;i++){
		scanf("%d", &base[i]);
	}
	for(i=0;i< L;i++){
		scanf("%d", &top[i]);
	}
	for( i=0;i< L;i++){
		if(base[i] + top[i] >= H){
			blocked = 1;
			break;
		}
	}
	if(blocked){
		printf("NO");
	}
	else{
		printf("YES");
	}
	return 0;
}
