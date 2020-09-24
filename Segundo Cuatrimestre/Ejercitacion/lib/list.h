#include "./IO.h"

/* Prototypes */
struct Node;
struct Alumn;
struct Califications;
template<class type> int addAtTheEnd(type *&first);
template<class type> int addAtTheStart(type *&first);
/* ********** */

struct Node {
	Alumn alumn;
	Node *next;
};

struct Alumn {
	string name;
	string lastname;
	Califications califications;
};

struct Califications {
	unsigned Algoritms;
	unsigned Math_Analysis;
	unsigned Geometry;
	unsigned Discreet_Math;
};

