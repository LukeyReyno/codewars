#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int i;
  int numberPresent = 0;

   for (i = 0; i < arr.size(); i++)
   {
      if (arr[i] == true)
         numberPresent++;
   }

   return numberPresent;
}
