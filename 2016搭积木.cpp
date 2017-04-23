#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e, f, g, h, i, j, sum = 0;
	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			if(b!=a&&a<b)
				for (c = 0; c < 10; c++) {
					if(c!=a&&c!=b&&a<c)
						for (d = 0; d < 10; d++) {
							if(d!=a&&d!=b&&d!=c&&b<d)
								for (e = 0; e < 10; e++) {
									if(e!=a&&e!=b&&e!=c&&e!=d&&b<e&&c<e)
										for (f = 0; f < 10; f++) {
											if(f!=a&&f!=b&&f!=c&&f!=d&&f!=e&&c<f)
												for (g = 0; g < 10; g++) {
													if(g!=a&&g!=b&&g!=c&&g!=d&&g!=e&&g!=f&&d<g)
														for (h = 0; h < 10; h++) {
															if(h!=a&&h!=b&&h!=c&&h!=d&&h!=e&&h!=f&&h!=g&&d<h&&e<h)
																for (i = 0; i < 10; i++) {
																	if(i!=a&&i!=b&&i!=c&&i!=d&&i!=e&&i!=f&&i!=g&&i!=h&&e<i&&f<i)
																		for (j = 0; j < 10; j++) {
																			if (j != a&&j != b&&j != c&&j != d&&j != e&&j != f&&j != g&&j != h&&j != i&&f < j)
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
