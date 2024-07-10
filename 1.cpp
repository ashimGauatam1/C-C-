#include<iostream>
using namespace std;

class Test{
	int x;
	public:
		Test(int a){
			x=a;
		}
		Test(){
			x=0;
		}
		void multiply(Test t1){
			cout<<--t1.x;
		}
};

main(){
	Test t3(7),t4(8),t5;
	t5.multiply(t3);
}