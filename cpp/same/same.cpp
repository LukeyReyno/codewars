#include <iostream>
#include <vector>

class Same {
public :
   static bool comp(std::vector<int> &a, std::vector<int> b) {
      if (a.size() != b.size())
         return false;
      int vectorSize = a.size();
      int i, j;
      for (i = 0; i < vectorSize; i++)
      {
         int root = a[i];
         for (j = 0; j < vectorSize; j++)
         {
            if (root * root == b[j])
            {
               b.erase(b.begin() + j);
               break;
            }
         }
      }
      return b.empty();
   }
};

/* Example Solution
bool Same::comp(std::vector<int> a, std::vector<int> b) {
  for (auto& v : a) {
    v = v * v;
  }
  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());
  return a == b;
}
*/

int main() {
   std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
   std::vector<int> b = {14641, 20736, 361, 25921, 361, 20736, 361, 121};
   std::cout << Same::comp(a, b);
   std::cout << b.empty();
   std::cout << b.size();
}
