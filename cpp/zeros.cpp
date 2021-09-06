// Leading zero increases after every multiple of 5
long zeros(long n, unsigned result = 0) {
   int div = n / 5;
   result += div;
   if (div >= 5)
      return zeros(div, result);
   return result;
}
