template <typename T>
struct counter
{
    counter()
    {
        ++objects_created;
        ++objects_alive;
    }
 
    virtual ~counter()
    {
        --objects_alive;
    }
    static int objects_created;
    static int objects_alive;
};

template <typename T> int counter<T>::objects_created( 0 );
template <typename T> int counter<T>::objects_alive( 0 );
 
class X : counter<X>
{
    // ...
};
 
class Y : counter<Y>
{
    // ...
};

int main()
{
	X x1, x2, x3;
	Y y1, y2;
	
	return 0;
}
