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
public class Split_use_spacein_str {
    public static void main(String[] args)
    {
        int i;
        String[] name;
        Scanner s=new Scanner(System.in);
        System.out.println("ENter String");
        name=s.nextLine().split("");
        System.out.print("ENtered String is this->");
        for(i=0;i<name.length;i++)
        {
            System.out.print(""+name[i]);
        }
    }
    
}
