using System;
					
public class Program
{
	public static void Main()
	{
		String o = "";
		int wordN = 50;
		int wordL = 10;
		double puncR = 0.5;
		
		Random _rand = new Random();
		
		for(int i = 0; i <= wordN; i ++){
			for(int j = 0; j <= wordL; j ++)
				o += (char) Math.Floor(_rand.NextDouble() * 25 + 97);
			double rand = _rand.NextDouble();
			if(rand < puncR / 100)
				o += ".";
			else if(rand < puncR)
				o += ",";
			else if(i != wordN)
				o += " ";
		}
		Console.WriteLine(o + ".");
	}
}
