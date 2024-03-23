#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task
{
    string taskDesc;
    bool completed;
};

class ToDoList
{
private:
    vector<Task> tasksList;

public:
    void addTask(const string &task)
    {
        tasksList.push_back({task, false});
    }

    void viewTasks()
    {
        cout << endl
             << "Tasks : " << endl;
        if (tasksList.empty())
        {
            cout << "No tasks remaining" << endl;
        }
        else
        {
            for (int i = 0; i < tasksList.size(); i++)
            {
                cout << i + 1 << ". " << (tasksList[i].completed ? "[Completed] " : "[Pending] ");
                cout << tasksList[i].taskDesc << endl;
            }
        }
    }

    void taskCompleted(int index)
    {
        if (tasksList.size() < index)
        {
            cout << "Invalid task index"<<endl;
        } else {
            tasksList[index-1].completed=true;
            cout << "Marked task as completed"<<endl;
        }
    }
};

int main()
{

    string inputUser;

    return 0;
}