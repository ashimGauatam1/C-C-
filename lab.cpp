#include<iostream>
using namespace std;
		void delatlast(){
			if(head==nullptr){
				return;
			}
			Node*current=head;
			Node*pre=nullptr;
			while(current->next!=nullptr){
				pre=current;
				current=current->next;
			}
			pre->next=nullptr;
			delete current;
		}
		void display(){
			Node *temp=head;
			while(temp!=nullptr){
				cout<<temp->data<<endl;
				temp=temp->next;
			}
		}
};
main(){
	List l;
	l.addb(78);
	l.addb(74);
	l.addend(77);
	l.addb(2);
	l.addend(1);
//	l.display();
	l.delb();
	l.delatlast();
	l.display();
}