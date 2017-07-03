int* f(int *x) {
	(*x)++;
	return x;
}

int& g(int& x) {
	x++;
	return x;
}

int& h() {
	int q = 2;
	//return q;  // Doesn't work fine
	static int a = 3;
	return a;
}

int main() {
	int a = 10;
	f(&a);
	g(a);
	int retQ = h();
}