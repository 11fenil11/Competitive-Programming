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
public class printf_formated_output {
    public static void main(String[] args)
    {
        String str1,str2,str3;
        int a1,a2,a3;
        Scanner s=new Scanner(System.in);
        str1=s.next();
        a1=s.nextInt();
        
        str2=s.next();
        a2=s.nextInt();
        
        str3=s.next();
        a3=s.nextInt();
        
        System.out.printf("%-15s%03d",str1,a1);
        System.out.println();
        System.out.printf("%-15s%03d",str2,a2);
        System.out.println();
        System.out.printf("%-15s%03d",str3,a3);
    }
}
