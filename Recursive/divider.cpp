#include <iostream>
auto divider(int x, int y) {
	if (x < y)
		return 0;
	return (1 + divider(x - y, y));
}
int main() {
	std::cout << "25 / 4 = " << divider(25, 4);
	return 0;
}