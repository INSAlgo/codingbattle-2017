using System;

class Program
{
    static int Main()
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

        return 0;
    }
}

