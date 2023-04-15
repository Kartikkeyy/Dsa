// Write a program that uses functions to perform the following  operations on a doubly linked list
// i) Creation ii) Insertion iii) Deletion iv) Traversal.

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};

//CREATION:

Node* creation(int x){
    Node* creat = new Node(x);
    return creat;
}

//INSERTION:

void adding_at_tail(Node* &tail,int x){
    Node* new_element = creation(x);
    tail->next=new_element;
    new_element->prev=tail;
    tail=new_element;
}

void adding_at_head(Node* &head,int x){
    Node* new_element = creation(x);
    new_element->next=head;
    head->prev=new_element;
    head=new_element;
}

void adding_at_pos(Node* &head,Node* &tail,int pos,int x){
    if(pos==1){
        adding_at_head(head,x);
        return ;
    }
    Node* temp=head;
    int count=1;
    while(temp->next!=NULL && count<pos){
        if(count==pos-1){
            Node* add=creation(x);
            Node* fwd=temp->next;
            temp->next=add;
            add->prev=temp;
            add->next=fwd;
            return;
        }
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        Node* add=creation(x);
        adding_at_tail(tail,x);
        return;
    }
}

//DELETION: 

void deletetion(Node* &head,Node* &tail,int pos){
    if(pos==1){
       head->next->prev=NULL; 
        head=head->next;
        return ;
    }
    Node* temp=head;
    int count=1;
    while(temp->next!=NULL){
        count++;
        if(count==pos){
            Node* add=temp->next;
            if(add->next==NULL){
                temp->next=NULL;
                tail=temp;
                return;
            }
            temp->next=add->next;
            add->next->prev=temp;
            add->next=NULL;
            delete add;
            return;
        }
        temp=temp->next;
    }
    cout<<"\nINVALID INPUT"<<endl;
}

//TRAVERSAL:

void display_fromhead(Node* head){
    cout<<"\nLinked List: ";    
        Node* temp=head;
        while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        }
        cout<<endl;
}
void display_fromtail(Node* tail){
    cout<<"\nLinked List: ";
        Node* temp=tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }  
      cout<<endl;  
}
void traversal(Node* head,int pos){
    cout<<endl;
    int count=1;
    Node* temp=head;
    while(temp!=NULL && count<pos){
        temp=temp->next;
        count++;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    int a;
    cout<<"Enter the head value of your DLL: ";
    cin>>a;
    Node* head=creation(a);
    Node* tail=head;
    char check='Y';
    while(check=='Y'){
         int n;
         cout<<"\nENTER YOUR CHOICE: \n\n1) INSERTION \n2) DELETION \n3) TRAVERSAL \n4) EXIT\n"<<endl;
         cin>>n;

         switch(n){
            case 1:
                int choice,x;
                cout<<"Enter where you want to insert: \n\n1: at head  \n2: at tail \n3: at position"<<endl;
                cin>>choice;
                cout<<"\nEnter the value of your element: "<<endl;
                cin>>x;
                switch(choice){
                    case 1:
                    adding_at_head(head,x);
                    break;
                    case 2:
                    adding_at_tail(tail,x);
                    break;
                    case 3:
                    int pos;
                    cout<<"Enter the position: "<<endl;
                    cin>>pos;
                    adding_at_pos(head,tail,pos,x);
                    default:
                    break;
                }
                break;
            case 2:
                int pos;
                cout<<"Enter the position from where you want to delete: ";
                cin>>pos;

                deletetion(head,tail,pos);
                break;

            case 3:
                int p;
                cout<<"\n Enter from where you want to traverse: \n1)head\n2)tail\n3)position"<<endl;
                cin>>p;
                switch(p){
                    case 1:
                       display_fromhead(head);
                       break;
                    case 2:
                       display_fromtail(tail);
                       break;   
                    case 3:
                    int a;
                    cout<<"\nEnter the position from where you want to traverse: ";
                    cin>>a;
                    if(a==1){
                       break;
                    }
                    traversal(head,a);
                    break;
                    default:
                      cout<<"\nInvalid choice"<<endl;
                   }
                break;
            default:
                cout<<"\nInvalid choice"<<endl;
                break;
         }        
            display_fromhead(head);
            cout<<"\nDo You Want To Proceed: Y/N ";
            cin>>check;
            if(check!='N' && check!='Y'){
                cout<<"\n Invalid choice program ends ";
                
         }
    }
    cout<<"\n\tTHANK YOU"<<endl;
    return 0;
}