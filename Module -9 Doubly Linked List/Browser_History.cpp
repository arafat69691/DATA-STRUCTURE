#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    string value;
    Node* prev;
    Node* next;
    Node(string val) : value(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;
    unordered_map<string, Node*> addressToNode;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insert(string value) {
        Node* newNode = new Node(value);
        addressToNode[value] = newNode;
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    Node* find(string value) {
        if (addressToNode.find(value) != addressToNode.end()) {
            return addressToNode[value];
        }
        return nullptr;
    }
};

int main() {
    DoublyLinkedList dll;
    string value;
    while (cin >> value && value != "end") {
        dll.insert(value);
    }

    int Q;
    cin >> Q;
    Node* current = dll.head;
    while (Q--) {
        string command;
        cin >> command;
        if (command == "visit") {
            string address;
            cin >> address;
            Node* node = dll.find(address);
            if (node) {
                current = node;
                cout << address << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            if (current->next) {
                current = current->next;
                cout << current->value << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            if (current->prev) {
                current = current->prev;
                cout << current->value << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
