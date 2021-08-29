function accum(s) {
	var returnString = s[0].toUpperCase();
   for (i = 1; i < s.length; i++)
      returnString += "-" + s[i].toUpperCase() + s[i].toLowerCase().repeat(i);
   return returnString;
}

/* Example Solution
function accum(s) {
  return s.split('').map((c, i) => (c.toUpperCase() + c.toLowerCase().repeat(i))).join('-');
}
*/

function main()
{
   console.log(accum("ZpglnRxqenU"));
   console.log(accum("NyffsGeyylB"));
}

main();
