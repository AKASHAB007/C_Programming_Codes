int GCD(int a, int b)
{
    if(b>a)
    return GCD(b,a);

    if(b==0)
    return a;

    else 
    return GCD(b,a%b);
}
