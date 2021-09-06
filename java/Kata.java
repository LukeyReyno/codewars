public class Kata {
   public static String createPhoneNumber(int[] numbers) {

      return String.format("(%d%d%d) %d%d%d-%d%d%d%d", java.util.stream.IntStream.of(numbers).boxed().toArray());
   }
}
// Problem did not require array validation
/*
   In this case .boxed() is used to convert IntStream to Stream.
   So calling .toArray() will return Object[] (insted of int[] for IntStream).
   This is needed because String.format() expects OBJECT array as a 2nd arg (whilst int[] is the array of primitives).
*/