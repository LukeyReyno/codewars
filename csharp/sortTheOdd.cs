public class Kata
{
  public static int[] SortArray(int[] array)
  {
      for (int i = array.Length - 1; i >= 0; i--)
      {
         int value = array[i];
         if (value % 2 == 0)
            continue;
         int index = i;
         bool swapped = false;
         for (int j = i - 1; j >= 0; j--)
         {
            // Check for swap
            if (array[j] % 2 != 0 && array[j] > value)
            {
               int temp = array[j];
               array[j] = value;
               array[index] = temp;
               index = j;
               swapped = true;
            }
         }
         if (swapped)
            i++;
      }
      return array;
  }
}
