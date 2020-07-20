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
public class string_after_int {
    public static void main(String[] args)
    {
        int i;
        Scanner s=new Scanner(System.in);
//        int a=s.nextInt();
//        s.nextLine();//This holds \n content of previous int value and hold thqt value;so our main next string can hol our inputdata
//        String[] str=s.nextLine().split("");
//        
//        System.out.println("String is:");
//        for(i=0;i<str.length;i++)
//        {
//            System.out.print(""+str[i]);
//        }
//        System.out.println();
//        System.out.println("Integer is :"+a);
//        
        
        int b=s.nextInt();
        String str1= new String();
        s.nextLine();
        str1=s.nextLine();
        System.out.println("Int b="+b+" String str1="+str1);
    }
}
