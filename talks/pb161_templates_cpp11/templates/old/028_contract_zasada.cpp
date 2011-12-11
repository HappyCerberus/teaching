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
