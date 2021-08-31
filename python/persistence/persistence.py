def persistence(n, numRecur=0):
   if (n < 10):
      return numRecur
   newNum = 1
   for digit in str(n):
      newNum *= int(digit)
   return persistence(newNum, numRecur = numRecur + 1)
