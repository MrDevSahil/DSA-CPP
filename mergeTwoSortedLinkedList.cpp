#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = nullptr;
  }
};

int main() {
  // List 1
  Node *head1 = new Node(1);
  head1->next = new Node(3);
  head1->next->next = new Node(5);

  // List 2
  Node *head2 = new Node(2);
  head2->next = new Node(4);
  head2->next->next = new Node(6);

  // Merge two sorted Linked List
  Node *dummy = new Node(0);
  Node *tail = dummy;
  Node *l1 = head1;
  Node *l2 = head2;
  while (l1 != NULL && l2 != NULL) {
    if (l1->data < l2->data) {
      tail->next = l1;
      tail = tail->next;
      l1 = l1->next;
    } else {
      tail->next = l2;
      tail = tail->next;
      l2 = l2->next;
    }
  }
  if (l1 != NULL)
    tail->next = l1;
  if (l2 != NULL)
    tail->next = l2;

  Node *temp = dummy->next;
  while (temp != NULL) {
    cout << temp->data;
    temp = temp->next;
  }
}
