import java.io.*;
import java.util.*;

class d_fractale {
    private static String[] trans(String[] f) {
        int w = f.length;
        int nw = w * 3;

        StringBuilder[] nf = new StringBuilder[nw];
        for (int i = 0; i < nf.length; i++) {
            nf[i] = new StringBuilder("");
        }

        for (int i = 0; i < w; ++i) {
            nf[0 * w + i].append(f[i]);
            for (int j = 0; j < w; ++j) nf[1 * w + i].append(' ');
            nf[2 * w + i].append(f[i]);
        }
        for (int i = 0; i < w; ++i) {
            for (int j = 0; j < w; ++j) nf[0 * w + i].append(' ');
            nf[1 * w + i].append(f[i]);
            for (int j = 0; j < w; ++j) nf[2 * w + i].append(' ');
        }
        for (int i = 0; i < w; ++i) {
            nf[0 * w + i].append(f[i]);
            for (int j = 0; j < w; ++j) nf[1 * w + i].append(' ');
            nf[2 * w + i].append(f[i]);
        }

        String[] r = new String[nw];
        for (int i = 0; i < nw; ++i) {
            r[i] = nf[i].toString();
        }
        return r;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        String[] f = {"X"};
        for (int i = 0; i < n; ++i) {
            f = trans(f);
        }
        for (int i = 0; i < f.length; ++i) {
            System.out.println(f[i]);
        }
    }
}
