#include <iostream>
using namespace std ;
class Node {
  public:
  int data ;
  Node* next ;
  
  Node (int value)
  {
    this->data = value ;
    this ->next = NULL ;
  }
}; 
Node *insertathead(Node *head , Node *tail , int value  )
{
  if (head == NULL && tail == NULL)
  {
  Node *newnode = new Node(value) ;
  head = newnode ;
  tail = newnode ;
  }
  else 
  {
    Node *newnode = new Node (value) ;
    newnode ->next = head ;
    head = newnode ;
  }

  return head ;
}
void print(Node *head)
{
  Node *temp = head ;
  while (temp != NULL)
  {
    cout << temp->data << " " ;
    temp = temp->next ;
  }
}
int main()
{
  Node *head = NULL ;
  Node *tail = NULL ;
  head = insertathead(head , tail , 10) ;
  head = insertathead(head , tail , 20) ;
  head = insertathead(head , tail , 30) ;
  print(head) ;

}