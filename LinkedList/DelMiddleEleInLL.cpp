#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
struct Node *deleteMid(struct Node *head);

void printList(Node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
int main() {
    int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;

		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head);
	}
	return 0;
}
int countOfNodes(struct Node* head)
{
    int count = 0;
    while (head != NULL) {
        head = head->next;
        count++;
    }
    return count;
}
// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
    }
    struct Node* temp=head;
    int count=countOfNodes(head);
    int mid=count/2;
    while(mid-- >1){
        head=head->next;
    }
    head->next=head->next->next;
    return temp;
}
