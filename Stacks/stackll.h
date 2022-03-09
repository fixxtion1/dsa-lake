
template<typename T>
class Stack;

template<typename T>
class Node{
public:
		T data;
		Node<t>* next;

		Node(T d):data(d){}

};

class Stack{
		Node<T>* head;
		
	public:
		Stack():head(NULL){}

		//idea is to push data at the front of ht linked list
		void push(int data){
				Node<T>* n = new Node(data);
				n->next = head;
				head = n;
		}

		bool empty(){
				reutrn head==NULL;
		}

		T top(){
				return head->data;
		}

		void pop(){
				Node<T>* temp = head;
				head = head->next;
				delete(temp);
		}


};
