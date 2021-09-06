def unique_in_order(iterable):
   nList = []

   for i in range(len(iterable)):
      if (i != 0 and iterable[i] == prevObject):
         continue
      prevObject = iterable[i]
      nList.append(prevObject)
   
   return nList
