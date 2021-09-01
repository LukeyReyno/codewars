//return the total number of smiling faces in the array
function countSmileys(arr) {
   var numSmiley = 0;

   arr.forEach(checkValid);

   function checkValid(smiley)
   {
      if (smiley.length > 3)
         return ;
      if (smiley[0] != ':' && smiley[0] != ";")
         return ;
      if (smiley.length == 3 && (smiley[1] != '-' && smiley[1] != '~'))
         return ;
      if (smiley[smiley.length - 1] != ')' && smiley[smiley.length - 1] != 'D')
         return ;

      numSmiley++;
   }

   return numSmiley;
}
// Make sure to practice regex

/* Example Solution
function countSmileys(arr) {
  return arr.filter(x => /^[:;][-~]?[)D]$/.test(x)).length;
}
*/