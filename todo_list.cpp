
#include <iostream>
using namespace std;

class todo_class
{
    string todo_list[30];
    string complete[30];

public:
    static int task;

    void input_task()
    {
        if (task > 30)
        {
            cout << "TO-DO LIST IS FULL!!!";
        }
        else
        {
            if (task == -1)
            {
                task = 0;
            }
            int inner_loop = 1;
            char choice;
            while (inner_loop)
            {
                cout << "Enter the Task: ";
                cin.ignore();
                getline(cin, todo_list[task]);
                complete[task] = "Pending";
                task++;
                cout << "\"TASK ADDED SUCCESSFULLY\"";
                cout << endl
                     << endl
                     << "Do you want to add more task?(y/n): ";
                cin >> choice;
                if (choice == 'n' || choice == 'N')
                {
                    inner_loop = 0;
                }
            }
        }
    }

    void display_task()
    {
        if (task < 0)
        {
            cout << "TO-DO list is empty!!!";
        }
        else
        {
            cout << endl
                 << "TASKS IN TO-DO LIST: " << endl;
            cout << "--------------------" << endl;
            for (int i = 0; i < task; i++)
            {
                cout << "TASK " << i + 1 << ":" << todo_list[i] << " [" << complete[i] << "]\n";
            }
        }
    }

    void delete_task()
    {
        if (task < 0)
        {
            cout << "TO-DO list is empty. deletion not possible !!!";
        }
        else
        {

            int del_task = 0;
            cout << "Enter the Task number to delete: ";
            cin >> del_task;

            if (del_task < 1 || del_task > 30)
            {
                cout << "to-do list can only store upto 30 task, So you have entered invalid task number!!!" << endl;
            }
            else if (del_task > task)
            {
                cout << "You have entered task number which doesn't exist now !!!" << endl;
            }
            else
            {
                for (int i = del_task; i < task; i++)
                {
                    todo_list[i - 1] = todo_list[i];
                    complete[i - 1] = complete[i];
                }
                task--;
                cout << "\"TASK REMOVED SUCCESSFULLY.\"\n";
                if (task == 0)
                {
                    task = -1;
                }
            }
        }
    }


void mark_task_complete()
{
    if (task < 0)
    {
        cout << "TO-DO list is empty. Marking \"complete\" not possible !!!";
    }
    else
    {
        int mark_task;
        cout << "Enter task number to mark as completed: ";
        cin >> mark_task;

        if (mark_task < 1 || mark_task > 30)
        {
            cout << "to-do list can only store upto 30 task, So you have entered invalid task number!!!" << endl;
        }
        else if (mark_task > task)
        {
            cout << "You have entered task number which doesn't exist now !!!" << endl;
        }
        else if (complete[mark_task - 1] == "Completed")
        {
            cout << "\"TASK HAS ALREADY BEEN MARKED AS COMPLETED .\"\n";
        }
        else
        {
            complete[mark_task - 1] = "Completed";
            cout << "\"TASK MARKED AS COMPLETED SUCCESSFULLY.\"\n";
        }
    }

}
};

int todo_class::task = -1;

int main()
{
    todo_class t;
    int loop = 1, ch;
    while (loop)
    {
        cout << "*************** TO-DO LIST ****************************\n";
        cout << "ENTER \'1\' TO ADD TASK" << endl;
        cout << "ENTER \'2\' TO VIEW TASK " << endl;
        cout << "ENTER \'3\' TO MARK TASK AS COMPLETED" << endl;
        cout << "ENTER \'4\' TO REMOVE TASK" << endl;
        cout << "ENTER \'5\' TO TO EXIT TO-DO LIST" << endl;
        cout << endl;

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            t.input_task();
            break;

        case 2:
            t.display_task();
            break;

        case 3:
            t.mark_task_complete();
            break;

        case 4:
            t.delete_task();
            break;

        case 5:
            loop = 0;
            cout << "EXITED THE TO-DO LIST";
            break;

        default:
            cout << "Please enter valid choice!!" << endl;
        }
        cout << endl
             << endl;
    }
}
