package ult1;

public class Main {
	
	public static void main(String[] args) {
		int wordCount = 170;
		String output = "";
		int symbolCount = 1;
		for(int i = 0; i <= wordCount; i++) {
			
			for(int j = 0; j <= getRandomNumber(4,12); j++) {
				symbolCount ++;
				
				int nextChar = (int) getRandomNumber(97,122);
				output += (char) nextChar;
				
				if(symbolCount % 100 == 0) {
					output += "\n";
					
				}
				}
			
			if(i % 18 == 0) {
				output += ". "; symbolCount++;
			} else if(i % 7 == 0) {
				output += ", "; symbolCount++;
			} else {
				output += " ";	
			}
		}
		System.out.println(output);
	}
	
	public static int getRandomNumber(int min, int max) {
	    return (int) (Math.random() * ((max - min)+1) + min);
	}
			
	
}
