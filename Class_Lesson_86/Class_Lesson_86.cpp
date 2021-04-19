// Class_Lesson_86.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

// Konstruktor kopiyvanna

class MyClass
{
public:
    int *data;

    MyClass(int size)
    {
        this->Size = size;
        this->data = new int[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }

        cout << "Vuzvav konsruktor " << this << endl;
    };

    MyClass(const MyClass &other)
    {
        this->data = new int[other.Size];
        cout << "Vuzvav konsruktor kopiyvanna ..." << this << endl;
    }

    ~MyClass()
    {
        cout << "Vuzvalu destructor " << this << endl;
        delete[] data;
    };

private:
    int Size;

};

class Human
{
    // tilo classa

    // svoistva class Human (age , name)
public:
    int age;
    string name;
    int weight;

    void printNameAge()
    {
        cout << "user name: " << name << "\tuser age: " << age << endl;
    }

    void printWeight()
    {
        cout << "weight: " << weight << endl;
    }
};

class Point
{
public:
    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
    }

    int GetY()
    {
        return y;
    }
    
    void SetY(int valueY)
    {
        y = valueY;
    }
    
    
    int GetX()
    {
        return x;
    }

    void SetX(int valueX)
    {
        x = valueX;
    }

    void printXOption()
    {
        cout << "x= " << x << "\ty=" << y << endl;
    }

private:
    int x;
    int y;
    int z;
    void printPoint()
    {
        cout << "point_X:" << x <<  "point_Z:" << z << endl;
    }

    void printPoint_Y()
    {
        cout << "point_Y:" << y << endl;
    }
};

class CoffeGrinder
{
private:
    bool checkVoltage()
    {
        return true;
    }

public:
    void Start()
    {
        bool voltageIsNormal = checkVoltage();

        if (voltageIsNormal)
        {
            cout << "Vjuhhhh !!!" << endl;
        }
        else
        {
            cout << "Beep Beep !!!" << endl;
        }
    }

};

void functionFoo(MyClass value)
{
    cout << "Run function Foo.." << endl;
}

MyClass functionFoo2()
{
    cout << "Run function Foo_2.." << endl;
    MyClass temp(2);

    return temp;
}

int main()
{
    MyClass a(10);

    MyClass b(a);

    //functionFoo(a);
    
    //functionFoo2();

    return 0;
}
