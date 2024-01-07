#include<iostream>
#include<string>
using namespace std;

class Node{
public:
    string data;
    Node* next;

    // constructor
    Node(string data){
        this->data=data;
        this->next=NULL;
    }
    // Destructor
    ~Node(){
        string value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data : "<<value<<endl;
    }
};

void insertAtHead(Node* &head,string d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,string d){
    Node* temp=new Node(d);
    tail->next=temp ;
    tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail, int position,string d){

    // insert at start
    if(position==1){
        insertAtHead(head,d);
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
        insertAtTail(tail,d);
        return;
    }

    // Creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(int position,Node* &head,Node* &tail){
    // Deleting node at start or head
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp=NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        tail=prev;
        curr->next=NULL;
        delete curr;
    }
}


int main(){
    // Create a new node
    Node* node1=new Node("Omkar");
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // create a new node
    // Node* node2=new Node("kanchan");
    // node1->next=node2;
    // cout<<node2->data<<endl;
    // cout<<node2->next<<endl;

    Node* head=node1;
    Node* tail=node1;
    print(head);

    insertAtTail(tail,"Kanchan");
    print(head);

    insertAtTail(tail,"Ram");
    print(head);


    insertAtTail(tail,"Sham");
    print(head);
   
    insertAtPosition(head,tail,1,"Anna");
    print(head);

    insertAtPosition(head,tail,6,"Mummy");
    print(head);

    deleteNode(6,head,tail);
    print(head); 

    cout<<" Head "<<head->data<<endl;
    cout<<" Tail "<<tail->data<<endl;

}
