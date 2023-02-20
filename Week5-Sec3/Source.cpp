// Week 5 - Section 3
// Operator Overloading
// Salah S.

#include <iostream>
using namespace std;

class Mark
{
	int w;
	int p;
public:
	Mark()
	{
		cout << "Mark() is called." << endl;
		w = 0;
		p = 0;
	}
	Mark(int w, int p)
	{
		this->w = w;
		this->p = p;
	}
	void setP(int P)
	{
		this->p = P;
	}
	void setW(int W)
	{
		this->w = W;
	}
	int getW()
	{
		return w;
	}
	int getP()
	{
		return p;
	}
	void print()
	{
		cout << "w = " << w << ", p =" << p << endl;
	}
	Mark add(Mark inputMark)
	{
		// This function has an object that adds up 'P' and 'W' individually.
		// The object is then returned as the result upon completion.
		Mark sum;
		sum.p = this->p + inputMark.p;
		sum.w = this->w + inputMark.w;

		return sum;
	}

	// This function is similar to the previous, but instead, it uses the
	// operator+ to overload the addition operator.
	Mark operator+(Mark inputMark)
	{
		// This function has an object that adds up 'P' and 'W' individually.
		// The object is then returned as the result upon completion.
		Mark sum;
		sum.p = this->p + inputMark.p;
		sum.w = this->w + inputMark.w;

		return sum;
	}

	Mark operator-(Mark inputMark)
	{
		// This function has an object that adds up 'P' and 'W' individually.
		// The object is then returned as the result upon completion.
		Mark minus;
		minus.p = this->p - inputMark.p;
		minus.w = this->w - inputMark.w;

		return minus;
	}

	Mark operator*(Mark inputMark)
	{
		// This function has an object that adds up 'P' and 'W' individually.
		// The object is then returned as the result upon completion.
		Mark mult;
		mult.p = this->p * inputMark.p;
		mult.w = this->w * inputMark.w;

		return mult;
	}


};

int main()
{

	/*
	Not the recommended way to do it.
	int x1 = 3;
	int x2 = 4;
	int x3 = x1 + x2;
	*/

	Mark mark1(1, 2);
	Mark mark2(3, 4);

	Mark mark3 = mark1.add(mark2);
	mark3.print();

	// This is called "operator overloading".
	Mark mark4 = mark1 + mark2;
	mark4.print();

	// Operator overloading for a subtraction.
	Mark mark5 = mark1 - mark2;
	// Or it may be written as:
	/*Mark mark5 = mark1.operator-(mark2);*/
	mark5.print();

	Mark mark6 = mark1 * mark2;
	mark6.print();

	// String overloading:
	string name = "Akrem";
	string lname = "El-Ghazal";
	string total = name + lname;

	system("pause");
	return 0;

}