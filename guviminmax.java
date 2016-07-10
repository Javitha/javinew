import java.util.*;
public class javi
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String a[]=s.split(" ");
        int k=a.length;
        Integer array[]=new Integer[k];
        for(int i=0;i<k;i++)
        {
            array[i]=Integer.parseInt(a[i]);
            
        }
        int min=array[0];
        int max=0;
        
        for(int i=0;i<k;i++)
        {
            if(array[i]>max)
                max=array[i];
            if(array[i]<min)
                min=array[i];
            
            
        }
     
     System.out.println(max);
     System.out.println("\n");
     System.out.println(min);
     
      
    }
}
