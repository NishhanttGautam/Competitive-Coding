//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *sortedInsert(struct Node *head, int data);

void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data <<" ";
		node = node->next;
	}
	cout<<"\n";
}

int main()
{
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

		int k;
		cin>>k;

		head = sortedInsert(head,k);
		printList(head);
	}
	return 0;
}
// } Driver Code Ends


/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

// Should return head of the modified linked list
Node *sortedInsert(struct Node* head, int data) {
     Node *curr=head;
Node *prev=NULL;
Node *temp=new Node(data);

while(curr && curr->data < data)
{
prev=curr;
curr=curr->next;
}

if(curr==head)
{
temp->next=head;
head=temp;
}
else
{
temp->next=prev->next;
prev->next=temp;
}

return head;
}
