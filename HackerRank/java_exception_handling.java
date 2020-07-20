/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrank;
import java.util.InputMismatchException;
import java.util.Scanner;
/**
 *
 * @author Fenil
 */
public class java_exception_handling {
    public static void main(String args[])
    {
        int a,b;
        Scanner sc=new Scanner(System.in);
          
        try{
            a=sc.nextInt();
            b=sc.nextInt();
            System.out.println(a/b);
        }
        catch(InputMismatchException e)
        {
            System.out.println("java.util.InputMismatchException");
        }
        catch(Exception ex)
        {
            System.out.println("Error: "+((ex.toString())));
        }
        
    }
}
