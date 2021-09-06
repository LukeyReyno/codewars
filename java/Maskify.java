public class Maskify {
   public static String maskify(String str) {
       if (str.length() < 5)
          return str;
       return str.replace(str.substring(0, str.length()-4), "#".repeat(str.length() - 4));
   }
   /* Example Answer
   public static String maskify(String str) {
        return str.replaceAll(".(?=.{4})", "#");
    }
   */
}
