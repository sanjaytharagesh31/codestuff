/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *temp = new Node;
    temp->data = data;
    
    if(head == NULL) {
        temp->next = NULL;
        head = temp;
        return head;
    }

    if(position == 0){
        temp->next = head;
        head = temp;
        return head;
    }
    
    int count = 1;
    Node *ind = head;
    while(count < position){
        ind = ind->next;
        count++;
    }
    temp->next = ind->next;
    ind->next = temp;
    return head;
}

