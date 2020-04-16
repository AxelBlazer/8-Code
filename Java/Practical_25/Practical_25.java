import java.io.*;
import java.security.InvalidParameterException;
import java.util.Arrays;
import java.util.HashSet;
import java.util.TreeSet;

public class Practical_25 
{
	public static void main(String[] args) throws FileNotFoundException 
	{
		if (args.length != 1)
			throw new InvalidParameterException("Usage: Path Name");

		File file = new File(args[0]);
		if (!file.isFile())
			throw new FileNotFoundException(file + " Is Not A File.");

		try (BufferedReader in = new BufferedReader(new InputStreamReader(new FileInputStream(file)), 10000)) 
		{
			String inputS;
			StringBuilder sb = new StringBuilder(10000);
			while ((inputS = in.readLine()) != null)
				sb.append(inputS);

			String[] words = sb.toString().split("\\s+");
			TreeSet<String> ndWords = new TreeSet<>(Arrays.asList(words));

			for (String s : ndWords)
				System.out.println(s);
		} 
		catch (IOException e) 
		{
			e.printStackTrace();
			System.exit(0);
		}
	}
}
