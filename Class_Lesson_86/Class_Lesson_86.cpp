// Class_Lesson_86.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

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
    Point()
    {
        x = 0;
        y = 0;
        cout << this << " constructor" << endl;
    }
    
    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
        cout << this << " constructor" << endl;
    }

    int GetY()
    {
        return y;
    }
    
    void SetY(int y)
    {
        this->y = y;
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

int main()
{
    Point a;
    a.SetY(5);
    a.printXOption();

}
