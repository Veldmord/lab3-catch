#include <prime.hpp>

bool is_prime(unsigned int number) {
	if (number < 2)
		return false;

	unsigned int upper_bound = sqrt(number);

	for (int i = 2; i <= upper_bound; i++) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}