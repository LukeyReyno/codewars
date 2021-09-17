public class CamelCase {
   public static String camelCase(String str) {
      if (str == null || str.equals(""))
         return "";
      String[] strArr = str.split("\\s+");
      for (int i = 0; i < strArr.length; i++)
      {
         if (strArr[i].length() < 1)
            continue;
         String s = strArr[i];
         s = s.replaceFirst(String.valueOf((char) s.charAt(0)), String.valueOf((char) (s.charAt(0) - ('a' - 'A'))));
         strArr[i] = s;
      }

      return String.join("", strArr);
   }
}
