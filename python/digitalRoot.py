def digital_root(n: int):
   num_digits = len(str(n))
   if num_digits == 1:
      return n
   new_n = 0
   for i in range(num_digits):
      new_n += int(str(n)[i])
   
   return digital_root(new_n)
