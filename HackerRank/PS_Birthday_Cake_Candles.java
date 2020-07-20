/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrank;
import java.util.Scanner;
import java.util.Arrays;
/**
 *
 * @author Fenil
 */
public class PS_Birthday_Cake_Candles {
    public static void main(String []args)
    {
        Scanner sp=new Scanner(System.in);
        int n;
        n=sp.nextInt();
        int a[]=new int[n];
        int i,j;
        for(i=0;i<n;i++)
        {
           a[i]=sp.nextInt();
        }
        int max=a[0];
        for(i=1;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
        int cnt=0;
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
