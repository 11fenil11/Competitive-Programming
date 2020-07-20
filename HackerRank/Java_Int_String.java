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
public class Java_Int_String {
    public static void main(String []args){
        int n;
        Scanner s= new Scanner(System.in);
        n=s.nextInt();
        
        float k;
        k=(float) n;
        System.out.print("Int Value ="+n+"   Float Value="+k);
        String str;
        //To convert from int into string
        str= Integer.toString(n);
        str= str+"fenil";
        System.out.println("String="+str);
        
        
    }
}
