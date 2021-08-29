function getCount(str) {
   var vowelsCount = 0;
   var vowels = ['a', 'e', 'i', 'o', 'u'];

   for (i in str)
   {
      for (v in vowels)
      {
         if (str[i] == vowels[v])
            vowelsCount++;
      }
   }
   
   return vowelsCount;
}
