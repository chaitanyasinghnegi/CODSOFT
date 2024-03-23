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
            cout << "Invalid task index" << endl;
        }
        else
        {
            tasksList[index].completed = true;
            cout << "Marked task as completed" << endl;
        }
    }

    void removeTask(int index)
    {
        if (index < tasksList.size())
        {
            tasksList.erase(tasksList.begin() + index);
            cout << "Task removed" << endl;
        }
        else
        {
            cout << "Invalid task index" << endl;
        }
    }
};

int main()
{
    ToDoList toDoList;
    int choice;
    string taskDesc;
    cout << "----------To Do List----------" << endl;
    do
    {
        cout << "\n1. Add Tasks\n2. Display Tasks\n3. Mark Tasks as Completed\n4. Remove Tasks\n5. Exit" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter task description" << endl;
            cin.ignore();
            getline(cin, taskDesc);
            toDoList.addTask(taskDesc);
            break;
        case 2:
            toDoList.viewTasks();
            break;
        case 3:
            int indexc;
            cout << "Enter index of task to be marked as [Completed] : ";
            cin >> indexc;
            toDoList.taskCompleted(indexc - 1);
            break;
        case 4:
            int indexr;
            cout << "Enter task index to be removed : ";
            cin >> indexr;
            toDoList.removeTask(indexr - 1);
            break;
        case 5:
            cout << "Exiting ....";
            break;
        default:
            cout<<"Invalid choice, Try Again"<<endl;
            break;
        }
    } while (choice != 5);
    return 0;
}
