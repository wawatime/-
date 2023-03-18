#include <bits/stdc++.h>
using namespace std;

char sa [110], sb[110];
int a[110], b[110], c[110], lena, lenb, lent;

int main () {
	scanf("%s", sa + 1);
	scanf("%s", sb + 1);
	lena = strlen(sa + 1), lenb = strlen(sb + 1);
	if (lena > lenb)
		lent = lena;
	else
		lent = lenb;
	for (int i = 1; i <= lena; i++)
		a[i] = sa[lena - i + 1] - '0';
	for (int i = 1; i <= lenb; i++)
		b[i] = sb[lenb - i + 1] - '0';
	c[1] = a[1] + b[1];
	for (int i = 1; i <= lent; i++) {
		c[i + 1] = a[i + 1] + b[i + 1] + c[i] / 10;
		c[i] %= 10;
	}
	if (c[lent + 1] > 0)
		lent += 1;
	for (int i = lent; i >= 1; i--)
		printf("%d", c[i]);
    return 0;
}
