#include <bits/stdc++.h> 
using namespace std; 
struct Node {
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int main(){ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data;
	return 0;
} 

// second way 
#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL){
            cout << "-->";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() 
{ 
    int n;
    cin >> n;//nodes

    if (n <= 0){
        cout << "List is empty." << endl;
        return 0;
    }
    
    int value;
    cin >> value;
    Node *head = new Node(value);
    Node *current = head;

    for (int i = 1; i < n; ++i) {
        cin >> value;
        Node *newNode = new Node(value);
        current->next = newNode;
        current = newNode;
    }

    printList(head);
    return 0;
}
