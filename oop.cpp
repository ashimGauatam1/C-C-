#include<iostream>
#include<cstring>
using namespace std;

class Student {
	protected:
		char name[100],dob[100];
		int roll,x;
	public:
		Student(int a){
			x=a;
		}
		void getdata(){
			cout<<"enter name Date of birth(yyy/mm/dd) and roll number:\n";
			cin>>name>>dob>>roll;
		}
		virtual void dispaly(){
		};
};

class PG:public Student{
	char fac[100];
	int y;
	public:
		PG(int a):Student(a){
			y=a;
		}
		void getdata(){
			cout<<"enter faculty:\n";
			cin>>fac;
		}
		void display(){
			cout<<"name"<<name<<endl;
			cout<<"dob"<<dob<<endl;
			cout<<"roll"<<roll<<endl;
			cout<<"faculty"<<fac<<endl;
			cout<<"x"<<x;
		}
};

class UG:public Student{
	char pro[100];
	public:
		void getdata(){
			cout<<"enter program:\n";
			cin>>pro;
		}
		void display(){
			cout<<"name"<<name<<endl;
			cout<<"dob"<<roll<<endl;
			cout<<"roll"<<name<<endl;
			cout<<"program"<<pro<<endl;
		}
};



main(){
	PG p(2);
//	UG u;
//	for(int i=0;i<2;i++){
	p.Student::getdata();
	p.getdata();
//	}
//	for(int i=0;i<2;i++){
	p.display();
	}
//}