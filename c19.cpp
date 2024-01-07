#include <iostream>
#include <string>

using namespace std;

struct Node {
    int prn;
    string name;
    Node* next;
};

class ClubList {
private:
    Node* head;
    Node* tail;

public:
    ClubList() {
        head = nullptr;
        tail = nullptr;
    }

    // Add a member at the end of the list
    void addMember(int prn, string name) {
        Node* newNode = new Node;
        newNode->prn = prn;
        newNode->name = name;
        newNode->next = nullptr;
        
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Delete a member by PRN number
    void deleteMember(int prn) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* prev = nullptr;
        Node* current = head;
        
        while (current != nullptr) {
            if (current->prn == prn) {
                if (current == head) {
                    head = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            } else {
                prev = current;
                current = current->next;
            }
        }

        cout << "Member with PRN " << prn << " not found!" << endl;
    }

    // Add president at the beginning of the list
    void addPresident(int prn, string name) {
        Node* newNode = new Node;
        newNode->prn = prn;
        newNode->name = name;
        newNode->next = head;
        head = newNode;
    }

    // Add secretary at the end of the list
    void addSecretary(int prn, string name) {
        addMember(prn, name);
        tail = tail->next;
    }

    // Compute the total number of members
    int computeTotalMembers() {
        int count = 0;
        Node* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }

    // Display the members of the list
    void displayMembers() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* current = head;
        cout << "Members of the club:" << endl;
        while (current != nullptr) {
            cout << "PRN: " << current->prn << " | Name: " << current->name << endl;
            current = current->next;
        }
    }

    // Display the list in reverse order using recursion
    void displayMembersReverse(Node* current) {
        if (current == nullptr) {
            return;
        }

        displayMembersReverse(current->next);
        cout << "PRN: " << current->prn << " | Name: " << current->name << endl;
    }

    // Concatenate two club lists
    void concatenateLists(ClubList& otherList) {
        if (this->head == nullptr) {
            this->head = otherList.head;
        } else {
            this->tail->next = otherList.head;
        }
        this->tail = otherList.tail;
        
        otherList.head = nullptr;
        otherList.tail = nullptr;
    }
};

int main() 
{
    ClubList clubList;

    int choice;
    cout<<"Enter your Choice: ";
    cin>>choice;
    do {
        cout << endl << "Club Management System" << endl;
        cout << "1. Add member" << endl;
        cout << "2. Delete member" << endl;
        cout << "3. Add president" << endl;
        cout << "4. Add secretary" << endl;
        cout << "5. Compute total members" << endl;
        cout << "6. Display members" << endl;
        cout << "7. Display members in reverse order" << endl;
        cout << "8. Concatenate two lists" << endl;
        cout << "9. Exit"<<endl;
    }
    while(choice!=9);
}