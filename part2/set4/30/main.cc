#include "main.ih"

int main()
{
    ofstream one("one.txt");
    ofstream two("two.txt");

    BiStream ms(one, two);

    ms << "Hello world" << endl;
}
