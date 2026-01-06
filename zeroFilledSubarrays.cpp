#include <iostream>
#include <vector>

/*
 * Folmula for total number of subarray: (n * (n+1)) / 2
 * */

using namespace std;

long long zeroFilledSubarray(vector<int> &nums) {
  long long count = 0;
  long long result = 0;

  for (int num : nums) {
    if (num == 0) {
      count += 1;
    } else {
      result += (count * (count + 1)) / 2;
      count = 0;
    }
  }

  if (count > 0) {
    result += (count * (count + 1)) / 2;
  }

  return result;
}

int main() {
  vector<int> nums = {0, 0, 0, 2, 0, 0};
  cout << zeroFilledSubarray(nums);

  return 0;
}
