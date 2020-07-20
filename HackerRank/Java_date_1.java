/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrank;
import java.util.Date;
/**
 *
 * @author Fenil
 */
public class Java_date_1 {
    public static void main(String []args){
        
        Date d=new Date();
        String str1=String.format("Current Date:  %td",d);
        String str=String.format("Current Full Date: %tc",d);
        String str2=String.format("Current Day: %<tY ",d);
        System.out.printf("[1]td=  "+str1+"[2]tc   "+str+"[3]   tE"+str2);
        
    }
}
