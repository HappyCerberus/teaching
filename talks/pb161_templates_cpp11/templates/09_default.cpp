class PrvniTrida {};
class DruhaTrida {};
class TretiTrida {};

template < class Prvni, class Druhy = DruhaTrida, class Treti = TretiTrida >
class NaseTrida {};

int main()
{
	NaseTrida<PrvniTrida> ok;
	// NaseTrida<PrvniTrida,DruhaTrida,TretiTrida>

	NaseTrida<PrvniTrida, PrvniTrida> taky_ok;
	// NaseTrida<PrvniTrida,PrvniTrida,TretiTrida>

	NaseTrida<PrvniTrida, PrvniTrida, PrvniTrida> neni_problem;
	// NaseTrida<PrvniTrida,PrvniTrida,PrvniTrida>
}
