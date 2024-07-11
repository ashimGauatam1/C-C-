#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;	
	Node* prev;
};

class List{
	Node*head;
	public:
		List(){
			head=nullptr;
		}
		void addb(int item){
			Node *newnode=new Node;
			newnode->data=item;
			newnode->next=head;
			head=newnode;
		}
		void addend(int item){
			Node* newnode=new Node;
			newnode->data=item;
			newnode->next=nullptr;
			if(head==nullptr){
				head=newnode;
			}
			else{
				Node*temp=head;
				while(temp->next!=nullptr){
					temp=temp->next;
				}
				temp->next=newnode;
			}
		}
		void delb(){
			if(head==nullptr){
				return;
			}
			Node* temp=head;
			head=head->next;
			delete temp;
		}
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
