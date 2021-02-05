#include <iostream>
#include "Bird.h"
#include "Cat.h"
#include "Dog.h"

//makes so you can combine string and float, task2
std::string operator+(std::string str, float num) {
	std::string combined;
	combined = str + " " +  std::to_string(num);

	return combined;
}


template<class T>
class MyTemplate {
	std::string input1;
	T input2;
public:
	void Combine(std::string,T);
};

template< class T>
inline void MyTemplate<T>::Combine(std::string x1,T x2) {
	auto Value = x1 + x2;
	std::cout << Value;
}

int main() {
	//task 1
	Dog dog;
	Cat* cat = new Cat;
	Bird bird;

	dog.Speak();
	cat->Speak();
	bird.Speak();

	std::cout << "\n";
	

	//combine string and int ,task 2
	std::string teststr = "some text";
	float num = 21;

	std::cout << "Combined string and float with operator overloading\n" 
				<< teststr + num << std::endl << std::endl;

	//task 3 
	std::cout << "Combined string and float with templates\n";
	MyTemplate<float> TTemplate;
	TTemplate.Combine(teststr, num);
	std::cout << "\n\n\n";
	return 0;
}