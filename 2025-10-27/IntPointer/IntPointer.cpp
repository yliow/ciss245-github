IntPointer::IntPointer(int i)
    : p_(new int)
{
    *p_ = i;
}
