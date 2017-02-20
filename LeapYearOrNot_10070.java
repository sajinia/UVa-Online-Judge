/** Author: Sharmin Akter **/
/** Created at: 10/27/2012 5:14:12 AM **/

import java.util.*;
import java.math.*;

class LeapYearOrNot_10070{

	public static void main(String[] args){

		Scanner scan=new Scanner(System.in);

		int I=0;
		BigInteger y,r4,r15,r55,r100,r400;
		boolean l,o;

		BigInteger fr=new BigInteger(""+4);
		BigInteger fn=new BigInteger(""+15);
		BigInteger ff=new BigInteger(""+55);
		BigInteger hd=new BigInteger(""+100);
		BigInteger fh=new BigInteger(""+400);

		while(scan.hasNextBigInteger()){

			l=false;
			o=true;

			if(I!=0)
				System.out.println();

			y=scan.nextBigInteger();

			r4=y.mod(fr);
			r15=y.mod(fn);
			r55=y.mod(ff);
			r100=y.mod(hd);
			r400=y.mod(fh);

			if(((""+r400).compareTo("0")==0 || ((""+r4).compareTo("0")==0) && (""+r100).compareTo("0")!=0))
			{
				System.out.println("This is leap year.");
				l=true;
				o=false;
			}

			if((""+r15).compareTo("0")==0)
			{
				System.out.println("This is huluculu festival year.");
				o=false;
			}

			if(l==true && (""+r55).compareTo("0")==0)
			{
				System.out.println("This is bulukulu festival year.");
				o=false;
			}

			if(o==true)
				System.out.println("This is an ordinary year.");

			I++;
		}

	}
}