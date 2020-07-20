/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrank;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Fenil
 */
public class Java_ArrayList {
    public static void main(String args[])
    {
        int n,i,j,size;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter N :");
        n=sc.nextInt();
        ArrayList[] a=new ArrayList[n];
        
        for(i=0;i<n;i++)
        {
            size=sc.nextInt();
            a[i]=new ArrayList();
            for(j=0;j<size;j++)
            {
               a[i].add(sc.nextInt());
            }
        }
        int r[]=new int[100];
        int c[]=new int[100];
        int row,col;
        int q=sc.nextInt();
        for(i=0;i<q;i++)
        {
            r[i]=sc.nextInt();
            c[i]=sc.nextInt();
        }
        for(i=0;i<q;i++)
        {
            row=r[i]-1;
            col=c[i]-1;
           /* if((a[row].get(col))==0)
            {
               
            }
            else*/
            try{
                System.out.println("Value "+a[row].get(col));
            }catch(Exception ex)
            {
                 System.out.println("ERROR");
            }
        }
    }
}