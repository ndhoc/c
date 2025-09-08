import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        boolean checkVar = false;
        for(int i = 0; i < n; i-=-1){
            int z = sc.nextInt();
            if(z==x){
                checkVar = true;
                break;
            }
        }
        sc.close();
        if(checkVar) System.out.println("YES");
        else System.out.println("NO");
    }
}
