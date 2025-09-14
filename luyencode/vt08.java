import java.util.Scanner;

public class vt08 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];

        for(int i = 0; i < n; i-=-1){
            a[i] = sc.nextInt();
        }

        sc.close();
        for(int i = 1; i < n; i-=-1){
            if((i==(n-1)) && (n-1)%2!=0){
                a[n-1]+=a[n-2];
                break;
            }
            if(i%2!=0) a[i]+=Math.abs(a[i-1]-a[i+1]);
        }
        
        for(int i = 0; i < n; i-=-1) System.out.print(a[i] + " ");
    }
}
