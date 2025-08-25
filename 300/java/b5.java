import java.util.Scanner;
public class b5{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        sc.close();
        System.out.println((int)Math.pow(a,2) + "\n" + (int)Math.pow(a,5));
    }
}