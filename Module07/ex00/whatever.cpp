#include<iostream>
#include<string>

template <typename T>void swap(T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename T> T min(T &x, T&y)
{
	if (x == y)
		return (y);
	else if (x < y)
		return (x);
	else 
		return (y);
}

template <typename T> T max(T &x, T&y)
{
	return (y >= x ? y : x);
}

int main()
{

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "\n\n";

	int aa = 543 ;
	int bb = 998333333 ;
	int cc = 90;
	int dd = 90;
	float x = 3.89;
	float y = 10.7;
	float w = 80.35;
	float z = 80.35;
	double i = -368561316;
	double j = 5.23;
	double k = -99998.32;
	double l = -99998.32;
	std::string s1 = "hello";
	std::string s2 = "coucou";
	std::string s3 = "";

	std::cout << "============== ~ SWAP ~ ==============\n" << std::endl;
	std::cout << "INT" << std::endl;
	std::cout << "Before swap aa: "<< aa <<" bb: "<< b<< std::endl;
	swap(a, b);
	std::cout << "After swap aa: "<< aa <<" bb: "<< b << std::endl;

	std::cout << "\nFLOAT" << std::endl;
	std::cout << "Before swap x: "<< x <<" y: "<< y << std::endl;
	swap(x, y);
	std::cout << "After swap x: " << x <<" y: "<< y << std::endl;

	std::cout << "\nDOUBLE" << std::endl;
	std::cout << "Before swap i: "<< i <<" j: "<< j << std::endl;
	swap(i, j);
	std::cout << "After swap i: " << i <<" j: "<< j << std::endl;

	std::cout << "\nSTRING" << std::endl;
	std::cout << "Before swap s1: "<< s1 << " s2: " << s2 << std::endl;
	swap(s1, s2);
	std::cout << "After swap s1: " << s1 << " s2: " << s2 << std::endl;


	std::cout << "\n\n============== ~ MIN ~ ==============\n" << std::endl;
	std::cout << "INT" << std::endl;
	std::cout << "aa = "<< aa <<" ~ bb = "<< bb << std::endl;
	std::cout << "MIN = " << min(aa, bb)<< std::endl;
	std::cout << "cc = "<< cc <<" ~ dd = "<< dd << std::endl;
	std::cout << "MIN = " << min(cc, dd)<< std::endl;

	std::cout << "\nFLOAT" << std::endl;
	std::cout << "x = "<< x <<" ~ y = "<< y << std::endl;
	std::cout << "MIN = " << min(x, y)<< std::endl;
	std::cout << "w = "<< w <<" ~ z = "<< z << std::endl;
	std::cout << "MIN = " << min(w, z)<< std::endl;

	std::cout << "\nDOUBLE" << std::endl;
	std::cout << "i = "<< i <<" ~ j = "<< j << std::endl;
	std::cout << "MIN = " << min(i, j)<< std::endl;
	std::cout << "k = "<< k <<" ~ l = "<< l << std::endl;
	std::cout << "MIN = " << min(k, l)<< std::endl;

	std::cout << "\nSTRING" << std::endl;
	std::cout << "s1 = "<< s1 <<" ~ s2 = "<< s2 << std::endl;
	std::cout << "MIN = " << min(s1, s2)<< std::endl;
	std::cout << "s1 = "<< s1 <<" ~ s3 = " << s3 << std::endl;
	std::cout << "MIN = " << min(s1, s3)<< std::endl;


	std::cout << "\n\n============== ~ MAX ~ ==============\n" << std::endl;
	std::cout << "INT" << std::endl;
	std::cout << "aa = "<< aa <<" ~ bb =: "<< bb << std::endl;
	std::cout << "MAX = " << max(aa, bb)<< std::endl;
	std::cout << "cc = "<< cc <<" ~ dd =: "<< dd << std::endl;
	std::cout << "MAX = " << max(cc, dd)<< std::endl;

	std::cout << "\nFLOAT" << std::endl;
	std::cout << "x = "<< x <<" ~ y =: "<< y << std::endl;
	std::cout << "MAX = " << max(x, y)<< std::endl;
	std::cout << "w = "<< w <<" ~ z =: "<< z << std::endl;
	std::cout << "MAX = " << max(w, z)<< std::endl;

	std::cout << "\nDOUBLE" << std::endl;
	std::cout << "i = "<< i <<" ~ j =: "<< j << std::endl;
	std::cout << "MAX = " << max(i, j)<< std::endl;
	std::cout << "k = "<< k <<" ~ l =: "<< l << std::endl;
	std::cout << "MAX = " << max(k, l)<< std::endl;
	std::cout << "\nSTRING" << std::endl;
	std::cout << "s1 = "<< s1 <<" ~ s2 = "<< s2 << std::endl;
	std::cout << "MAX = " << max(s1, s2)<< std::endl;
	std::cout << "s1 = "<< s1 <<" ~ s3 = " << s3 << std::endl;
	std::cout << "MAX = " << max(s1, s3)<< std::endl;
	return 0;
}
