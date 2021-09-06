#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
   std::map<char, unsigned> charMap;
   for (int i = 0; i < string.size(); i++)
   {
      if (charMap.end() == charMap.find(string[i]))
         charMap[string[i]] = 1;
      else
         charMap[string[i]] += 1;
   }
   return charMap;
}

/* Example Solution
std::map<char, unsigned> count(const std::string& string) {
  std::map<char, unsigned> r;
  for (const char& c: string) ++r[c];
  return r;
}
*/