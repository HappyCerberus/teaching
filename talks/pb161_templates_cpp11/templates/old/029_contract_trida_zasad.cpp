#include <cstdlib>
#include <new>

template < typename T >
class MallocAllokator
{
	protected:
		T* Create()
		{
			void* buf = malloc(sizeof(T));
			if (!buf) return 0;
			return new(buf) T;
		}
};

template < typename T >
class NewAllokator
{
	protected:
		T* Create()
		{
			return new T;
		}
};

template < typename T >
class PrototypeAllokator
{
	private:
		T * pPrototyp;

	protected:
		
		PrototypeAllokator(T* pObj = 0) : pPrototyp(pObj) {}
		T* GetPrototype() { return pPrototyp; }
		void SetPrototype(T* pObj) { pPrototyp = pObj; }

		T* Create()
		{
			return pPrototyp->clone();
		}
};


#include <vector>
using namespace std;

template < typename T, template<typename> class Zasada >
class TridaZasad : public Zasada<T>
{
	private:
		vector<T*> _holder;
	public:
		T* Vytvor() 
		{ 
			T* tmp = Zasada<T>::Create(); 
			_holder.push_back(tmp);
			return tmp;
		}

		TridaZasad() {}
		TridaZasad(T* prototyp) : Zasada<T>(prototyp) {}

		void ZmenPrototyp(T* objekt)
		{
			Zasada<T>::SetPrototype(objekt);
		}
};


int main()
{
		TridaZasad<int,NewAllokator> x;
		*x.Vytvor() = 10;
}