/** Author: Sharmin Akter **/
/** Created at: 10/27/2012 5:03:52 AM **/

import java.util.*;
import java.math.*;

class NumericalSurprises_1226{

	public static void main(String[] jinia){

		Scanner scan=new Scanner(System.in);

		BigInteger b,d,m;
		int i,t;

		t=scan.nextInt();

		for(i=1;i<=t;i++){

			d=scan.nextBigInteger();
			b=scan.nextBigInteger();

			m=b.mod(d);

			System.out.println(m);
		}
	}
}