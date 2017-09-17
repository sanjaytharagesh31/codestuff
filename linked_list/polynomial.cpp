#include<iostream>
using namespace std;
// Program to add two polynomials
// UNDER CONSTRUCTION
struct Node {
	int cof;
	int pow;
	Node *next;
};

class addPolynomial {
	Node *head1, *head2, *answer;
	int deg1, deg2;
	
	public:
		addPolynomial();
		void getDegree();
		void getData(int);
		void finalResult();
		void printResult();
};
	
addPolynomial::addPolynomial(){
	head1 = NULL;
	head2 = NULL;
	answer = NULL;
}

void addPolynomial::getDegree(){
	cout<<"Degree of polynomial 1 ";
	cin>>deg1;
	cout<<"Degree of polynomial 2 ";
	cin>>deg2;
	return;
}

void addPolynomial::getData(int i){
	Node *rear;
	if(i == 1) {
		
		rear->pow = deg1;
		
		while(rear->pow != 0){
			cin >> rear->cof >> rear->pow;
			
			if(head1 == NULL){
				head1 = rear;
				rear->next = NULL;
			}
			
			else{
				Node *temp2;
				cin >> temp2->cof >> temp2->pow;
				rear->next = temp2;
				temp2->next = NULL;
				rear = temp2;
			}
		}
	}
	else {
		
		rear->pow = deg2;
		
		while(rear->pow != 0){
			cin >> rear->cof >> rear->pow;
			
			if(head1 == NULL){
				head2 = rear;
				rear->next = NULL;
			}
			
			else{
				Node *temp2;
				cin >> temp2->cof >> temp2->pow;
				rear->next = temp2;
				temp2->next = NULL;
				rear = temp2;
			}
		}
		
	}
	
	return;
}

void addPolynomial::finalResult() {
	Node *temp1, *temp2;
	temp1 = head1;
	temp2 = head2;
	// int max = deg1 > deg2 ? deg1 : deg2;
	Node *res;
	while(temp1 != NULL || temp2 != NULL) {
		if(temp1->pow == temp2->pow){
			if(answer == NULL){
				res->cof = temp1->cof + temp2->cof;
				res->pow = temp1->pow;
				res->next = NULL;
				answer = res;
			}
			else {
				Node *tempsam;
				tempsam->cof = temp1->cof + temp2->cof;
				tempsam->next = NULL;
				tempsam->pow = temp1->pow;
				res->next = tempsam;
			}
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		
		else if(temp1->pow > temp2->pow){
			if(answer == NULL){
				res->cof = temp1->cof;
				res->pow = temp1->pow;
				res->next = NULL;
				answer = res;
			}
			else {
				Node *tempsam;
				tempsam->cof = temp1->cof;
				tempsam->next = NULL;
				tempsam->pow = temp1->pow;
				res->next = tempsam;
			}
			temp1 = temp1->next;
		}
		
		else {
			if(answer == NULL){
				res->cof = temp2->cof;
				res->pow = temp2->pow;
				res->next = NULL;
				answer = res;
			}
			else {
				Node *tempsam;
				tempsam->cof = temp2->cof;
				tempsam->next = NULL;
				tempsam->pow = temp2->pow;
				res->next = tempsam;
			}
			temp2 = temp2->next;
			
		}
	}
	
	return;
}

void addPolynomial::printResult(){
	Node *temp = answer;
	while(temp != NULL){
		cout<<temp->cof<<" ";
		temp = temp->next;
	}
	return;
}
int main() {
	addPolynomial obj;
	obj.getDegree();
	cout<<"Enter data for polynomial 1 (coefficient power) :";
	obj.getData(1);
	cout<<"Enter data for polynomial 2 (coefficient power) :";
	obj.getData(2);
	obj.finalResult();
	obj.printResult();
	return 0;
}
	
	
