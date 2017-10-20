using System;

class Program
{
    static void Main2()
    {
        String line = Console.ReadLine();
        string[] tokens = line.Split(' ');
        int[] inputs = Array.ConvertAll(tokens, int.Parse);
        int n = inputs[0], m = inputs[1];
        char c = Console.ReadLine()[0];

        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        for (int i = 0; i < m; i++) {
            sb.Append(c);
        }
        for (int i = 0; i < n; ++i) {
            Console.WriteLine(sb);
        }
    }

    private static String[] trans(String[] f) {
        int w = f.Length;
        int nw = w * 3;

        System.Text.StringBuilder[] nf = new System.Text.StringBuilder[nw];
        for (int i = 0; i < nf.Length; i++) {
            nf[i] = new System.Text.StringBuilder("");
        }

        for (int i = 0; i < w; ++i) {
            nf[0 * w + i].Append(f[i]);
            for (int j = 0; j < w; ++j) nf[1 * w + i].Append(' ');
            nf[2 * w + i].Append(f[i]);
        }
        for (int i = 0; i < w; ++i) {
            for (int j = 0; j < w; ++j) nf[0 * w + i].Append(' ');
            nf[1 * w + i].Append(f[i]);
            for (int j = 0; j < w; ++j) nf[2 * w + i].Append(' ');
        }
        for (int i = 0; i < w; ++i) {
            nf[0 * w + i].Append(f[i]);
            for (int j = 0; j < w; ++j) nf[1 * w + i].Append(' ');
            nf[2 * w + i].Append(f[i]);
        }

        String[] r = new String[nw];
        for (int i = 0; i < nw; ++i) {
            r[i] = nf[i].ToString();
        }
        return r;
    }

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());

        String[] f = {"X"};
        for (int i = 0; i < n; ++i) {
            f = trans(f);
        }
        for (int i = 0; i < f.Length; ++i) {
            Console.WriteLine(f[i]);
        }
    }
}
