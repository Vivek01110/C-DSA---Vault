Node* sortList(Node *head){
    Node* curr = head;
    Node* forward =NULL;
    Node*prev = NULL;
    int val_cnt = 2;
    while(val_cnt>=0){
        curr = head;
        forward = curr -> next;
        while(curr != NULL){
            if(prev == NULL){
                curr = curr -> next;
            }
            else if(curr -> data == val_cnt){
                forward = curr -> next;
                curr -> next = head;
                head = curr;
                prev -> next = forward;
                curr = forward;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        val_cnt--;
    } 
    return head;
}




// Node* temp = head;
        // int zero = 0;
        // int one = 0;
        // int two = 0;
        // while(temp!=NULL){
        //     if(temp -> data == 0) zero++;
        //     else if(temp -> data == 1) one++;
        //     else two++;
        //     temp = temp -> next;
        // }
        // int cnt = 0;
        // temp = head;
        // while(temp != NULL){
        //     if(cnt<zero)
        //         temp -> data = 0;
        //     else if((cnt-zero)<one)
        //         temp -> data = 1;
        //     else 
        //         temp -> data = 2;
        //     temp = temp ->next;
        //     cnt++;
        // }
        // return head;