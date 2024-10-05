//№1

#include <iostream>
#include <cmath>

/*int main() {
	setlocale(LC_ALL, "RU");
	int X;
	std::cout << "Введите Х:" << std::endl;
	std::cin >> X;
	int Y;
	std::cout << "Введите Y:" << std::endl;
	std::cin >> Y;
	int Z;
	std::cout << "Введите Z:" << std::endl;
	std::cin >> Z;


	if (X%2 != 0 && Y % 2 != 0) {
		std::cout << "condition is true" << std::endl;
	}
	else {
		std::cout << "condition is false" << std::endl;
	}


	if ((X < 20 && Y >= 20) || (X >= 20 && Y < 20)) {
		std::cout << "condition is true" << std::endl;
	}
	else {
		std::cout << "condition is false" << std::endl;
	}


	if (X == 0 || Y == 0) {
		std::cout << "condition is true" << std::endl;
	}
	else {
		std::cout << "condition is false" << std::endl;
	}


	if (X < 0 && Y < 0 && Z < 0) {
		std::cout << "condition is true" << std::endl;
	}
	else {
		std::cout << "condition is false" << std::endl;
	}


	if ((X %5 == 0 && Y %5 != 0 && Z %5 != 0) || (X % 5 != 0 && Y % 5 == 0 && Z % 5 != 0) || (X % 5 != 0 && Y % 5 != 0 && Z % 5 == 0)) {
		std::cout << "condition is true" << std::endl;
	}
	else {
		std::cout << "condition is false" << std::endl;
	}


	if (X > 100 || Y >100 || Z > 100) {
		std::cout << "condition is true" << std::endl;
	}
	else {
		std::cout << "condition is false" << std::endl;
	}


	return 0;
}*/


//№2


/*int main() {
	setlocale(LC_ALL, "RU");
	using int1 = unsigned int;
	std::pair <int1, int1> positionA;
	std::cin >> positionA.first >> positionA.second;


    using int2 = unsigned int;
	std::pair <int2, int2> positionB;
	std::cin >> positionB.first >> positionB.second;


	//1
	bool flag1 = false;
	if (positionA.first == positionB.first || positionA.second == positionB.second) {
		std::cout << "Угрожает" << std::endl;
		flag1 = true;
	}
	else {
		std::cout << "Не угрожает" << std::endl;
	}




	//2
	int k1 = 0;
	int k2 = 0;

	if (positionB.first >= positionA.first) {
		k1 = 1;
	}
	else {
		k1 = -1;
	}
	if (positionB.second >= positionA.second) {
		k2 = 1;
	}
	else {
		k2 = -1;
	}
	
	bool flag2 = true;
	int y = int(positionA.second);
	for (int x = positionA.first; x < 9 && x >0; x += k1 ) {
		if (x == positionB.first && y == positionB.second) {
			std::cout << "Угрожает" << std::endl;
			flag2 = false;
			break;
		}
		y += k2;
		
	}

	if (flag2) {
		std::cout << "Не угрожает" << std::endl;
	}

	//3
	if ((positionA.first == positionB.first && positionB.second == positionA.second + 1) || (positionA.first + 1 == positionB.first && positionB.second == positionA.second + 1) 
		|| (positionA.first == positionB.first + 1 && positionB.second == positionA.second + 1)||(positionA.first -1 == positionB.first && positionB.second == positionA.second)
		|| (positionA.first + 1 == positionB.first && positionB.second == positionA.second) || (positionA.first  == positionB.first && positionB.second == positionA.second-1)
		|| (positionA.first -1  == positionB.first && positionB.second == positionA.second-1) || (positionA.first + 1 == positionB.first && positionB.second == positionA.second-1)) {
		std::cout << "Угрожает" << std::endl;
	}
	else {
		std::cout << "Не угрожает" << std::endl;
	}

	
	
	//4
	if (flag1 == true || flag2 == false) {
		std::cout << "Угрожает" << std::endl;
	}
	else {
		std::cout << "Не угрожает" << std::endl;
	}

	//5
	if ((positionA.first == positionB.first && positionB.second == positionA.second + 1) || (positionA.first + 1 == positionB.first && positionB.second == positionA.second + 1) || (positionA.first == positionB.first +1 && positionB.second == positionA.second + 1)) {
		std::cout << "Угрожает" << std::endl;
	}
	else {
		std::cout << "Не угрожает" << std::endl;
	}






	return 0;
}*/







//№3

/*int main() {
	setlocale(LC_ALL, "RU");
	int i = 1;
	int n = 1;
	for (i; i < 10; i++) {
		n = i * 7;
		std::cout << i << "x" << 7 << "=" << n << std::endl;

	}


	int j = 1;
	int N = 1;
	int k;
	std::cin >> k;
	for (j; j < 10; j++) {
		N = j * k;
		std::cout << j << "x" << k << "=" << j << "*" << N << std::endl;

	}

	return 0;
}*/



//№4


/*int main() {


	int p1 = 1;
	for (int i = 8; i < 16; ++i) {
		p1 = p1 * i;
	}
	std::cout << p1 << std::endl;

	long long int p2 = 1;
	int A;
	std::cin >> A;
	for (A; A < 21; A++) {
		p2 = p2 * A;
	}
	std::cout << p2 << std::endl;


	long int p3 = 1;
	int b;
	std::cin >> b;
	for (int j = 1; j < b + 1; ++j) {
		p3 = p3 * j;
	}
	std::cout << p3 << std::endl;

	long int p4 = 1;
	int A1;
	std::cout << "A1:" << std::endl;
	std::cin >> A1;
	int B1;
	std::cout << "B1:" << std::endl;
	std::cin >> B1;
	for (A1; A1 < B1 + 1; A1++) {
		p4 = p4 * A1;
	}
	std::cout << p4 << std::endl;

	return 0;
}*/