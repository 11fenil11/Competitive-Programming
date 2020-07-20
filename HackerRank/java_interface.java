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
interface AdvancedArithmetic{
    int divisor_sum(int n);
}
class  MyCalculator implements AdvancedArithmetic{
    public
    int divisor_sum(int n){
        int sum=0;
        int i = 1;
        while(i<=n)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
            i++;
        }
        return sum;
    }
}

public class java_interface {
  public static void main(String args[])
  {
      MyCalculator m1=new MyCalculator();
      int n;
      System.out.println("Enter Number : ");
      Scanner sc=new Scanner(System.in);
      n=sc.nextInt();
      
      System.out.println("Your Sum="+m1.divisor_sum(n));
  }
}
