import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        int N = 0;
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();

        if((N % 4 == 0 && N % 100 != 0) || (N % 400 == 0)) {
            System.out.print(1);
        }
        else {
            System.out.print(0);
        }
    }
}
