import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	Scanner sc = new Scanner(System.in);
		System.out.println ("Pick a number between 1-1000");
	int A = sc.nextInt();
	Random rand = new Random();
	int rand_num1= rand.nextInt(1000) +1;
		if (A>rand_num1)
		{
			System.out.println("Your number is greater than the number! The number was " +rand_num1+".");
		}
		else if (A<rand_num1)
		{
			System.out.println("Your number is less than the number! The number was " +rand_num1+".");
		}

	}
}
