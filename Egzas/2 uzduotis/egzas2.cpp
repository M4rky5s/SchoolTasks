// your are allowed to modify the code inside the class,
// you are NOT allowed to change anything outside of it

#include <set>

class Object
{
    // all your code goes here
public:
    Object &a;
    Object() : a(*this)
    {
    }

    static int b()
    {
        return 8;
    }

    Object operator()(const Object &obj)
    {
        return *this;
    }

    Object &operator-(const int g)
    {
        return *this;
    }

    Object &operator++()
    {
        return *this;
    }

    bool operator<(const Object &object) const
    {
        return true;
    }
};

template<typename Object>
void test()
{
    Object a, b = a(a) - (++a).b();
    std::set<Object> s;
    s.insert(a);
    if(b.a.b() == 8)
    {
        return;
    }
}

int main(int argc, char **argv)
{

    test<Object>();
    return 0;
}
