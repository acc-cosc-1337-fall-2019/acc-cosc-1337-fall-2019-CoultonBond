#include "vector.h"
#include <iostream>

using std::cout;

//Vector get_vector();

int main()
{
	Vector<double> v(1);
	v[0] = 2.5;

	cout << v[0];

	//v = get_vector();

	return 0;
}

/*Vector get_vector()
{
	Vector v(3);

	return v;
}
*/