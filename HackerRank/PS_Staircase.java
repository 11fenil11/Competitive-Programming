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
public class PS_Staircase {
    public static void main(String []args){
        int i,n,k,j;
        System.out.println("Enter value");
        Scanner ne=new Scanner(System.in);
        n=ne.nextInt();
        for(i=0;i<n;i++)
        {
            for(k=0;k<n-i-1;k++)
            {
                System.out.print(" ");
            }
            for(j=0;j<=i;j++)
            {
                System.out.print("#");
            }
            System.out.println("");
        }
    }
}
