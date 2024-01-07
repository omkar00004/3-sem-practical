#include<iostream>
#include<string>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }

    // Destuctor
    ~Node(){
        int value=this->data;
        // Memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head){
    int d;
    cout<<"Insert at head:  ";
    cin>>d;
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail){
    int d;
    cout<<"Insert at tail:  ";
    cin>>d;
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtposition(Node* &head, Node* &tail){

    // insert at start
    int position;
    cout<<"Enter the position: ";
    cin>>position;
    if(position==1){
        insertAtHead(head);
        return;
    }

    Node* temp=head;
    int count=1;
    while(count < position-1){
        temp=temp->next;
        count++;
    }
    // insert at end
    if(temp->next==NULL){
        insertAtTail(tail);
        return;
    }

    // creating a node for d
    int value;
    cout<<"Enter value: ";
    cin>>value;
    Node* nodeToInsert=new Node(value);
        nodeToInsert->next=temp->next;
        temp->next=nodeToInsert;
}
void deleteNode(Node* &head, int position){
    // Deleting element from start
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        // Deleting any middle node or last node
        Node* curr=head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
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

int main(){
    // create a new node
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head is pointed new node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail);
    print(head);

    insertAtposition(head, tail);
    print(head);
    insertAtHead(head);
    print(head);


    // deleteNode(head,2);
    // print(head);

}