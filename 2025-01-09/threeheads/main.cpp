#include <iostream>

char cointoss()
{
    // if (rand() % 2 == 0)
    // {
    //     return 'H';
    // }
    // else
    // {
    //     return 'T';
    // }
    return (rand() % 2 ? 'H' : 'T');
}

void threeheads()
{
    int c = 0; // or num_cons_head
    while (1)
    {
        char toss = cointoss();
        std::cout << toss << ' ';
        // if (toss == 'H')
        // {
        //     ++c;
        // }
        // else
        // {
        //     c = 0;
        // }
        c = (toss == 'H' ? c + 1 : 0)
        if (c == 3) break;
    }
    std::cout << '\n';
    return;
}

int main()
{
    srand((unsigned int) time(NULL));
    //std::cout << cointoss() << '\n';
    
    //threeheads();

    int f0_n, f0_d;
    int f1_n, f1_d;
    int f2_n, f2_d;
    std::cout << f0_n << f0_d << f1_n << f1_d;
    // addfraction(f2_n, f2_d, f0_n, f0_d, f1_n, f1_d);
    return 0;
}
