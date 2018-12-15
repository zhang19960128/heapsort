#include <iostream>
//i is the head, l is the size of heap
int parent(int i){
	return i>>2;
}
int leftchild(int i){
	return (i<<2)+1;
}
int rightchild(int i){
	return (i<<2)+2;
}
void max_heapify(int* A,int i,int l){
	int lc=leftchild(i);
	int rc=rightchild(i);
	int temp=A[i];
	int max=A[i];
	std::cout<<"tmep"<<std::endl;
	if(lc < l && temp<A[lc]){
		max=A[lc];
	}
	if(rc < l && A[i]<A[rc]){
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
int main(){
	int A[14]={27,17,3,16,13,10,1,5,7,12,4,8,9,0};
	max_heapify(A,3,14);
	for(size_t i=0;i<14;i++){
		std::cout<<A[i]<<std::endl;
	}
}
