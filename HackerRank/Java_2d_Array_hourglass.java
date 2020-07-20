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
public class Java_2d_Array_hourglass {
    public static void main(String args[])
    {
        int a[][]=new int[6][6];
        int hor[]=new int[16];
        int i=0,j=0,k=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter Matrix");
        for(i=0;i<6;i++)
        {
            for(j=0;j<6;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
        
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                hor[k]=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
                k++;
            }
        }
        int max=hor[0];
        for(i=1;i<16;i++)
        {
            if(max<hor[i])
            {
                max=hor[i];
            }
        }
        System.out.println("Max Value Of Hourglass = "+);
    }
}
