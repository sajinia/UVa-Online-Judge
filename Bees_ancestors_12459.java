/** Author: Sharmin Akter **/
/** Created at: 10/27/2012 4:58:52 AM **/

import java.util.*;
import java.math.*;

class Bees_ancestors_12459{

	public static void main(String[] args){

		int I;
		BigInteger[] fib=new BigInteger[10000];

		fib[0]=BigInteger.ONE;
		fib[1]=BigInteger.ONE;

		for(I=2;I<100;I++)
			fib[I]=fib[I-2].add(fib[I-1]);

		Scanner scan=new Scanner(System.in);

		while(scan.hasNextInt()){

			I=scan.nextInt();

			if((""+I).compareTo("0")==0)
				break;

			System.out.println(fib[I]);
		}
	}
}
