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
public class PS_Diagonal_Difference {
    public static void main(String args[]){
        int a[][]=new int[100][100];
        int i,n,j,pri=0,sec=0;
        System.out.print("Enter Number of rows and column:");
        Scanner sc= new Scanner(System.in); 
        n=sc.nextInt();
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
               if(i==j)
               {
                    pri=a[i][j]+pri;           //primary diagonal
               }
               if(i+j==n-1)
               {
                   sec=a[i][j]+sec;
               }
            }
        }
        int ans=pri-sec;
        if(ans<0)
        {
            ans=ans*(-1);
        }
        System.out.println("Primary Diagonal = "+pri+"  And Secondary Diagonal is = "+sec);
        System.out.println("Answer is Pri-Sec = "+ans);
    }
    
}
