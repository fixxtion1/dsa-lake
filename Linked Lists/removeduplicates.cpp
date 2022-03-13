//Remove duplicates from sorted linked list

ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        
        while(curr!=NULL and curr->next!=NULL){
            if(curr->val == curr->next->val){
            	//for delloacting memory that is to be deleted
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete(temp);
            }
            else{
                curr = curr->next;
            }
        }
        return head;
        
    }