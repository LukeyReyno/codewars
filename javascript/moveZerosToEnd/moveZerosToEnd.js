var moveZeros = function (arr) {
   let returnList = arr.filter(allButZero);
   function allButZero(value, index, array)
   {
      return (value !== 0) ? 1 : 0;
   }

   let sizeDifference = arr.length - returnList.length;
   for (i = 0; i < sizeDifference; i++)
      returnList.push(0);
   return returnList;
}
/* Example Solution
var moveZeros = function (arr) {
  return arr.filter(x => x !== 0).concat(arr.filter(x => x === 0))
}
*/

function main()
{
   console.log(moveZeros([1,2,0,1,0,1,0,3,0,1]));

   console.log(moveZeros([false,1,0,1,2,0,1,3,"a"]));
   // returns[false,1,1,2,1,3,"a",0,0]
}

main();
