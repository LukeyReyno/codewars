import java.util.ArrayList;
import java.util.List;

public class StringSplit {
    public static String[] solution(String s) {
        String[] returnArray = {};
        List<String> charPairs = new ArrayList<>();
        if (s.length() % 2 != 0)
            s = s.concat("_");
        
        for (int i = 0; i < s.length(); i += 2)
            charPairs.add(s.substring(i, i + 2));

        return charPairs.toArray(returnArray);
    }
    /* Example Solution
    public class StringSplit {
        public static String[] solution(String s) {
            s = (s.length() % 2 == 0)?s:s+"_";
            return s.split("(?<=\\G.{2})");
        }
    }
    */
}
