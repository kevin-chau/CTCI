
public class uniqueChars {

	public static boolean isUniqueChars(String str) {
		if (str.length() > 128){
			return false;
		}

		boolean[] charactersSeen = new boolean[128];
		for (int i = 0; i < str.length(); i++){
			int character = str.charAt(i);
			if (charactersSeen[character]){
				return false;
			}
			charactersSeen[character] = true;
		}
		return true;
	}

    public static void main(String[] args) {
        // Prints "Hello, World" to the terminal window.
        String[] words = {"abcde", "hello", "apple", "kite", "padle"};
		for (String word : words) {
			System.out.println(word + ": " + isUniqueChars(word));
		}
    }

}