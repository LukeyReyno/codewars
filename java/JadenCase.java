public class JadenCase {

	public String toJadenCase(String phrase) {
		if (phrase == null || phrase.equals(""))
         return null;
      String[] strArr = phrase.split("\\s+");
      String[] results;
      for (String s : strArr)
      {
         s = s.replace(s.charAt(0), (char) (s.charAt(0) - ('a' - 'A')));
         results
         System.out.println(s);
      }

      return String.join(" ", strArr);
	}
}