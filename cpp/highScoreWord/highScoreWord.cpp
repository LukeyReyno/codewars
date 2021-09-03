#include <string>
#include <cstring>
#include <map>
#include <vector>

std::map<char, unsigned> alphaMap()
{
   std::string alphabet = "_abcdefghijklmnopqrstuvwxyz";
   std::map<char, unsigned> map;
   
   for (unsigned i = 0; i <= alphabet.size(); i++)
      map[alphabet[i]] = i;

   return map;
}

std::vector<std::string> createWordList(char* str)
{
   char *ptr;
   std::vector<std::string> wordList;
   ptr = strtok(str, " ");
   while (ptr != NULL)
   {
      wordList.push_back(ptr);
      ptr = strtok (NULL, " ");
   }

   return wordList;
}

unsigned scoreForWord(std::map<char, unsigned> scoreMap, std::string word)
{
   unsigned score = 0;

   for (unsigned i = 0; i < word.size(); i++)
      score += scoreMap[word[i]];

   return score;
}

// All letters will be lowercase and all inputs will be valid.
std::string highestScoringWord(const std::string &str)
{
   std::map<char, unsigned> alphabet = alphaMap();
   std::string strcopy = str;
   std::vector<std::string> wordList = createWordList((char*) strcopy.c_str());

   std::string maxWord;
   unsigned score;
   unsigned maxScore = 0;

   for (unsigned i = 0; i < wordList.size(); i++)
   {
      score = scoreForWord(alphabet, wordList[i]);
      if (score > maxScore)
      {
         maxScore = score;
         maxWord = wordList[i];
      }
   }
   return maxWord;
}

/* Example Solution

std::string highestScoringWord(const std::string &str)
{
  std::istringstream stm(str);
  std::string token, maxString;
  long maxValue = 0;

  auto GetValue = [](const std::string& s)
  {
    long r = 0;
    for (auto c : s)
      r += int(c) - int('a') + 1;

    return r;
  };

  while (std::getline(stm, token, ' ')) 
  { 
    long actValue = GetValue(token);
    if (actValue > maxValue)
    {
      maxValue = actValue;
      maxString = token;
    }
  }

  return maxString;
}
*/
