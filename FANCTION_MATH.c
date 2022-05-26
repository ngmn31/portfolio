int gcd(int x,int y)
{
  	if(!y) return x;
	gcd(y,x%y);
}

int lcm(int x,int y)
{
	return x*(y/gcd(x,y));
}