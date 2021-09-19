using System;

public class Kata
{
  public static string ToCamelCase(string str)
  {
      char[] delims = {'_', '-'};
      String[] strArr = str.Split(delims);
      
      for (int i = 0; i < strArr.Length; i++)
      {
         if (i > 0 && strArr[i][0] >= 'a' && strArr[i][0] <= 'z')
         {
            int Place = strArr[i].IndexOf(strArr[i][0]);
            strArr[i] = strArr[i].Remove(Place, 1).Insert(Place, char.ToString(((char) (strArr[i][0] - ('a' - 'A')))));
         }
      }
      return String.Concat(strArr);
  }
}
