/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrank;

import static java.lang.Math.pow;
import java.util.Scanner;

/**
 *
 * @author Fenil
 */
public class java_loops_2 {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        int t=s.nextInt();
        int a[]=new int[10];
        int b[]=new int[10];
        int n[]=new int[10];
        int sum[]=new int[10];
        for(int i=0;i<t;i++)
        {
             a[i]=s.nextInt();
             b[i]=s.nextInt();
             n[i]=s.nextInt();
        }
        System.out.println(""+t);
        for(int i=0;i<t;i++)
        {
            System.out.print(""+(a[i]+b[i]+" "));
            sum[i]=a[i]+b[i];
            for(int j=1;j<n[i];j++)
            {
                sum[i]=(int) (sum[i]+b[i]*pow(2,j));
                System.out.print(sum[i]+" ");
            }
            System.out.println();
        }
    }
}
