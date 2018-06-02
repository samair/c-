#include <iostream>

using namespace std;

class Node;
class LinkedList{
private:
  Node* node;
public:
  LinkedList() ;
  void addValue();
};
class Node{
private:
  int value;
  Node* next;

  friend class LinkedList;
  friend void LinkedList::addValue();
  friend void printLinkedList();
};
LinkedList::LinkedList() {
  node = new Node();
  node->value = 10;
  cout<<"Value of node value is set to: "<<node->value<<endl;
}
void LinkedList::addValue(){
  node->value = 20;
  cout<<"Value of node value is now set to: "<<node->value<<endl;
}
void printLinkedList(){
  Node* n = new Node();
  n->value = 30;
}
int main()
{

  LinkedList * list = new LinkedList();
  list->addValue();


}
