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

void insertathead(Node* &head,int d){
    Node* add=new Node(d);
    add->next=head;
    head->prev=add;
    head=add;
}

void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    // tail->prev=tail;
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertatposition(Node* &head,Node* &tail,int pos,int d){
    if(pos==1){
        Node* add=new Node(d);
        add->next=head;
        head->prev=add;
        add->prev=NULL;
        head=add;
    }
    else{
        Node* temp=head;
        // int count=1;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        if(temp->next==NULL){
            insertattail(tail,d);
            return;
        }
        Node* add=new Node(d);
        add->next=temp->next;
        temp->next=add;
        add->prev=temp;
    }
}
void print(Node* head){
    Node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}
int main(){
    Node* y=new Node(1);
    Node* head=y;
    Node* tail=y;
    int n;
    cout<<"Enter the no. of elements you want to add at head: "<<endl;
    cin>>n;

    while(n--){
        int a;
        cin>>a;
        insertathead(head, a);
    }

    int N;
    cout<<"Enter the no. of elements you want to add at tail: "<<endl;
    cin>>N;
    N;

    while(N--){
        int a;
        cin>>a;
        insertattail(tail,a);
    }
    insertatposition(head,tail,5,69);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    return 0;
}