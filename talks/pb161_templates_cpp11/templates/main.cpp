template < bool x >
class interni {};

template < >
class interni<true> { };



template <typename T>
class X : public interni<is_base_of<T,X>>
{

};





