function getMiddle(s)
{
   let middleIndex = (s.length / 2) >> 0; // floor divide
   if (s.length % 2) // Odd
      return s[middleIndex];
   return s.slice(middleIndex - 1, middleIndex + 1);
}
/* Example solution
function getMiddle(s)
{
  return s.substr(Math.ceil(s.length / 2 - 1), s.length % 2 === 0 ? 2 : 1);
}
*/
function main()
{
   console.log(getMiddle("test"));
   console.log(getMiddle("A"));
}

main();
