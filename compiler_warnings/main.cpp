/*
 * Commend out any pragma to see corresponding compiler error
 * */


int main()
{
    // -Wunused-variable
#pragma GCC diagnostic ignored "-Wunused-variable"
    {
        int unused = 0;
    }

    // -Waddress
#pragma GCC diagnostic ignored "-Waddress"
    {
        void func(void);
        if (func) {}
    }

    // -Wunused-but-set-variable
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
    {
        int i = 0;
        i = 42;
    }

    // -Wsign-compare
#pragma GCC diagnostic ignored "-Wsign-compare"
    {
        int signed_var = -3;
        unsigned unsigned_var = 10;
        if (signed_var == unsigned_var) {}
    }

    // -Wsign-conversion
#pragma GCC diagnostic ignored "-Wsign-conversion"
    {
        int signed_var = -3;
        unsigned unsigned_var = signed_var;
    }

    // -Wmissing-field-initializers
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
    {
        struct s { int f, g, h; };
        struct s x = { 3, 4 };
    }
    return 0;
}
