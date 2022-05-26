int gcd(int x,int y)
{
  	if(!y) return x;
	gcd(y,x%y);
}