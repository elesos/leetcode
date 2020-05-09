/* // C program to find n'th node in linked list 
// using recursion 
#include <bits/stdc++.h> 
using namespace std; 

// Link list node 
struct Node 
{ 
	int data; 
	struct Node* next; 
}; 

// Given a reference (pointer to pointer) to 
	// the head of a list and an int, push a 
	// new node on the front of the list.
void push(struct Node** head_ref, int new_data) 
{ 
	// allocate node 
	struct Node* new_node = 
			(struct Node*) malloc(sizeof(struct Node)); 

	// put in the data 
	new_node->data = new_data; 

	// link the old list off the new node 
	new_node->next = (*head_ref); 

	// move the head to point to the new node 
	(*head_ref) = new_node; 
} 

// Takes head pointer of the linked list and index 
	// as arguments and return data at index
int GetNth(struct Node *head,int n) 
{ 
	int count = 0; 
	
	//if count equal too n return node->data 
	if(count == n) 
		return head->data; 
	
	//recursively decrease n and increase 
	// head to next pointer 
	return GetNth(head->next, n-1); 
} 

// Drier program to test above function
int main() 
{ 
	// Start with the empty list
	struct Node* head = NULL; 
	
	// Use push() to construct below list 
	// 1->12->1->4->1
	push(&head, 1); 
	push(&head, 4); 
	push(&head, 1); 
	push(&head, 12); 
	push(&head, 1); 
	
	// Check the count function 
	printf("Element at index 3 is %d\n", GetNth(head, 3)); 
	getchar(); 
}



 */
#include<stdio.h> 
#include<stdlib.h> 

/* Link list node */
struct node 
{ 
	int data; 
	struct node* next; 
}; 

/* Function to get the middle of the linked list*/
void printMiddle(struct node *head) 
{ 
	int count = 0; 
	struct node *mid = head; 

	while (head != NULL) 
	{ 
		/* update mid, when 'count' is odd number */
		if (count & 1) 
			mid = mid->next; 

		++count; 
		head = head->next; 
	} 

	/* if empty list is provided */
	if (mid != NULL) 
		printf("The middle element is [%d]\n\n", mid->data); 
} 


void push(struct node** head_ref, int new_data) 
{ 
	/* allocate node */
	struct node* new_node = 
		(struct node*) malloc(sizeof(struct node)); 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = (*head_ref); 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

// A utility function to print a given linked list 
void printList(struct node *ptr) 
{ 
	while (ptr != NULL) 
	{ 
		printf("%d->", ptr->data); 
		ptr = ptr->next; 
	} 
	//printf("NULL\n"); 
} 


int main() 
{ 
	/* Start with the empty list */
	struct node* head = NULL; 
	int i; 

	for (i=5; i>0; i--) 
	{ 
		push(&head, i); 
		printList(head); 
		printMiddle(head); 
	} 

	return 0; 
} 
