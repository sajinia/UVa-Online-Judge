/** Author: Sharmin Akter **/
/** Created at: 10/27/2012 5:06:16 AM **/

import java.util.*;
import java.math.*;

class FibNums_10579{

	public static void main(String[] jinia){

		int I;
		BigInteger[] fib=new BigInteger[10000];

		fib[1]=BigInteger.ONE;
		fib[2]=BigInteger.ONE;

		for(I=3;I<10000;I++)
			fib[I]=fib[I-2].add(fib[I-1]);

		Scanner faiem=new Scanner(System.in);

		while(faiem.hasNextInt()){

			I=faiem.nextInt();

			System.out.println(fib[I]);
		}
	}
}
