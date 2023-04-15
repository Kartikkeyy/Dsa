#include<iostream>
using namespace std;
class Node{
    public:

    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this ->data =data;
        this ->next=NULL;
        this->prev=NULL;
    }

};
void inserthead(Node* &head,int d){
        Node* temp=new Node(d);
        temp -> next=head;
        head=temp;
    }
void inserttail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
  
void insertatposition(Node* &tail,Node* &head,int p,int d){
    if(p==1){
        inserthead(head,d);
        return ;
    }
    int count=1;
    Node* temp=head;
    while(count<p-1){
        temp=temp->next;
        count++;
    }
    //if we reach at the tail of linked list:
    if(temp->next==NULL){
        inserttail(temp,d);
        return ;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

void deletenode(Node* &head, int p){

    if (p==1){
        head=head->next;
        Node* temp=head;
        temp->next=NULL;
        delete temp;
    }
    int count=1;
    Node* temp=head;
    while(count<p-1){
        temp=temp->next;
        count++;
    }
    Node* skip=temp->next;
    temp->next=skip->next;
    skip->next=NULL;
    delete skip;
}  
void print(Node* &head){
        Node* temp = head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

int main(){

    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1 ->next<<endl;

    Node* head= node1;
    Node* tail=node1;
    print(head);

    int n=3;
    while(n--){
        int a;
        cin>>a;
        inserttail(tail,a);
    }
    insertatposition(tail,head,5,69);
    print(head);
    // cout<<"HEAD: "<<head->data<<endl;
    // cout<<"TAIL: "<<tail->data<<endl;
    deletenode(head,2);
    print(head);
    return 0;
}