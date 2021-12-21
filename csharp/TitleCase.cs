public class Kata
{
  public static string TitleCase(string title, string minorWords="")
  {
    string result = "";

    if (title.Length < 1)
      return result;

    string[] wordArray = title.Split(" ");
    if (minorWords != null)
      minorWords = " " + minorWords.ToLower() + " ";

    for (int i = 0; i < wordArray.Length; i++)
    {
      string tempWord = wordArray[i].ToLower();
      if (minorWords == null || !(minorWords.Contains(" " + tempWord + " ")) || i == 0)
      {
        char firstLetter = tempWord[0];
        firstLetter -= (char) ('a' - 'A');
        tempWord = tempWord.Substring(1);
        tempWord = firstLetter + tempWord;
      }

      result += (tempWord + " ");
    }
    
    return result.Substring(0, result.Length - 1);
  }
}
