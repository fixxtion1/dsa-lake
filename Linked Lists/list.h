
class List;


class Node{
	int data;
	Node* next;
	
public:
	Node(int d):data(d), next(NULL){}
	
	friend class List;
};

class List{
	Node* head;
	Node* tail;
public:
	List():head(NULL), tail(NULL){}
	
	void push_front(int data){
		
		Node*n = new Node(data);
		if(head==NULL){
			head = tail = n;
			return;
		}
		n->next = head;
		head = n;
	}
	
	void push_back(int data){
		
		Node* n = new Node(data);
		Node* temp= head;
		if(head==NULL){
			head = tail = n;
			return;
		}
		tail->next = n;
		tail = n;
	}
	
	
};

