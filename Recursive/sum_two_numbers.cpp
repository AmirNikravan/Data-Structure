#include <iostream>
auto sum(int x, int y) {
	if (y == 0)
		return x;
	return (1 + sum(x, y - 1));
}
int main() {
	std::cout << "25 + 4 = " << sum(25, 4);
	return 0;
}
