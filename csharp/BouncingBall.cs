public class BouncingBall {
   public static int bouncingBall(double h, double bounce, double window) {
      if (!(h > 0 && bounce > 0 && bounce < 1 && window < h))
         return -1;
      int total = 0;

      while (h > window)
      {
         total++;
         h *= bounce;
         if (h > window)
            total++;
      }
      return total;
	}
}
