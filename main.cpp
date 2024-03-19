#include <iostream>
#include <map>

using namespace std;

void SwapMap()
{
    map<string, int> people = {{"John", 33}, {"Karl", 43}};

    {
        map<string, int> people_temp;

        for (auto &[name, age] : people)
        {
            people_temp["Mr. "s + name] = age;
        }

        swap(people, people_temp);
    }

    for (auto &[name, age] : people)
    {
        cout << name << ", " << age << endl;
    }
}

int main()
{
    SwapMap();
}
