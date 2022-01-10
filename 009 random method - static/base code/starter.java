import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Random rand = new Random();
		int rand_A = rand.nextInt(10);
		System.out.println("A number between 0-9: "+rand_A);
		int rand_B = rand.nextInt(101);
		System.out.println("A number between 0-100: "+rand_B);
		double rand_C = rand.nextDouble()+2.5;
		System.out.println("A number between 2.5 and 3.5: " +rand_C);
		int rand_D = rand.nextInt(590)+14;
		System.out.println("A number between 14 and 589: " +rand_D);
		
		
	}
}
