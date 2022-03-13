//nth Node from the end of linked list


//Method 1 (using the size of the linekd list)

//int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* temp= head;
       int size =0;
       while(temp!=NULL){
           temp = temp->next;
           ++size;
       }
       if(n>size) return -1;
       
       int pos = size-n;
       temp = head;
       while(pos--){
           temp = temp->next;
       }
       return temp->data;
}


//Method 2 (using the two pointers)

//-> move 'first' poitner n position ahead
//-> move 'second' pionter from head
//-> move both 'first' and 'second' at same speed, when 'first' reaches 
//NULL, second reaches the required node

 int getNthFromLast(Node *head, int n)
{
       // Your code here
       if(head==NULL) return -1;
       Node* first, *second;
       
       second = head;
       first = head;
       
       while(n--) {
           if(first==NULL) return -1;
           first = first->next;
           
       };
      
       while(first!=NULL){
           first = first->next;
           second = second->next;
       }
       return second->data;
}