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
public class Java_Subarray {
    public static void main(String args[])
    {
        int a[]=new int[100];
        int i=0,cnt=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter N:");
        int n=sc.nextInt();
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        /*for(i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                cnt++;
            }
            if(i<n-1)
            {
                if((a[i]+a[i+1])<0)
                {
                    cnt++;
                }
            }
            if(i<n-2)
            {
                if((a[i]+a[i+1]+a[i+2])<0)
                {
                    cnt++;
                }
            }
            
            if(i<n-3)
            {
                if((a[i]+a[i+1]+a[i+2]+a[i+3])<0)
                {
                    cnt++;
                }
            }
            if(i<n-4)
            {
                if((a[i]+a[i+1]+a[i+2]+a[i+3]+a[i+4])<0)
                {
                    cnt++;
                }
            }
            
        }*/
        int k=0;
        int j=n,m=0;
        for(i=0;i<n;i++)
        {
            for(m=0;m<=i;m++)
            {
                int equ =0;
                for(k=0;k<j;k++)
                {   
                    equ=a[m+k]+equ;
                }
                    if(equ<0)
                    {
                        System.out.println("EQU="+equ);
                        cnt++;
                    }
                
                
            }
            j--;
        }    
        System.out.println("Number of negative sub arrays: "+cnt);
    }
}
