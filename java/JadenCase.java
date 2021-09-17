public class JadenCase {

	public String toJadenCase(String phrase) {
		if (phrase == null || phrase.equals(""))
         return null;
      String[] strArr = phrase.split("\\s+");
      for (int i = 0; i < strArr.length; i++)
      {
         String s = strArr[i];
         s = s.replace(s.charAt(0), (char) (s.charAt(0) - ('a' - 'A')));
         strArr[i] = s;
      }

      return String.join(" ", strArr);
	}
}
