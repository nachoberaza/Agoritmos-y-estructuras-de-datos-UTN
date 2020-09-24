#include <iostream>
#include <string.h>

using namespace std;

/* Prototypes */
template<class type> int printEndline();
template<class type> int showMessage(type message, int option);
/* ********** */


template<class type> int showMessage(type message, int option) {
	string output = message;
	char complement;

	switch (option) {

	/* Just endline */
	case 0: {
		complement = '\n';
		break;
	}

		/* Just tab */
	case 1: {
		complement = '\t';
		break;
	}

	}

	cout << message << complement;

	return 0;;
}

int printEndline(){
	cout<<'\n';
	return 0;
}
