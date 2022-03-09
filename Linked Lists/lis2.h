class Node{
		int data;
		Node* next;
	public:
		Node(int d):data(d),next(NULL){}
};

class List{
		Node* head;
		
	public:
		List():head(NULL);

		void push_front(int value){
				Node* n = new Node(value);
				if(head == NULL){
						n->next = NULL;
						head = n;
						return;
				}
				n->next = head;
				head = n;

		}

		void push_back(int value){
				Node* n = new Node(value);
				n->next = NULL;
				if(head == NULL){
						head = n;
						return;
				}
				
				Node* temp = head;

				while(temp->next != NULL) temp = temp->next;

				temp->next = n;

		}

		void insert(int value, int pos){
				Node* n = new Node(value);
				if(head == NULL){
						n->next = NULL;
						head = n;
						return;
				}

				Node* temp = head;
				while(pos--) temp = temp->next;
				n->next = temp->next;
				temp->next = n;
		}

		void pop_front(){
				if(head==NULL){
						cout << "List is already empty";
						return;
				}
				Node* temp = head;
				if(head->next == NULL){
						head = NULL;
						free(temp);
						return;
				}

				head = temp->next;
				free(temp);
		}

		void pop_back(){
				if(head == NULL){
						return;
				}
				Node* temp1 = head, temp2;

				
		}









};
