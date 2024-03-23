#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoList
{
private:
    vector<string> tasks;

public:
    void addTask(const string &task)
    {
        tasks.push_back(task);
    }
};

int main()
{

    string inputUser;

    return 0;
}