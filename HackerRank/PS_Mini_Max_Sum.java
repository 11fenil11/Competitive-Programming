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
public class PS_Mini_Max_Sum {
    public static void main(String []args){
        int a[]=new int[5],i=0,j=0;
        int arr[]=new int[5];
        Scanner sc=new Scanner(System.in);
        for(i=0;i<5;i++)
        {
            a[i]=sc.nextInt();
        }
        for(j=0;j<5;j++)
        {
            for(i=0;i<5;i++)
            {
                if(i!=j)
                {
                    arr[j]=arr[j]+a[i];
                }
            }
            System.out.println(arr[j]);
        }
        Arrays.sort(arr);
        for(i=0;i<5;i++)
        {
            System.out.println(i+"="+arr[i]);
        }
        System.out.println(arr[0]);
        System.out.println(arr[4]);
    }
}
