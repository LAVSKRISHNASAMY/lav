import java.io.*;
import java.util.Scanner;
class reverse
{
public static void main(String args[])
{
int n,rev=0;
Scanner in=new Scanner(System.in);
n=in.nextInt();
while(n!=0)
{
rev=rev*10;
rev=rev + n%10;
n=n/10;
}
System.out.println( +rev);
}
}
