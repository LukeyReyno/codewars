function sumTwoSmallestNumbers(numbers) {
   if (numbers.length == 0)
      return 0;
   if (numbers.length == 1)
      return numbers[0];

   numbers.sort((a, b) => a - b);

   return numbers[0] + numbers[1];
}

/* Example Solution
function sumTwoSmallestNumbers(numbers) {
    //Code here
    var res1, res2
    for (const n of numbers) {
        if (n <= 0) {
            continue
        } else if (res1 === undefined || n <= res1 ) {
            res2 = res1
            res1 = n
        } else if (res2 === undefined || n <= res2) {
            res2 = n
        }
    }
    return res1 + res2

}
*/

function main()
{
   console.log(sumTwoSmallestNumbers([5, 8, 12, 19, 22]));
   console.log(sumTwoSmallestNumbers([15, 28, 4, 2, 43]));
}

main();
