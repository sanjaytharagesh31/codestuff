#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node *lchild;
	node *rchild;
};

class BinaryTree {
	public:
		node *root;
		BinaryTree() {
			root = NULL;
		}
		void insert(int value);
		void inorder(node *ptr);
		void preorder(node *ptr);
		void postorder(node *ptr);
};

void BinaryTree::insert(int value) {
	node *temp = new node;
	temp->data = value;
	temp->lchild = NULL;
	temp->rchild = NULL;
	
	if(root == NULL) {
		root = temp;
	}
	else {
		node *curnode, *parent;
		curnode = root;
		while(curnode != NULL) {
			parent = curnode;
			if(value < curnode->data) 
				curnode = curnode->lchild;
			else
				curnode = curnode->rchild;
		}
		
		if(value < parent->data)
			parent->lchild = temp;
		else
			parent->rchild = temp;
	}
	return;
}

void BinaryTree::inorder(node *ptr) {
	if(root == NULL){
		cout<<"No elements are there in the tree"<<endl;
		return;
	}
	if(ptr != NULL) {
		inorder(ptr->lchild);
		cout<<ptr->data<<" ";
		inorder(ptr->rchild);
	}
}

void BinaryTree::preorder(node *ptr) {
	if(root == NULL){
		cout<<"No elements are there in the tree"<<endl;
		return;
	}
	if(ptr != NULL) {
		cout<<ptr->data<<" ";
		preorder(ptr->lchild);
		preorder(ptr->rchild);
	}
}

void BinaryTree::postorder(node *ptr) {
	if(root == NULL){
		cout<<"No elements are there in the tree"<<endl;
		return;
	}
	if(ptr != NULL) {
		preorder(ptr->lchild);
		preorder(ptr->rchild);
		cout<<ptr->data<<" ";
	}
}

int main() {
	BinaryTree obj;
	int choice;
	cout<<"Implementation of binary tree using linked listd"<<endl;
	while(1) {
		cout<<endl<<"1) Insert element"<<endl;
		cout<<"2) Inoder traversal"<<endl;
		cout<<"3) Preorder traversal"<<endl;
		cout<<"4) Postorder traversal"<<endl;
		cout<<"5) Exit"<<endl;
		cin>>choice;
		switch(choice) {
			case 1:
				int ele;
				cout<<"Enter the element: ";
				cin>>ele;
				obj.insert(ele);
				break;
			case 2:
				obj.inorder(obj.root);
				break;
			case 3:
				obj.preorder(obj.root);
				break;
			case 4:
				obj.postorder(obj.root);
				break;
			case 5:
				exit(0);
			default:
				cout<<"Wrong choice reenter again"<<endl;
			}
		}
		return 0;
	}

