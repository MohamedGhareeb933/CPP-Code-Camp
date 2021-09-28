#ifndef MYCLASS_H
#define MYCLASS_H
using namespace std;

class MyClass
{
    public:
        MyClass();
        void setName(string x);
        string getName();

    private:
        string name;
};

#endif // MYCLASS_H
