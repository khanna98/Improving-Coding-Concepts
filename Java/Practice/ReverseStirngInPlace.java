package practice;

public class ReverseStirngInPlace {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s = "I am Mayank Khanna";
		String rev = reverseStringInPlace(s);
		System.out.println(rev);

	}
	
	public static String reverseStringInPlace(String s) {
		StringBuilder s1 = new StringBuilder(s);
		int len = s1.length();
		for(int i=0;i<len/2;i++) {
			char start = s1.charAt(i);
			int end = len - i -1;
			s1.setCharAt(i, s1.charAt(end));
			s1.setCharAt(end, start);
		}
		
		return s1.toString();
		
	}

}
