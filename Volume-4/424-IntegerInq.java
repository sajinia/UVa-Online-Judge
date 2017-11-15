/** Author: Sharmin Akter **/
/** Created at: 10/27/2012 5:05:02 AM **/

import java.util.*;
import java.math.*;

class IntegerInq_424{

	public static void main(String[] jinia){

		Scanner faiem=new Scanner(System.in);

		BigInteger num;
		BigInteger sum=new BigInteger(""+0);

		while(faiem.hasNextBigInteger()){

			num=faiem.nextBigInteger();

			if((""+num).compareTo("0")==0)
				break;
			sum=sum.add(num);
		}
		System.out.println(sum);
	}
}