/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB) {
    Node *result = NULL;
    if(headA == NULL && headB == NULL)
        return NULL;
    if(headA == NULL)
        return headB;
    if(headB == NULL)
        return headA;
    if(headA->data < headB->data) {
        result = headA;
        result->next = MergeLists(headA->next, headB);
    }
    else{
        result = headB;
        result->next = MergeLists(headA, headB->next);
    }
    return result; 
    }


