// #include <iostream>
// using namespace std;

// bool sieve[100000001];
// int main() {
// 	sieve[0] = sieve[1] = 1;
// 	for (int i = 2; i * i <= 100000000; i++)
// 		if (!sieve[i])
// 			for (int j = i * i; j <= 100000000; j += i)
// 				sieve[j] = 1;
// 	int N;
// 	cin >> N;
// 	int counter = 1;
// 	while (N && counter < 100000000)
// 	{
// 		counter++;
// 		if (!sieve[counter])
// 			N--;
// 	}
// 	cout << counter;
// }





//method 2




// #include <bits/stdc++.h>
// using namespace std;
//  int main(int argc, char const *argv[])
//  {
//  	int n,c=1,num=1,i;
//  	bool flag;
//  	cin>>n;
//  	if(n==1){
//  		cout<<2;
//  		return 0;
//  	}
//  	while(c<n){
//  		num+=2;
//  		flag=true;
//  		for ( i = 3; i <= sqrt(num); i++)
//  		{
//  			if(num%i==0){
//  				flag=false;
//  				break;
//  				}
//  			}

//  			if(flag)
//  				c++;


//  	}
//  	cout<<num;
//  	return 0;
//  }