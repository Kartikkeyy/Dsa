struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void sortkr(Node* main,Node* side){
    Node* prev=main;
    Node* curr1=main->next;
    Node* curr2=side;
    
    while(curr1!=NULL && curr2!=NULL){
        if(curr2->data<curr1->data){
            prev->next=curr2;
            Node* fwd=curr2->next;
            curr2->next=curr1;
            curr2=fwd;
        }
        else{
            prev=curr1;
            curr1=curr1->next;
        }
    }
    while(curr2!=NULL){
        curr1->next=curr2;
    }
    
}
Node* sortedMerge(Node* head1, Node* head2)  
{  
  if(head1==NULL){
      return head2;
  }  
  if(head2==NULL){
      return head1;
  }
  Node* first=head1;
  Node* second=head2;
  if(head1->data <head2->data){
      sortkr(first,second);
      return first;
  }
  else{
      sortkr(second,first);
      return second;
  }
}

