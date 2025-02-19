#include <iostream>

/* vectors <2, 3>

     ^   <2, 3>
    /
   /
    
 */

// vec2i library
// struct vec2i
// {
//     int x;
//     int y;
// };
// vec2i get_vec2i(int x, int y)
// {
//     vec2i ret = {x, y};
//     return ret;
// }
// std::ostream & operator<<(std::ostream & cout, const vec2i & v)
// {
//     cout << '<' << v.x << ", " << v.y << '>';
//     return cout;
// }
// // +=, +, -, *, etc.
//
// // vec2f library
// struct vec2f
// {
//     float x;
//     float y;
// };
// vec2f get_vec2f(float x, float y)
// {
//     vec2f ret = {x, y};
//     return ret;
// }
// std::ostream & operator<<(std::ostream & cout, const vec2f & v)
// {
//     cout << '<' << v.x << ", " << v.y << '>';
//     return cout;
// }
// // +=, +, -, *, etc.
// struct vec2d ... vec3d, vec3f, vec4d, vec4f
// {
//     double x, y;
// }

template < typename T >
struct vec2
{
    T x;
    T y;
};

template < typename T >
vec2< T > get_vec2(T x, T y)
{
    vec2< T > ret = {x, y};
    return ret;
}

template < typename T >
std::ostream & operator<<(std::ostream & cout, const vec2< T > & v)
{
    cout << '<' << v.x << ", " << v.y << '>';
    return cout;
}

int main()
{
    vec2< int > v = get_vec2< int >(2, 3);
    std::cout << "v: " << v << '\n';

    vec2< float > u = get_vec2< float >(2.1f, 3.5f);
    std::cout << "u: " << u << '\n';

    return 0;
}
