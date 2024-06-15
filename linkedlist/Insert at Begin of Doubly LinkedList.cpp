
Node *insertbegin(Node *head,int data){
    Node *temp= new Node(data);
    temp->next=head;
    if(head!=NULL){
        head->previous=temp;
    }
    return temp;
}



 
