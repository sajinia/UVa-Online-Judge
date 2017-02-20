/** Author: Sharmin Akter **/
/** Created at: 10/27/2012 4:57:10 AM **/

import java.util.*;
import java.math.*;

class Product_10106{

	public static void main(String[] jinia){

		Scanner faiem=new Scanner(System.in);

		BigInteger x,y,product;

		while(faiem.hasNextBigInteger()){

			x=faiem.nextBigInteger();
			y=faiem.nextBigInteger();

			product=x.multiply(y);

			System.out.println(product);
		}

	}
}