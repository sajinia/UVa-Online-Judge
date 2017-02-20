/** Author: Sharmin Akter **/
/** Created at: 10/27/2012 5:01:44 AM **/

import java.util.Scanner;
import java.math.BigInteger;

class WhoSaidCrisis_11448{

    public static void crisis(BigInteger a, BigInteger b){

	   System.out.println( a.subtract(b) );
    }

    public static void main( String []Jinia ){

	   BigInteger a,b;
	   int i,t;

	   Scanner scan = new Scanner( System.in );

	   t = scan.nextInt();

	   for( i=1;i<=t;i++ ){

		  a = scan.nextBigInteger();
		  b = scan.nextBigInteger();

		  crisis( a,b );
	   }
    }
}