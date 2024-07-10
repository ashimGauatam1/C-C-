#include<iostream>
using namespace std;

template <class T>

void swapp(T a,T b){
	T temp;
	temp=a;
	a=b;
	b=temp;
		cout<<"swap\n";
	cout<<a<<"\t"<<b<<endl;
//	cout<<y1<<"\t"<<xy2<<endl;

}

int main(){
	int x1=6,x2=8;
	float y1=2.5,y2=6.8;
	cout<<x1<<"\t"<<x2<<endl;
	cout<<y1<<"\t"<<y2<<endl;
	swapp(x1,x2);
	swapp(y1,y2);
	return 0;
}