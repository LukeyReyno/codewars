function rot13(message){
   let s = "";
   for (i = 0; i < message.length; i++)
   {
      if (message[i].search(/[A-Z]/) == 0)
         s += String.fromCharCode(((message[i].charCodeAt(0) % 65 + 13) % 26) + 65);
      else if (message[i].search(/[a-z]/) == 0)
         s += String.fromCharCode(((message[i].charCodeAt(0) % 97 + 13) % 26) + 97);
      else
         s += message[i];
   }
   return s;
}

function main()
{
   console.log(rot13("te st"));
}

main();
