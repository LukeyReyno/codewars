def longest_consec(strarr, k):
   largest = ""
   if len(strarr) == 0 or k < 1:
      return largest

   for i in range(len(strarr) - k + 1):
      temp = strarr[i]
      j = 1
      while j < k:
         temp += strarr[i+j]
         j += 1
      if len(temp) > len(largest):
         largest = temp
   
   return largest
