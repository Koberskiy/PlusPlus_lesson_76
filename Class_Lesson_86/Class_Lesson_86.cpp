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

int main()
{
    // inkapsulatsia
    Point objectA;

    objectA.SetX(45);
    objectA.SetY(6);

    int result = objectA.GetX();
    cout << "Result printing ..." <<result << endl;

    objectA.printXOption();

    ///======

    Human firstHuman; // obect clasa Human - firstHuman
    firstHuman.age = 30;
    firstHuman.name = "Yarik";
    firstHuman.weight = 90;

   // firstHuman.printWeight();

    Human secondHuman;
    //secondHuman.printWeight();
}
