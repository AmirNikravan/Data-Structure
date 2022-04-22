#include <iostream>
auto product(int x, int y) {
	if (y == 0)
		return 0;
	return (x + product(x, y - 1));
}
int main() {
	std::cout << "25 * 4 = " << product(25, 4);
	return 0;
}
