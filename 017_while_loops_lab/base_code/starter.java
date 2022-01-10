import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc= new Scanner(System.in);
	System.out.println("Please enter a name: ");
	String x= sc.nextLine();
	System.out.println("How many times would you like this name to be repeated? ");
	int y= sc.nextInt();
	
	int z= 1;
	while(true)
		{
		System.out.println(x);
		if (y == z)
		{
			break;
		}
		z = z+1;
		}
	}
}