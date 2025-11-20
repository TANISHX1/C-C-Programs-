/*
 * element.h
 * Purpose: Header providing `Remover` utility class to remove occurrences of
 * a value from a `std::vector<int>` and return the resulting size/index.
 * Description: Implements an in-place remove algorithm (shifting matching
 * elements) and returns the new effective size. Demonstrates pass-by-reference
 * and basic loop manipulation of std::vector.
 * Concepts used: std::vector, pass-by-reference, loops, simple class.
 */

#include <vector>

class Remover
{
public:
  int removeElement(std::vector<int> &nums, int val)
  {
    int size = nums.size(), count{};
    for (int i{}; i < size; i++)
    {
      if (nums[i] == val)
      {
        nums[count] = nums[i];
      }
      else
      {
        count++;
      }
    }
    return count + 1;
  }
};
