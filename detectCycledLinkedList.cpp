#include <iostream>

using namespace std;

/**
 * fast pointer = fptr
 * slow pointer = sptr
 **/

struct Node {
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = nullptr;
  }
};

int main() {
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);
  head->next->next->next->next = head->next->next;

  // Detect a cycled linked list
  Node *sptr = head;
  Node *fptr = head;

  while (fptr != nullptr && fptr->next != nullptr) {
    // Move sptr 1 step forward at a time
    sptr = sptr->next;
    // Move fptr 2 step at a time
    fptr = fptr->next->next;
    // Match fptr with sptr at each step
    if (sptr == fptr) {
      // Print and break the loop if fptr matches sptr
      cout << true;
      break;
    }
    if (fptr == nullptr || fptr->next == nullptr) {
      cout << false;
      break;
    }
  }
}
