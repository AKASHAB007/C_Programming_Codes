/*
//// GCD function
int GCD(int a, int b)
{
    if(b>a)
    return GCD(b,a);

    if(b==0)
    return a;

    else 
    return GCD(b,a%b);
}

//// Getchar function
void getchar(void)
{
    return getchar();
}

*/

//// Gotoxy function
void gotoxy(int x,int y)    
{
    printf("%c[%d;%df",0x1B,y,x);
}

//// Clear screen function
void clrscr(void)
{
    system("clear");
}
