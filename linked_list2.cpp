#include <iostream>
#include<conio.h>

using namespace std;

class LinkedList {
	struct Node{
		int a;
		Node *next;
	};
  public:
    LinkedList(){
	     	head = NULL;
	}
    
    
  void addValue(int val) {
	    Node *n = new Node();   
        n->a = val;             
        n->next = head;         
        head = n;
		cout<<"Added Number"<<val<<endl;
  }
  
  int popValue() {
	  	Node *n = head;
        int ret = n->a;
        head = head->next;
        delete n;
        return ret;
  }
  
  void displayValue() {
    	tempo = head;
		while (head != 0)
		{
		Node *n = head;
		Node *x = tempo;
		int ret = n->a;
		head = head->next;

        cout<<"\t\t" <<ret << endl;
	}
	head = tempo;
	}
  
  private:
    Node *head; 
    Node *tempo;
};
int main(){
	LinkedList list;
	int choice;
while(1){
	int choice, val, num;
	while(choice!=10){
	cout<<"======================================================================================================================="<<endl;
	cout<<"\nWhat would you like to do?\n";
	cout<<"(1) Add to linked list"<<endl;
	cout<<"(2) POP"<<endl;
	cout<<"(3) Exit"<<endl;
	cout<<"(4) Display Linked List"<<endl;
	cout<<"\nEnter choice: ";
	cin>>choice;
	switch (choice)
{
	case 1: 
	cout<<"Enter a Number to add:"<<endl;
	cin>>val;
	list.addValue(val);
	break;
	
	case 2: 
		cout<<"POPPED"<<list.popValue()<<endl;
		break;
	
	case 3:
		exit(0);
		
	case 4:
		list.displayValue();
		break;
	
	default:
		cout<<"Invalid Input"<<endl;}	
	break;
}}
return 0;
};
