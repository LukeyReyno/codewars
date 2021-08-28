#include <string>
#include <iostream>
#include <list>

#define WORD_LENGTH 5

void printList(std::list<std::string> list)
{
   // Print out the list for debugging
   int i;
   int listLength = list.size();

   std::cout << "l = { ";
   for (std::list<std::string>::iterator it = list.begin(); it != list.end(); ++it)
      std::cout << it.operator*() << ", ";
   std::cout << "};\n";
}

std::list<std::string> getWordList(const std::string &str)
{
   int currentPos, prevPos = 0;

   std::list<std::string> wordList;

   while ((currentPos = str.find_first_of(" ", prevPos)) != str.npos)
   {
      int wordSize = currentPos - prevPos;
      std::string newWord = str.substr(prevPos, wordSize);
      wordList.push_back(newWord);
      prevPos = currentPos + 1;
   }
   
   int wordSize = currentPos - prevPos;
   std::string newWord = str.substr(prevPos, wordSize);
   wordList.push_back(newWord);

   return wordList;
}

std::string reverseString(const std::string &str)
{
   int i;
   std::string reverseStr;
   int lastIndex = str.size() - 1;
   const char *cstr = str.c_str();

   for (i = lastIndex; i > -1; i--)//char it = str.end(); it != str.begin(); --it)
   {
      std::string newChar;
      newChar = cstr[i];
      reverseStr.append(newChar);
   }
   return reverseStr;
}

std::string spinWords(const std::string &str)
{
   std::string newString;

   std::list<std::string> wordList = getWordList(str);

   for (std::list<std::string>::iterator it = wordList.begin(); it != wordList.end(); ++it)
   {
      if (it != wordList.begin())
         newString.append(" ");
      if (it.operator*().size() < WORD_LENGTH)
         newString.append(it.operator*());
      else
      {
         std::string reverseStr = reverseString(it.operator*());
         newString.append(reverseStr);
      }
   }
   return newString;
} // spinWords

int main()
{
   //reverseString("Bruh");
   std::cout << spinWords("hello world world") << std::endl;
   std::cout << spinWords("Hey world world") << std::endl;
   std::cout << spinWords("hello") << std::endl;
   std::cout << spinWords("bruh") << std::endl;
   return 0;
}