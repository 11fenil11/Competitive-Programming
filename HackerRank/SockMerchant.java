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
public class HackerRank_SockMerchant {
    public static void main(String []args){
        int a[]=new int[100] ;
        int b[]=new int[100];
        int n=0,i,j,k=0,flag=0;
        int count[]=new int[100];
        int ans=0;
        System.out.println("HOW MANY SOCKS YOU ENTERED?");
        Scanner s= new Scanner(System.in);
        n=s.nextInt();
        for(i=0;i<n;i++)
        {
            a[i]=s.nextInt();
        }
        
            for(j=0;j<n;j++)
            {
                flag=0;
                for(i=j+1;i<n;i++)
                {   
                    flag=1;
                    if(a[j]==a[i])
                    {
                        flag = 0;
                        break;
                    }
                }
                
                
                if(flag==1)
                {
                    b[k]=a[j];
                    System.out.println("b["+k+"]= "+b[k]);
                    k++;
                }
                
            }
            for(i=0;i<k;i++)
            {
                flag=3;
               if(a[n-1]==b[k])
               {
                   flag=0;
                   break;
               }
               System.out.print(a[n-1]);
            }
            
                if(flag==3)
                {
                    b[k]=a[n-1];
                    System.out.println("b["+k+"]= "+b[k]);
                    k++;
                }
                if(k<=0)
                {
                    b[k]=a[0];
                    k++;
                }
                
                for(i=0;i<k;i++)
                {  
                    System.out.println("B["+i+"]= "+b[i]);
                    for(j=0;j<n;j++)
                    {
                        if(b[i]==a[j])
                        {
                            count[i]++;
                        }
                    }
                    count[i]=count[i]/2;
                    System.out.println("b["+i+"]="+count[i]);
                    ans=ans+count[i];
                    System.out.println("Ans = "+ans);
                }
               /* for(i=0;i<k;i++)
                {
                    ans=ans+count[i];
                }
                */
                System.out.println("Number Of Pairs: "+ans);
    }
}
