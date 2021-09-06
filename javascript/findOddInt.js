// A is an array of integers with one int appearing an odd number of times
function findOdd(A) {
   var numDict = {};

   for (var i = 0; i < A.length; i++)
   {
      if (numDict[A[i]] == null)
         numDict[A[i]] = 1;
      else
         numDict[A[i]]++;
   }

   for (var num in numDict) {
      if (numDict[num] % 2 == 1)
         return Number(num);
   }

   return -1;
}

/* Example Solution
function findOdd(A) {
  var obj = {};
  A.forEach(function(el){
    obj[el] ? obj[el]++ : obj[el] = 1;
  });
  
  for(prop in obj) {
    if(obj[prop] % 2 !== 0) return Number(prop);
  }
}
*/

function main() {
   console.log(findOdd([20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5]));
   // Answer is 5
}

main();