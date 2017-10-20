import java.io.*;

class a_dis_papa {
    public static void main(String[] args) {
        try {
            BufferedReader consoleIn = new BufferedReader(new InputStreamReader(System.in));
            String s = consoleIn.readLine();
            System.out.println(s.substring(4));
        } catch (IOException e) {}
    }
}

