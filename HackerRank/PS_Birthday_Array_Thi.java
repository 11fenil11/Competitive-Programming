/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrank;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author Fenil
 */
public class PS_Birthday_Array_Thi {
    public static void main(String []args){
        Scanner sp=new Scanner(System.in);
        int n;
        n=sp.nextInt();
        int a[]=new int[n];
        int i,j;
        for(i=0;i<n;i++)
        {
           a[i]=sp.nextInt();
        }
        Arrays.sort(a);
        int cnt=0,max=a[n-1];
        System.out.println("Maximum Value Of Candel"+max);
        for(i=0;i<n;i++)
        {
            if(a[i]==max)
            {
                cnt++;
            }
        }
        System.out.println("Can Blow "+cnt+" Candles.");
   
    }
}
