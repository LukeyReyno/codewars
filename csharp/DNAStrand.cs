public class DnaStrand 
{
   public static string MakeComplement(string dna)
   {
      string result = "";
      for (int i = 0; i < dna.Length; i++)
      {
         switch (dna[i])
         {
            case 'T':
               result += "A";
               break;
            case 'A':
               result += "T";
               break;
            case 'C':
               result += "G";
               break;
            case 'G':
               result += "C";
               break;
         }
      }

      return result;
   }
}
