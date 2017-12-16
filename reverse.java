import java.io.*;
import java.util.*;
class reverse
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
String s=sc.nextLine();
String arr[]=s.split(" ");
int l=arr.length;
for(int i=0;i<l;i++)
{
	if((i%2)==0)
	{
		arr[i]=arr[i].reverse();
		
	}
}
for(int i=0;i<l;i++)
	System.out.println(arr[i]+" ");
}
}