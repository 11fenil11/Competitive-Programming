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
public class STatic_initialization_blocks {
    public static int B=10;
    public static int H=1;
    static{
        System.out.println("This is Static Block \n B="+B+" H ="+H);
    }
    
    public static void main(String []args){
      try{
              int flag;
          
            Scanner s= new Scanner(System.in);
            B=s.nextInt();
            H=s.nextInt();
            if(B<0 || H<0)
            {
                flag=0;
            }
            else{
                flag=1;
            }
            if(flag==1)
            {
                int area=B*H;
                System.out.println(area);
            }
        }
      catch(Exception ex){
          System.out.print(""+ex.toString());
      }
}
}