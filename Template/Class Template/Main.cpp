// Class Template

#include <iostream>
#include <string>

template <class T> // Defining Any Return Value like int or Double. in T 
class Compare {
private:
	T First, Second;
public:
	Compare(T a, T b)
		:First(a) , Second(b)
	{}

	// Function Declaration.
	T Bigger(); // We can Also tell this func what to do directly without use Definition of the Class 
};

template <class T>
T Compare<T>::Bigger() // function Definition :: 
{
	return(First > Second ? First : Second); // if first > second RETURN(?) first ELSE(:) return second
}

int main()
{
	Compare <double> CO(99.9, 45.2); // Defining object to Double 
	std::cout << CO.Bigger() << std::endl;

	system("pause");

}
