// your are allowed to modify the code inside the class,
// you are NOT allowed to change anything outside of it

class Object
{
    // all your code goes here
public:
    Object(char c)
    {
    }

    Object()
    {
    }
    static int k()
    {
        return 1;
    }

    static int l()
    {
        return 1;
    }

    static int m()
    {
        return 1;
    }
};


template<typename Object>
void test()
{
    const Object n('2');
    if(Object::k() == n.l())
    {
        Object m;
        if(m.l() == m.m())
            return;
    }
}

int main(int argc, char **argv)
{
    test<Object>();
    return 0;
}
