#include <iostream>
#include <stack>
#include <string>

bool valid_braces(std::string braces) 
{
   std::stack<char> bStack;
   
   for (unsigned long i = 0; i < braces.size(); i++)
   {
      if (bStack.empty())
      {
         bStack.push(braces[i]);
         continue;
      }
      switch (braces[i])
      {
         case '}':
            if (bStack.top() == '{')
               bStack.pop();
            else
               return false;
            break;
         case ')':
            if (bStack.top() == '(')
               bStack.pop();
            else
               return false;
            break;
         case ']':
            if (bStack.top() == '[')
               bStack.pop();
            else
               return false;
            break;
         default:
            bStack.push(braces[i]);
            break;
      }
   }

   return bStack.empty();
}

/* Example Solution
bool valid_braces(std::string braces) 
{
  map<char, char> dict = {{'(',')'}, {'[',']'}, {'{','}'}};
  vector<char> v = {'(', '{', '['};
  stack<char> s;
  for (auto c : braces) {
    if (find(v.begin(), v.end(), c) != v.end())
      s.push(dict[c]);
    else if (s.empty() || c != s.top())
      return false;
    else if (c == s.top())
      s.pop();
  }
  return s.empty();
}
*/

int main() {
   std::cout << valid_braces("()");   // True
   std::cout << valid_braces("}[(])");// False
}
