#include<stdio.h>
#define MAX_NUM 10000000
int main(){
	int M,N,i;
	int A[MAX_NUM];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	scanf("%d",&M);
	int last_occurrence = -1;
	for(i=N-1;i>=0;i--){
		if(A[i] == M){
			int last_occurence = i;
			break;
		}
	}
}
