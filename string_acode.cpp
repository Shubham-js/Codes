// #include <bits/stdc++.h>
// using namespace std;
// void generate_code(char *in, char *out, int i, int j)
// {
// 	if (in[i] == '\0')
// 	{
// 		out[j] = '\0';
// 		cout << out << endl;
// 		return;
// 	}
// 	//one digit case
// 	int digit = in[i] - '0';
// 	if (digit != 0)
// 	{
// 		char ch = digit + 'A' - 1;
// 		out[j] = ch;
// 		generate_code(in, out, i + 1, j + 1);

// 	}
// 	else
// 	{
// 		generate_code(in, out, i + 1, j);
// 	}

// 	//double digit;
// 	if (in[i + 1] != '\0')
// 	{
// 		int sec = in[i + 1] - '0';
// 		int no = digit * 10 + sec;


// 		if (no <= 26)
// 		{
// 			char dd = no + 'A' - 1;

// 			out[j] = dd;
// 		}
// 		generate_code(in, out, i + 2, j + 1);

// 	}
// 	return;



// }
// int main() {
// 	char a[100], out[100];
// 	cin >> a;
// 	generate_code(a, out, 0, 0);
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void generate_string(char* in, char* out, int i, int j) {
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	int digit = in[i] - '0';
	if (digit == 0) {
		generate_string(in, out, i + 1, j);
	} else {
		char ch = digit + 'A' - 1;
		out[j] = ch;
		generate_string(in, out, i + 1, j + 1);
	}
	if (in[i + 1] != '\0') {
		int digit = in[i] - '0';
		int secondDigit =  in[i + 1] - '0';
		int no = digit * 10 + secondDigit;
		if (no < 27) {
			char ch = no + 'A' - 1;
			out[j] = ch;
			generate_string(in, out, i + 2, j + 1);
		}
	}
}

int main(int argc, char const *argv[])
{
	char in[100], out[100];
	cin >> in;
	generate_string(in, out, 0, 0);
	return 0;
}