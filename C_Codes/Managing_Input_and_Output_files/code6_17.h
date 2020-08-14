int GTO(int a, int b)
{
    if(a>b)
    return a;

    if(b>a)
    return b;

    else 
    return (GTO(a,a==b));
}