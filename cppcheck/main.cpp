void f(int *p)
{
    *p = 3;
}

int main()
{
    char a[10];
    a[10] = 0;

    int *p = 0;
    f(p);

    int x = 10 / 0;

    return 0;
}