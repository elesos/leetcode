/* // A simple CPP program to introduce 
// a linked list 
#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 

// Program to create a simple linked 
// list with 3 nodes 
int main() 
{ 
	Node* head = NULL; 
	Node* second = NULL; 
	Node* third = NULL; 

	// allocate 3 nodes in the heap 
	head = new Node(); 
	second = new Node(); 
	third = new Node(); 


	head->data = 1; 
	head->next = second; // Link first node with 
	
	// the second node 
	second->data = 2; 
	// Link second node with the third node 
	second->next = third; 



	third->data = 3; // assign data to third node 
	third->next = NULL; 



	return 0; 
} 


 */
// A simple C++ program for traversal遍历 of a linked list 
/* #include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 

// This function prints contents of linked list 
// starting from the given node 
void printList(Node* n) 
{ 
	while (n != NULL) { 
		cout << n->data << " "; 
		n = n->next; 
	} 
} 

int main() 
{ 
	Node* head = NULL; 
	Node* second = NULL; 
	Node* third = NULL; 

	// allocate 3 nodes in the heap 
	head = new Node(); 
	second = new Node(); 
	third = new Node(); 

	head->data = 1; // assign data in first node 
	head->next = second; // Link first node with second 

	second->data = 2; // assign data to second node 
	second->next = third; 

	third->data = 3; // assign data to third node 
	third->next = NULL; 

	printList(head); 

	cout << endl;
	return 0; 
} 
 */


 /* 插在前面.O(1) */
void push(Node** head_ref, int new_data) 
{ 
	/* 1. allocate node */
	Node* new_node = new Node(); 

	/* 2. put in the data */
	new_node->data = new_data; 

	/* 3. Make next of new node as head */
	new_node->next = (*head_ref); 

	/* 4. move the head to point to the new node */
	(*head_ref) = new_node; 
} 


//插在中间 TOTEST  O(1)
/* Given a node prev_node, insert a new node after the given 
prev_node */
void insertAfter(Node* prev_node, int new_data)  
{  
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    }  
  
    /* 2. allocate new node */
    Node* new_node = new Node(); 
  
    /* 3. put in the data */
    new_node->data = new_data;  
  
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;  
  
    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;  
}  


//插在最后O(n)
/* Given a reference (pointer to pointer) to the head 
of a list and an int, appends a new node at the end */
void append(Node** head_ref, int new_data)  
{  
    /* 1. allocate node */
    Node* new_node = new Node(); 
  
    Node *last = *head_ref; /* used in step 5*/
  
    /* 2. put in the data */
    new_node->data = new_data;  
    new_node->next = NULL;  
  
    /* 4. If the Linked List is empty, 
    then make the new node as head */
    if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }  
  
    /* 5. Else traverse till the last node */
    while (last->next != NULL)  
        last = last->next;  
  
    /* 6. Change the next of last node */
    last->next = new_node;  
    return;  
}  


int main()  
{  
    /* Start with the empty list */
    Node* head = NULL;  
      
    // Insert 6. So linked list becomes 6->NULL  
    append(&head, 6);  
      
    // Insert 7 at the beginning.  
    // So linked list becomes 7->6->NULL  
    push(&head, 7);  
      
    // Insert 1 at the beginning.  
    // So linked list becomes 1->7->6->NULL  
    push(&head, 1);  
      
    // Insert 4 at the end. So  
    // linked list becomes 1->7->6->4->NULL  
    append(&head, 4);  
      
    // Insert 8, after 7. So linked  
    // list becomes 1->7->8->6->4->NULL  
    insertAfter(head->next, 8);  
      
    cout<<"Created Linked list is: ";  
    printList(head);  
      
    return 0;  
}  



void deleteNode(Node** head_ref, int key) 
{ 
    // Store head node     
	Node *temp = *head_ref, *prev;  //TODO
    // If head node itself holds the key to be deleted 
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   // Changed head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Search for the key to be deleted, keep track of the 
    // previous node as we need to change 'prev->next' 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    // If key was not present in linked list 
    if (temp == NULL) return; 
  
    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 
} 


//Delete a Linked List node at a given position, start from 0
void deleteNode(Node** head_ref, int position) 
{ 
   // If linked list is empty 
   if (*head_ref == NULL) 
      return; 
  
   // Store head node 
    Node *temp = *head_ref; 
  
    // If head needs to be removed 
    if (position == 0) 
    { 
        *head_ref = temp->next;   // Change head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Find previous node of the node to be deleted  查找要删除的前一个节点
    for (int i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next; 
  
    // If position is more than number of ndoes 
    if (temp == NULL || temp->next == NULL) //TODO?
         return; 
  
    // Node temp->next is the node to be deleted 
    // Store pointer to the next of node to be deleted 
    Node *next = temp->next->next; 
  
    // Unlink the node from linked list 
    free(temp->next);  // Free memory 
  
    temp->next = next;  // Unlink the deleted node from list 
} 



/* Function to delete the entire linked list */
void deleteList(Node** head_ref)  
{  
      
	/* deref head_ref to get the real head */
	Node* current = *head_ref;  
	Node* next;  
	  
	while (current != NULL)  
	{  
		next = current->next;  
		free(current);  
		current = next;  
	}  
		  
	/* deref head_ref to affect the real head back  
		in the caller. */
	*head_ref = NULL;  
}  
  


/* Counts no. of nodes in linked list */
int getCount(Node* head)  
{  
    int count = 0; // Initialize count  
    Node* current = head; // Initialize current  
    while (current != NULL)  
    {  
        count++;  
        current = current->next;  
    }  
    return count;  
}  


// 递归
int getCount(Node* head) 
{ 
    // Base case 
    if (head == NULL) 
        return 0; 
  
    // count is 1 + count of remaining list 
    return 1 + getCount(head->next); 
} 


/* Checks whether the value x is present in linked list */
bool search(Node* head, int x)  
{  
    Node* current = head; // Initialize current  
    while (current != NULL)  
    {  
        if (current->key == x)  
            return true;  
        current = current->next;  
    }  
    return false;  
}  
// 递归
/* Checks whether the value x is present in linked list */
bool search(Node* head, int x)  
{  
    // Base case  
    if (head == NULL)  
        return false;  
      
    // If key is present in current node, return true  
    if (head->key == x)  
        return true;  
  
    // Recur for remaining list  
    return search(head->next, x);  
}  
  

// Takes head pointer of  
// the linked list and index  
// as arguments and return  
// data at index  
int GetNth(Node* head, int index)  
{  
      
    Node* current = head;  
      
    // the index of the  
    // node we're currently  
    // looking at  
    int count = 0;  
    while (current != NULL)  
    {  
        if (count == index)  
            return(current->data);  
        count++;  
        current = current->next;  
    }  
  
    /* if we get to this line,  
    the caller was asking  
    for a non-existent element  
    so we assert fail */
    assert(0);          
}  


/* Takes head pointer of the linked list and index 
    as arguments and return data at index*/
int GetNth(Node *head,int n) 
{ 
    int count = 1; 
      
    //if count equal too n return node->data 
    if(count == n) 
		return head->data; 
      
    //recursively decrease n and increase  
    // head to next pointer  
    return GetNth(head->next, n-1);  
} 