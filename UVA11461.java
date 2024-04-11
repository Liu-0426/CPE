import java.util.Scanner;

public class UVA11461 {

    private static String solution(String input) {
        if (input.length() <= 1) return input;
        int value = 0;
        for(char c : input.toCharArray()) value += c - '0';
        return solution(String.valueOf(value));
    }


    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String input = scn.nextLine();
        System.out.println(solution(input));
    }
}