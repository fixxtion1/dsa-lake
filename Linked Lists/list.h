struct Node{
	int data;
	Node* next;
};

Node* head = NULL;


void push_front(int val){
	Node* newnode = new Node;
	newnode->data = val;
	
	if(head == NULL){
		newnode->next = NULL;
		head = newnode;
	}
	else{
		newnode->next = head;
		head = newnode;
	}
	printf("\nNode inserted successfully");
}

void push_back(int val){
	Node* newnode = new Node;
	newnode->data = val;
	
	if(head == NULL){
		newnode->next = NULL;
		head = newnode;
	}
	else{
		Node* temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
}

void insert(int val, int pos){
	Node* newnode = new Node;
	newnode->data = val;
	
	if(head == NULL){
		newnode->next = NULL;
		head = newnode;
	}
	else{
		Node* temp = head;
		while(pos--){
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}

void pop_front(){
	if(head == NULL){
		printf("Already empty!");
	}
	else{
		Node* temp = head;
		if(head->next == NULL){
			head = NULL;
		else{
			head = temp->next;
		}
		free(temp);
		}
	}
}

void pop_back(){
	if(head == NULL){
		printf("List is empty");
	}
	else{
		Node* temp1 = head, temp2;
		if(head->next == NULL){
			head = NULL;
		}
		else{
			while(temp1->next != NULL){
				temp2 = temp1;
				temp1 = temp1->next;
			}
			temp2->next = NULL;
		}
		free(temp1)	;
	}
}