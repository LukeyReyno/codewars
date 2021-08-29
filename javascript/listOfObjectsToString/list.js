function list(names) {
   var fullString = "";
   for (var i = 0; i < names.length; i++)
   {
      if (i == names.length - 2)
         fullString += names[i].name + " & ";
      else if (i == names.length - 1)
         fullString += names[i].name;
      else
         fullString += names[i].name + ", ";
   }

   return fullString;
}

function main() {
   console.log(list([ {name: 'Bart'}, {name: 'Lisa'}, {name: 'Maggie'} ]));
   // returns 'Bart, Lisa & Maggie'
}

main();