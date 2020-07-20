/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrank;
import java.util.Scanner;
/**
 *
 * @author Fenil
 */
public class PS_Bon_Appet {
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        int a[]=new int[100];
        long n;
        int k,bill=0;
        System.out.println("Enter N");
        n=sc.nextLong();
        
        System.out.println("Enter K");
        k=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
     
        }
        for(int i=0;i<n;i++)
        {
            if(i!=k)
            {
                bill=a[i]+bill;
            }
        }
        bill=bill/2;
        
        int b;
        System.out.println("Amount that Brian Charges to Anna:");
        b=sc.nextInt();
        
        if(bill==b)
        {
            System.out.println("Bon Appet");
        }
        else
        {
            System.out.println("Difference="+(b-bill));
        }
    }
}
