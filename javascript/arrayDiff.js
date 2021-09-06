function arrayDiff(a, b) {
   const diffList = a.filter(checkDup)

   function checkDup(value, index, array)
   {
      return !b.includes(value);
   }

   return diffList;
   // return a.filter(e => !b.includes(e));
}

/* w3 Schools Example

const numbers = [45, 4, 9, 16, 25];
const over18 = numbers.filter(myFunction);

function myFunction(value, index, array) {
  return value > 18;
}
*/

function main()
{
   console.log(arrayDiff([1, 2, 3], [2]));
   console.log(arrayDiff([], [2]));
}

main();
