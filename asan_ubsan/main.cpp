/*
 * Change #if to 1 for ASAN errors
 *               0 for UBSAN errors
 */

int main()
{
#if 1
    // ASAN errors
    auto mem_leak = new int;

    int *array = new int[100];
    delete [] array;
    return array[42];  // BOOM

#else
    // UBSAN errors
    int i = 23;
    i <<= 32;

    int j = 10 / 0;
#endif

    return 0;
}
