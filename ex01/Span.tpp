template <typename T>
void Span::addNumber(T begin, T end)
{
    while(begin != end)
    {
        addNumber(*begin);
        ++begin;
    }
}