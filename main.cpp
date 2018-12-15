#include <iostream>
//i is the head, l is the size of heap
int parent(int i){
	return i>>1;
}
int leftchild(int i){
	return (i<<1)+1;
}
int rightchild(int i){
	return (i<<1)+2;
}
void max_heapify(int* A,int i,int l){
	int lc=leftchild(i);
	int rc=rightchild(i);
	int temp=A[i];
	int max=A[i];
	if(lc < l && max<A[lc]){
		max=A[lc];
	}
	if(rc < l && max<A[rc]){
		max=A[rc];
	}
	if(max==A[i]){
	}
	else if(lc < l && A[lc]==max){
		A[lc]=A[i];
		A[i]=max;
		max_heapify(A,lc,l);
	}
	else if(rc < l && A[rc]==max){
		A[rc]=A[i];
		A[i]=max;
		max_heapify(A,rc,l);
	}
}
void build_maxheap(int* A,int l){
	int middle=l>>1;
	for(int i=middle;i>=0;i--){
	for(size_t i=0;i<l;i++){
		std::cout<<A[i]<<" ";
	}
	std::cout<<std::endl;
		max_heapify(A,i,l);
	}
}
int main(){
	int A[10]={4,1,3,2,16,9,10,14,8,7};
	build_maxheap(A,10);
	for(size_t i=0;i<10;i++){
		std::cout<<A[i]<<std::endl;
	}
}
