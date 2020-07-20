/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrank;
import java.text.DecimalFormat;
import java.util.Scanner;
/**
 *
 * @author Fenil
 */
public class PS_pusminus {
    public static void main(String args[]){
        int a[]=new int[100];
        int i,k,pos=0,neg=0,zero=0;
        System.out.print("Enter the size of array: ");
        Scanner sc=new Scanner(System.in);
        k=sc.nextInt();
        
        for(i=0;i<k;i++)
        {
            a[i]=sc.nextInt();
        }
        for(i=0;i<k;i++)
        {
            if(a[i]>0)
            {
                pos=pos+1;
            }
            if(a[i]<0)
            {
                neg=neg+1;
            }
            if(a[i]==0)
            {
                zero=zero+1;
            }
        }
        float pos_ans= (float)pos/k;
        float neg_ans= (float)neg/k;
        float zero_ans= (float)zero/k;
        DecimalFormat dec=new DecimalFormat("#0.000000");
        System.out.println("Positive Probability  "+(dec.format(pos_ans)));
        System.out.println("Negative Probability  "+(dec.format(neg_ans)));
        System.out.println("Zero Probability  "+(dec.format(zero_ans)));
    } 
}
