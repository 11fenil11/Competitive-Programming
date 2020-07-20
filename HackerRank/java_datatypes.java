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
public class java_datatypes {
    public static void main(String args[])
    {
        long x[]= new long[1000];
        int p=0;
        Scanner s= new Scanner(System.in);
            System.out.println("Enter P:");
            p=s.nextInt();
         for(int i=0;i<p;i++)
         {
             x[i]=s.nextLong();
         }
         for(int i=0;i<p;i++)
         {
            
                System.out.println(x[i]+"Can be fitted in");
                if(x[i]>=-128 && x[i]<=127)
                    System.out.println("* byte");
                if(x[i]>=-(pow(2,15)) && x[i]<=pow(2,15)-1)
                    System.out.println("* short");
                if(x[i]>=-(pow(2,31)) && x[i]<=pow(2,31)-1)
                    System.out.println("* int");
                if(x[i]>=-(pow(2,63)) && x[i]<=pow(2,63)-1)
                    System.out.println("* long");
                else
                {
                    System.out.println(x[i]+"can't be fitted anywhere.");
                }
            
         }
    }
           
}
