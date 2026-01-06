#include <climits>
#include <iostream>
#include <vector>

using namespace std;

bool increasingTriplet(vector<int> &nums) {
  int first = INT_MAX, second = INT_MAX;

  for (int num : nums) {
    if (num <= first) {
      first = num;
    } else if (num <= second) {
      second = num;
    } else {
      return true;
    }
  }

  return false;
}

int main() {
  vector<int> nums = {2, 1, 5, 0, 4, 6};
  cout << increasingTriplet(nums);

  return 0;
}
