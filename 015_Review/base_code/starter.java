import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your name?");
		String x= sc.nextLine();
		System.out.println("What is your role? (ex. Slayer of Dragons)");
		String y= sc.nextLine();
		
			System.out.println("Would you like to be a Wizard, Warrior, or Rogue?");
			String A = sc.nextLine();
		if (A.equals("Wizard")){
			System.out.println("You've chosen the Wizard! Excelsior!");
		}
		else if (A.equals ("wizard")){
			System.out.println("You've chosen the Wizard! Excelsior!");
		}
		else if (A.equals ("Warrior")){
			System.out.println("You've chosen the Warrior! For Honor!");
		}
		else if (A.equals ("warrior")){
			System.out.println("You've chosen the Warrior! For Honor!");
		}
		else if (A.equals ("Rogue")){
			System.out.println("You've chosen the Rogue! How Cunning!");
		}
		else if (A.equals ("rogue")){
			System.out.println("You've chosen the Rogue! How Cunning!");
		}
		else {
			System.out.println("You've decided not to choose a role. Rerun program.");
		}
		
		System.out.println("You have 25 skill points to spend in the following: Strength, Dexterity, Intelligence, Constitution, and Charisma. Spend them wisely.");
		int Dav = 25;
		
		System.out.println("Strength (1-10): ");
		int s= sc.nextInt();
		if (s>10){
			System.out.println("The chosen amount exceeds the limit. Please try again");
		}
		else {
			System.out.println("You have "+ (Dav-s)+" left to spend");
		}
		System.out.println("Dexterity (1-10): ");
		int d= sc.nextInt();
		System.out.println("You have "+ ((Dav-s)-d) + " left to spend");
		if (d>10){
			System.out.println("The chosen amount exceeds the limit. Please try again");
		}
		System.out.println("Intelligence (1-10): ");
		int i= sc.nextInt();
		System.out.println("You have "+ (((Dav-s)-d)-i) +" left to spend");
		System.out.println("Constitution (1-10): ");
		int c= sc.nextInt();
		System.out.println("You have "+ ((((Dav-s)-d)-i)-c) +" left to spend");
		System.out.println("Charisma (1-10): ");
		int ch= sc.nextInt();
		System.out.println("You have "+ (((((Dav-s)-d)-i)-c)-ch) +" to spend for next time.");
		
			if ((((((Dav-s)-d)-i)-c)-ch)==0)
			{
					System.out.println("You have no more credits to spend for the future.");
			}
			
			
			System.out.println("----------------------------------------------");
			
			System.out.println("You are " +x+", the " +y+" of CVHS");
			System.out.println("You're a "+A+" with the following stats");
			System.out.println("Strength - "+ s);
			System.out.println("Dexterity - "+ d);
			System.out.println("Intelligence - "+ i);
			System.out.println("Constitution - "+ c);
			System.out.println("Charisma - "+ ch);
			System.out.println("Good luck on you next quest "+ x+ "!");
		
		
		
		
	}
}
