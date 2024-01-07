
// doubly linked list
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    // Destructor
    ~Node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free for node with data "<<value<<endl;
    }
};

void insertAthead(Node* &head,Node* &tail, int d){
    // empty list
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// Gives the lenght of linked list
int get_length(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtTail(Node* &head, Node* &tail, int d){
    // for empty list
    if(tail==NULL){
    Node* temp=new Node(d);
    head=temp;
    tail=temp;
    }
    else{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int position, int d){
    // insert at start or head
    if(position==1){
        insertAthead(head,tail,d);
        return;
    }
    Node* temp=head;
    int cnt = 1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // insert at end or tail
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    Node* nodeToInsert=new Node(d);
    // nodeToInsert->next=temp->next;
    // temp->next=nodeToInsert;
    // nodeToInsert->prev=temp;
    // temp=nodeToInsert;
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}

void deleteNode(Node* &head, int position){
    // Delete node at start or head
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
    // delete node at ant position
    Node* curr=head;
    Node* prev=NULL;

    int cnt=1;
    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }

    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    }
}




int main(){
    // Node* node1=new Node(10);

    Node* head=NULL;
    Node* tail=NULL;
    print(head);

    insertAthead(head,tail,4);
    print(head);

    // Length of Linked List
    cout<<"Length: "<<get_length(head)<<endl;

    insertAtTail(head,tail,8);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    insertAtPosition(head,tail,2,25);
    print(head);

    insertAtPosition(head,tail,1,2);
    print(head);

    deleteNode(head,4);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

}
