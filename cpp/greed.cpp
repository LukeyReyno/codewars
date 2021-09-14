#include <vector>
#include <map>
#include <string>
#include <cstring>
#include <exception>

int score(const std::vector<int>& dice) {
   int totalScore = 0;
   std::map<std::string, int> scoreRules =
   {
      {"Three 1", 1000},
      {"Three 6", 600},
      {"Three 5", 500},
      {"Three 4", 400},
      {"Three 3", 300},
      {"Three 2", 200},
      {"One 1", 100},
      {"One 5", 50},
   };
   std::map<int, int> freqTable;
   for (int num : dice)
   try
   {
      freqTable[num] += 1;
   }
   catch (std::exception e)
   {
      freqTable[num] = 1;
   }

   for (auto pair : freqTable)
   {
      if (pair.second >= 3)
      {
         auto s = std::string("Three ");
         s.append(std::to_string(pair.first));
         totalScore += scoreRules[s];
         pair.second -= 3;
      }
      while (pair.second > 0)
      {
         auto s = std::string("One ");
         s.append(std::to_string(pair.first));
         if (scoreRules[s])
            totalScore += scoreRules[s];
         pair.second--;
      }
   }

   return totalScore;
}
