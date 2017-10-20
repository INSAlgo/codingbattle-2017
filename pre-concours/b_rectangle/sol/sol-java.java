import java.io.*;
import java.util.*;

class b_rectangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), m = sc.nextInt();
        sc.nextLine();
        char c = sc.nextLine().charAt(0);

        String l = new String(new char[m]).replace('\0', c);
        for (int i = 0; i < n; ++i) {
            System.out.println(l);
        }
    }
}

