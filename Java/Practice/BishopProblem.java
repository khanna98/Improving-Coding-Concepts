
// This is the solution to the Bishop Problem
// i.e the maximum number of bishops that can be
// placed on a NxN chessboard that don't collide

import java.util.*;

class BishopProblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // Create Scanner object to input number
        int n = sc.nextInt(); // Size of the board
        System.out.println("Maximum bishops that can be placed are : " + 2 * (n - 1)); // Answer using the formula
    }
}
