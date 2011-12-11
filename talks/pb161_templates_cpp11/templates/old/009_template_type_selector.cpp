template <bool podminka, typename T1, typename T2>
struct TypeSelector { typedef T2 Result; };

template <typename T1, typename T2>
struct TypeSelector<false,T1,T2> { typedef T2 Result; };

template <typename T1, typename T2>
struct TypeSelector<true,T1,T2> { typedef T1 Result; };

int main()
{	
        TypeSelector<(sizeof(int)>4),int,long int>::Result promenna;
	promenna = 10;
}
