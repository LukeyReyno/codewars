def solution(s):
   s = [c for c in s]
   i = 0
   while i < len(s):
      if s[i].isupper():
         s.insert(i, " ")
         i += 1
      i += 1
   
   return "".join(s)
