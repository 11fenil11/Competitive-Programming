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
public class PS_Time_Conversion {
    public static void main(String []args){
        String str;
        int hh,mm,ss;
        Scanner sc=new Scanner(System.in);
      //  System.out.println(""+(hh=sc.nextInt())+":"+(mm=sc.nextInt())+":"+(ss=sc.nextInt())+""+(str=sc.next()));
        StringBuffer time;
        hh=sc.nextInt();
        time=Integer.parseInt(hh);
        sc.skip("\n");
        System.out.print(":");
        mm=sc.nextInt();
        sc.skip("\n");
        System.out.print(":");
        ss=sc.nextInt();
        sc.skip("\n");
        str=sc.next();
        
        if(str.endsWith("PM"))
        {
            hh=hh+12;
        }
        System.out.println(""+hh+":"+mm+":"+ss);
    }
}
