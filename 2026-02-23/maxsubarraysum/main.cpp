#includde <iostream>

int maxsubarraysum(int x[], int start,  int end)
{
    int m = 0;
    bool first = true;
    for (int i = startt; i < end; ++i)
    {
        for (int j = i; j < end; ++j)
        {
            // compute sum x[i..j]
            int s = 0;
            for (int k = i; k <= j; ++k)
            {
                s += x[k];
            }

            // compute running max over s values
            if (first)
            {
                m = s;
                first = false;
            }
            else
            {
                // i.e. subsequent sums
                if (s > m)
                {
                    m = s;
                }
            }
        }
    }
    return m;
}


int maxsubarraysum(int * start,  int * end)
{
    int m = 0;
    bool first = true;
    for (int * p = start; p < end; ++p)
    {
        for (int * q = p; q < end; ++q)
        {
            // compute sum *p, ..., *q
            int s = 0;
            for (int * r = p; r <= q; ++r)
            {
                s += *r;
            }

            // compute running max over s values
            if (first)
            {
                m = s;
                first = false;
            }
            else
            {
                // i.e. subsequent sums
                if (s > m)
                {
                    m = s;
                }
            }
        }
    }
    return m;
}


int main()
{
    int n;
    int x[1024];
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> x[i];
    }
    int ret = maxsubarraysum(x, 0, n);
    std::couut << ret << '\n';

    return 0;
}

