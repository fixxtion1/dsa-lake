#include <iostream> 
using namespace std;

class Node{
	int data;
public:
	Node* next;
	
	Node():data(0),next(NULL){}

	Node(d):data(d),next(NULL){}
	
	~Node(){
		if(next!=NULL){
			delete next;
		}
		cout<<"Deleting Node with Data"<<data <<endl;
	}	
};


class List{
	Node* head;
	
public:
	
	void printList();
	
	//for insertion at the beginning 	
	void push_front(int);
	
	//for insertion at the end of the list
	void push_back(int);
	
	//for insertion at a specific position	
	void insert(int, int);
	
	//for deletion at beginning of the list	
	void pop_front();
	
	//for deletion at end of the list
	void pop_back();
	
	//for deletion at the specific postion	
	void remove(int);
	
	~List(){
		if(head!=NULL){
			delete head;
			head = NULL;
		}
	}
	
};


void List::push_front(int data){
	Node* newnode = new Node(data);
	
	if(head != NULL){
		newnode->next = head;
	}	
	head = newnode;
}

void List::push_back(int data){
	Node* newnode = new Node(data);
	
	if(head != NULL){
		Node* temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;	
	}
	else{
		head = newnode;
	}
}


void List::insert(int data, int pos){
	
	if(pos == 1){ 
		push_front(data);
		return;
	}
	
	Node* temp = head;
	for(int i=1; i<=pos-2 && temp!=NULL; i++){
		temp = temp->next;
	}
	if(temp != NULL){
		Node* newnode = new Node(data);
		newnode->next = temp->next;
		temp->next = newnode;
	}	
	
}



void List::pop_front(){
	Node* temp = head;
	head = head->next;
	temp->next = NULL;
	delete temp;
}


void List::pop_back(){
	if(head != NULL or head->next!=NULL){
	Node* temp = head;
	
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	temp->next = NULL;
	delete (temp->next);
}
	
}

void Linkedlist::printList(){
    Node* temp = head;
  
    // Check for empty list.
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
  
    // Traverse the list.
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}