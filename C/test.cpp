#include<iostream>
using namespace std;

void Insert(int a[],int size){
	int temp;
	for(int i=0;i<size;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0 && a[j]>key){
		a[j+1]=a[j];
		j--;
		}
		a[j+1]=key;
	}
}
main(){
	int n,i;
	int a[]={7,8,1,2,6};
	n=sizeof(a)/sizeof(a[0]);
	Insert(a,n);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
