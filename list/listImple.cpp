#include<iostream>
#include<list>
using namespace std;

//Practicing implementation of lists

void showlist(list<int> lst) {					// function to print elements of a list
	list<int> :: iterator it = lst.begin();
	cout<<"[";
	for(list<int> :: iterator it = lst.begin(); it != lst.end(); it++)
		cout<<*it<<" ";
	cout<<"]"<<"\n";
	return;
}

int main() {
	list<int> lst;  //declaring list
	
	lst.push_back(10);  //adding elements at back
 	lst.push_back(1);
	lst.push_back(6);
	lst.push_back(9);
	showlist(lst);
	
	lst.push_front(1);	//adding elemets in front
	lst.push_front(0);
	lst.push_front(45);
	lst.push_front(9);
	showlist(lst);
	
	lst.pop_front();	//poping element from front and back respectively
	lst.pop_back();
	lst.pop_back();
	showlist(lst);
	
	lst.sort();			// sortin the list in ascending order
	showlist(lst);
	lst.reverse();		// reversing the list
	showlist(lst);
	
	lst.remove(1);		// removing all 1's from the list
	showlist(lst);
	
	list<int> :: iterator it = lst.begin();  // to replace '0' with '50'
	while(*it != 0)
		it++;
	*it = 50;
	showlist(lst);

	return 0;
}
