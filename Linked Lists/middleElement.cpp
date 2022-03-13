//find the middle element of the list

//Method 1 (using the size of the linked list)

//Mehtod 2 (using the fast and the slow pointers)
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        if(head==NULL) return -1;
        Node* slow= head, *fast = head;

        while(fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }
};
