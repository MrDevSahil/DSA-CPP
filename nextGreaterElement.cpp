#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> nextGreater(vector<int> &nums) {
  int n = nums.size();
  vector<int> result(n, -1);
  stack<int> stk;

  // traverse right to left
  for (int i = n - 1; i >= 0; i--) {
    // pop elements smaller than current
    while (!stk.empty() && stk.top() <= nums[i]) {
      stk.pop();
    }
    // check if stack is empty
    if (stk.empty()) {
      result[i] = -1;
    } else {
      result[i] = stk.top();
    }
    // push current element
    stk.push(nums[i]);
  }
  return result;
}

// Monotonic Stack
int main() {
  vector<int> nums = {4, 5, 2, 10, 8};
  vector<int> result = nextGreater(nums);

  // Print the result
  for (int x : result) {
    cout << x << " ";
  }
};
