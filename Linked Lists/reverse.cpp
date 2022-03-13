//Reverse a linked list


//Iterative
//Idea is to change reverse all the links between the nodes.

struct Node* reverseList(struct Node *head){
        // code here
        // return head of reversed list
        Node* curr = head;
        Node* prev = NULL;
        
        while(curr != NULL){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    
    
//Recursive Method 1

struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head==NULL or head->next==NULL) return head;
        Node* newhead = reverseList(head->next);
        Node* rest = head->next;
        rest->next = head;
        head->next = NULL;
        
        return newhead;
    }
    
    
//Recursive Method 2
