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

struct Node* reverseList(struct Node *head);
void printList(Node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
int main() {
    int t,n,l,firstdata;
	cin>>t;
	while(t--)
	{
	    struct Node*head=NULL,*tail=NULL;
		cin>>n;
		cin>>firstdata;

		head = new Node(firstdata);
		tail = head;
		for (int i =1; i<n; ++i)
		{
			cin>>l;
			tail->next = new Node(l);
			tail = tail->next;
		}
		head = reverseList(head);
		printList(head);
		cout<<endl;
	}
	return 0;
}
struct Node* reverseList(struct Node *head)
{
   if(head==NULL || head->next==NULL){
    return head;
   }
   Node* rest=reverseList(head->next);
   head->next->next=head;
   head->next=NULL;
   return rest;

}

