/** Author: Sharmin Akter **/
/** Created at: 12/5/2013 2:40:58 PM **/

#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<cctype>
#include<list>
#include<set>
#include<stack>
#include<queue>
#include<sstream>
#include<bitset>
#include<utility>
#include<algorithm>
#include<cstdlib>
#include<iostream>
using namespace std;

#define sc scanf
#define sc1(a) scanf( "%ld", &a )
#define pr printf
#define pr1(a) printf( "%ld\n", a )
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define fr( i, n ) for( __typeof(n) i=0; i<n; i++ )
#define rv( i, n ) for( __typeof(n) i=n-1; i>=0; i-- )
#define fo( i, m, n ) for( __typeof(n) i=m; i<=n; i++ )
#define ms( a, val ) memset( a, val, sizeof(a) )
#define pb push_back
#define inf (1<<30)
#define eps 1e-9
#define pi acos(-1.0)
#define re return
#define g() getchar()
#define MAX 1010
#define ll long long
#define IN freopen("in.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

ll gcd( ll a, ll b )
{
    return ( b == 0 ) ? a : gcd( b, a % b );
}
ll lcm( ll a, ll b )
{
    return ( ( a*b )/( gcd( a, b ) ) );
}
int main()
{
    //IN;
    //OUT;
    long i, j = 0, n, x, y, o;

    while( sc1(n) == 1 )
    {
        if( !n )
            pr( "0\n" );
        else
        {
            o = x = 1;

            while( x )
            {
                if( n>x )
                {
                    x = ( x * 10 ) + 1;
                    o++;
                }
                x %= n;
                if( !x )
                    break;
            }
            //pr("%ld-> ", ++j);
            pr1( o );
        }
    }
return 0;
}
