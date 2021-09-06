#include <iostream>
#include <string>
#include <vector>
#include <map>

class StockList
{
public:
   static std::string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories)
   {
      std::map<char, int> resultMap = initializeMap(categories);

      if (lstOfArt.empty() || categories.empty())
         return "";

      // Fill the Dict with values for each category
      for (unsigned long i = 0; i < lstOfArt.size(); i++)
      {
         // Check to make sure category is valid
         if (resultMap.find(lstOfArt[i][0]) != resultMap.end())
         {
            int spaceIndex = lstOfArt[i].find(" ");
            std::string numStr = lstOfArt[i].substr(spaceIndex);
            int num = std::stoi(numStr);
            resultMap[lstOfArt[i][0]] += num;
         }
      }

      return resultsToString(resultMap, categories);
   }
private:
   static std::map<char, int> initializeMap(std::vector<std::string> &categories)
   {
      std::map<char, int> emptyMap;

      for (unsigned long i = 0; i < categories.size(); i++)
         emptyMap.insert(std::pair<char, int>(categories[i][0], 0));

      return emptyMap;
   }

   static std::string resultsToString(std::map<char, int> fullMap, std::vector<std::string> &categories)
   {
      std::string resultStr = "";
      int catSize = categories.size();

      // Order of Category vector needs to be maintain in the string
      for (int i = 0; i < catSize; i++)
      {
         resultStr += (std::string("(") + categories[i]);
         resultStr += (std::string(" : ") + std::to_string(fullMap[categories[i][0]]));
         if (i != catSize - 1)
            resultStr += ") - ";
         else
            resultStr += ")";
      }

      return resultStr;
   }
};

/* Example Solution
class StockList {
public:
  static std::string stockSummary(std::vector<std::string> &books, std::vector<std::string> &categories) {
    if (books.empty() || categories.empty())
      return "";

    int stocks['Z' + 1] = {0};
    for (const std::string &book : books) {
        std::size_t position = book.find_first_of(" ", 2, 1);
        stocks[book[0]] += std::atoi(book.data() + position);
    }

    std::string result = "";
    for (const std::string &category : categories) {
      result = result
        + (result.empty() ? "" : " - ")
        + "(" + category[0] + " : " + std::to_string(stocks[category[0]]) + ")";
    }

    return result;
  }
};
*/

int main()
{
   std::vector<std::string> art = {"ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"};
   std::vector<std::string> cd = {"A", "B"};
   std::cout << StockList::stockSummary(art, cd) << std::endl;
   // "(A : 200) - (B : 1140)");

   art = {"BBAR 150", "CDXE 515", "BKWR 250", "BTSQ 890", "DRTY 600"};
   cd = {"A", "B", "C", "D"};
   std::cout << StockList::stockSummary(art, cd) << std::endl;
   // "(A : 0) - (B : 1290) - (C : 515) - (D : 600)");*/
}