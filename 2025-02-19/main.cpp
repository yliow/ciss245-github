#include <iostream>

/* vectors <2, 3>

     ^   <2, 3>
    /
   /
    
 */

// vec2i library
struct vec2i
{
    int x;
    int y;
};
vec2i get_vec2i(int x, int y)
{
    vec2i ret = {x, y};
    return ret;
}
std::ostream & operator<<(std::ostream & cout, const vec2i & v)
{
    cout << '<' << v.x << ", " << v.y << '>';
    return cout;
}


// vec2f library
struct vec2f
{
    float x;
    float y;
};
vec2f get_vec2f(float x, float y)
{
    vec2f ret = {x, y};
    return ret;
}
std::ostream & operator<<(std::ostream & cout, const vec2f & v)
{
    cout << '<' << v.x << ", " << v.y << '>';
    return cout;
}


int main()
{
    vec2i v = get_vec2i(2, 3);
    std::cout << "v: " << v << '\n';

    vec2f u = get_vec2f(2.1f, 3.5f);
    std::cout << "u: " << u << '\n';

    return 0;
}
