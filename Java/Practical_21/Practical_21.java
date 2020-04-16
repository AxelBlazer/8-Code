import java.io.*;
import java.util.Scanner;

public class Practical_21
{
	public static void main(String[] args) 
	{
		try (PrintWriter pw = new PrintWriter(new FileOutputStream(new File("123.txt"), true));) 
		{
			for(int i = 0; i < 150; i++) 
				pw.print((int)(Math.random() * 100) + " ");
		} 
		catch (FileNotFoundException fnfe) 
		{
			System.out.println("We Cannot Create The File 123.txt.");
			fnfe.printStackTrace();
		}
	}
}
