//注意：数字类型！！仔细观察例子，是否有不能整除的情况！！ 用‘！=’不等于 !!
#include <iostream>
using namespace std;
int main() {
	double a, b, c, d, e, f, g, h, i,sum=0; //double!!!!!!!
	for (a = 1; a <= 9; a++) {
		for (b = 1; b <= 9; b++) {
			if (b != a)
				for (c = 1; c <= 9; c++) {
					if (c != a&&c != b)
						for (d = 1; d <= 9; d++) {
							if (d != a&&d != b&&d != c)
								for (e = 1; e <= 9; e++) {
									if (e != a&&e != b&&e != c&&e != d)
										for (f = 1; f <= 9; f++) {
											if (f != a&&f != b&&f != c&&f != d&&f != e)
												for (g = 1; g <= 9; g++) {
													if (g != a&&g != b&&g != c&&g != d&&g != e&&g != f)
														for (h = 1; h <= 9; h++) {
															if (h != a&&h != b&&h != c&&h != d&&h != e&&h != f&&h != g)
																for (i = 1; i <= 9; i++) {
																	if (i != a&&i != b&&i != c&&i != d&&i != e&&i != f&&i != g&&i != h) {
																		if (a + (b / c) + ((d * 100 + e * 10 + f) / (g * 100 + h * 10 + i)) == 10)
																			sum++;
																	}
																}
														}
												}
										}
								}
						}
				}
		}
	}
	cout << sum << endl;
	return 0;
}

