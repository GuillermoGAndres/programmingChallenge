 
import java.util.*;
import java.lang.*;
import java.io.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		
		while(in.hasNext()){
			
			int N = in.nextInt(), sum = N*(N-1)/2;
			if(N>0){
				int n = in.nextInt();
				for(int d, i=1; i<N; i++, sum-=d){
					d = Math.abs(n-(n=in.nextInt()));
					d = d==0? -1<<20 : d;
				}
			}
			
			System.out.println(sum==0 ? "Jolly" : "Not jolly");
		}
	}
}