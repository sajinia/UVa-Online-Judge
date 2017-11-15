/** Author: Sharmin Akter **/
/** Created at: 10/27/2012 5:03:14 AM **/

import java.util.*;
import java.math.*;

class MultipleBy17_11879{

	public static void main(String[] jinia){

		Scanner faiem=new Scanner(System.in);

		BigInteger num,r,m,rem;
		BigInteger ten=new BigInteger(""+10);
		BigInteger mul=new BigInteger(""+5);
		BigInteger st=new BigInteger(""+17);


		while(faiem.hasNextBigInteger()){

			num=faiem.nextBigInteger();

			if((""+num).compareTo("0")==0)
				break;
			r=num.mod(ten);
			num=num.divide(ten);
			m=r.multiply(mul);
			num=num.subtract(m);
			rem=num.mod(st);

			if((""+rem).compareTo("0")==0)
				System.out.println(1);
			else
				System.out.println(0);
		}
	}
}