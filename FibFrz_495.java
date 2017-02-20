/** Author: Sharmin Akter **/
/** Created at: 10/27/2012 5:08:56 AM **/

import java.util.*;
import java.math.*;

class FibFrz_495{

	public static void main(String[] jinia){

		int I;
		BigInteger[] fib=new BigInteger[5001];

		fib[0]=BigInteger.ZERO;
		fib[1]=BigInteger.ONE;

		for(I=2;I<5001;I++)
			fib[I]=fib[I-2].add(fib[I-1]);

		Scanner faiem=new Scanner(System.in);

		while(faiem.hasNextInt()){

			I=faiem.nextInt();

			System.out.println("The Fibonacci number for "+I+ " is "+fib[I]);
		}
	}
}
