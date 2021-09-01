# Brute Force O(n)
def solution(number):
   multipleList = []
   for num in range(number):
      if num % 3 == 0 or num % 5 == 0:
         multipleList.append(num)
   return sum(multipleList)

# Mathematical Identities
def solution2(number):
   def numberOfMult(m):
      return (number - 1) // m

   def sumOfInts(m):
      return m * (m + 1) // 2
      # ∑ n = 0 + 1 + 2 + ... + n - 1 + n = n * (n + 1) / 2

   return sumOfInts(numberOfMult(3)) * 3 + sumOfInts(numberOfMult(5)) * 5 - sumOfInts(numberOfMult(3 * 5)) * 15
