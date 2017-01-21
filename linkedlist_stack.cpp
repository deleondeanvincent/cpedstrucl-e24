#include <iostream>
#include <conio.h>
using namespace std;
 
 class LinkedList{
     struct Node {
         int x;
         Node *next;
     };
public:
     LinkedList(){
         head = NULL;
     }
void addValue(int value){  
         Node *n = new Node();   
         n->x = value;             
         n->next = head;                 
         head = n;         
 		cout <<"You pushed " << value;
		cout<<"\npress enter to continue...\n\n";   
     }
int popValue(){
         Node *n = head;
         int ret = n->x;
         head = head->next;
         delete n;
         return ret;
     }
void displayValue (){
     	tempo = head;
 		while (head != 0)
 		{
 		Node *n = head;
 		Node *t = tempo;
 		int ret = n->x;
 		head = head->next;
         cout << ret << endl;
 	}
 	head = tempo;
 	}
private:
     Node *head; 
     Node *tempo;
 };
 
int main() {
     LinkedList list;
 	int choice;
while(1){
 	//system("cls");
 	int value, num, pos;
 	cout << "Linked List\n";
 	cout << "1) Push" <<endl;
 	cout << "2) Pop" <<endl;
 	cout << "3) Display" <<endl;
 	cout << "4) Exit" <<endl;
 	cout << "\nEnter choice: " <<endl;
 	cin >> choice;
 	switch(choice){
 		
 		case 1:
 			cout << "Enter Number to Push";
 			cin >> value;
 			list.addValue(value);
 			break;
 			
 		case 2:
 			cout << "Number has been popped"<<list.popValue() << endl;
 			cout<<"\npress enter to continue...\n";
 			break;
 			
 		case 3:
 			cout<<"\n";
			list.displayValue();
			cout<<"\npress enter to continue...\n";
 			break;
 	
 		case 4:
 			exit(1);
 			
 		default:
 			cout << "Invalid Input.\n";
 			break;
 	}
getch();
 }
     return 0;
 }
