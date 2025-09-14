import java.util.Scanner;
public class vt07 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int[] a = new int[11];
        boolean checkVar = false;
        
        for(int i = 0; i < 11; i-=-1){
            a[i] = sc.nextInt();
        }
        
        for(int i = 0; i < 10; i-=-1){
            if(a[i] == a[10]){
                checkVar = true;
                System.out.print((i+1) + " ");
            }
        }

        if(!checkVar) System.out.print(-1);
    }
}
