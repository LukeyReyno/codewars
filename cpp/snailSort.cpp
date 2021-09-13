#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
   std::vector<int> results;
   int matrixLength = snail_map[0].size();
   int iterator = 0;
   int cCol = 0;
   int cRow = 0;
   std::vector<int> colRange = {0, matrixLength};
   std::vector<int> rowRange = {0, matrixLength};
   bool changeCol = true;
   bool forwards = true;

   if (!matrixLength)
      return {};

   while (colRange[0] != colRange[1] && rowRange[0] != rowRange[1])
   {
      if (changeCol)
      {
         while (iterator < colRange[1] and iterator >= colRange[0])
         {
            results.push_back(snail_map[cRow][iterator]);
            iterator += forwards ? 1 : -1;
         }
         if (forwards)
         {
            rowRange = {rowRange[0] + 1, rowRange[1]};
            cCol = iterator - 1;
            iterator = rowRange[0];
         }
         else
         {
            rowRange = {rowRange[0], rowRange[1] - 1};
            cCol = iterator + 1;
            iterator = rowRange[1] - 1;
         }
         changeCol = !changeCol;
      }
      else
      {
         while (iterator < rowRange[1] and iterator >= rowRange[0])
         {
            results.push_back(snail_map[iterator][cCol]);
            iterator += forwards ? 1 : -1;
         }
         if (forwards)
         {
            colRange = {colRange[0], colRange[1] - 1};
            cRow = colRange[1];
            iterator = cRow - 1;
         }
         else
         {
            colRange = {colRange[0] + 1, colRange[1]};
            cRow = colRange[0];
            iterator = colRange[0];
         }
         forwards = !forwards;
         changeCol = !changeCol;
      }
   }

   return results;
}
