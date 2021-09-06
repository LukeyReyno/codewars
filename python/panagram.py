import string

def is_pangram(s):
   # alphabet contains all 26 lowercase letters
   alphabet = string.ascii_lowercase
   s = s.lower()
   for char in alphabet:
      if char not in s:
         return False
   return True

def is_pangram2(s):
   return set(string.lowercase) <= set(s.lower())
