#include <vector>
#include <string>

class Kata
{
public:
   std::vector<std::string> towerBuilder(int nFloors)
   {
      std::vector<std::string> tower;
      int towerWidth = 2 * nFloors - 1;
      std::string block = "";
      (&block)->append(std::string(towerWidth - 1, ' '));
      block.insert(towerWidth / 2, "*");
      tower.push_back(block);

      for (int i = 1; i < nFloors; i++)
         tower.push_back((block = block.insert(towerWidth / 2, "**").substr(1, towerWidth)));

      return tower;
   }
};

/* Example Solution
class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
      std::vector<std::string> ret;
      for(int i=0; i<nFloors ; i++)
      {
        ret.push_back(std::string(nFloors-i-1,' ') + 
                      std::string((i*2)+1,'*') +
                      std::string(nFloors-i-1,' '));
      }
      return ret;
    }
};
*/