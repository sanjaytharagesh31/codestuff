#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

class queue{
	node *top,*rear,*temp;
	public:
	queue(){
		top=NULL;
		rear=NULL;
	}
	void push(int);
	void pop();
	void display();
};

void queue::push(int num){
	temp=new node;
	temp->data=num;
	if(top==NULL){
		temp->next=NULL;
		top=temp;
		rear=temp;
	}
	else{
		rear->next=temp;
		rear=temp;
	}
	cout<<"Inserted "<<num<<endl;
	display();
}

void queue::pop(){
	cout<<"Deleted "<<top->data<<endl;
	temp=top;
	top=top->next;
	delete temp;
	display();
}

void queue::display(){
	temp=top;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	queue obj;
	int c,item;
	cout<<"Linked List implementation of Queue"<<endl;
	while(1){
		cout<<"1. Insert"<<endl;
		cout<<"2. Delete"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. exit"<<endl;
		cout<<"Enter your choice:";
		cin>>c;
		switch(c){
			case 1:	cout<<"Enter a element to insert:";
					cin>>item;
					obj.push(item);
					break;
			
			case 2:	obj.pop();
					break;
			
			case 3:	obj.display();
					break;
					
			case 4: return 0;
					
			default: cout<<"Wrong choice!!"<<endl<<"Please select correct choice"<<endl;
		}
	}
	return 0;
}
