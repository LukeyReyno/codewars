def is_valid_IP(strng):
   if ' ' in strng:
      return False

   numList = strng.split('.')
   if len(numList) != 4:
      return False
   
   for num in numList:
      try:
         if int(num) < 0 or int(num) > 255:
            return False
         if num[0] == '0' and len(num) > 1:
            return False
      except: # Not an int
         return False
   return True 
