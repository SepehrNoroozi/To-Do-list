#include <iostream> //for input/output
#include <vector> //to store the list of tasks
#include <string> //for task description
#include <fstream> //for file input/output
#include <sstream> //for parsing lines from the file (optional)

using namespace std;



//Task class definition
class Task{
private:
    string description;
    bool isDone;
public:
    //Constructor to initialize task with a description, isDone defaults to false
    Task(string desc) : description(desc), isDone(false){}

    //Getter for description
    string getDescription() const{
        return description;
    }

    //Getter for isDone status
    bool getIsDone() const{
        return isDone;
    }

    //Mark task as done
    void markAsDone() {
        isDone = true;
    }

    //Setter for description (in case you want to change task description)
    void setDescription(const string& desc) {
        description = desc;
    }
};

//Function prototypes
void displayMenu();
void addTask(vector<Task>& tasks);
void viewTasks(const vector<Task>& tasks);
void markTaskAsDone(vector<Task>& tasks);
void deleteTask(vector<Task>& tasks);

int main()
{
    vector<Task> tasks;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskAsDone(tasks);
                break;
            case 4:
                deleteTask(tasks);
                break;
            case 5:
                cout << "Saving and exiting...\n";
                //Saving task to files would be added here
                break;
            default:
                cout << "Invalid choice, please try again\n";
        }
    } while (choice != 5);
    return 0;
}

//Function to display the menu options
void displayMenu() {
    cout << "\n==== To-Do :ist ====\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Done\n";
    cout << "4. Delete Task\n";
    cout << "5. Save and Exit\n";
    cout << "Enter your choice: ";
}

//Function to add a task
void addTask(vector<Task>& tasks) {
    cin.ignore();
    string description;
    cout << "Enter task description: ";
    getline(cin, description);
    tasks.push_back(Task(description));
    cout << "Task added: " << description << endl;
}

//Function to view all tasks
void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
    } else {
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].getDescription() << (tasks[i].getIsDone() ? " [Done]" : " [Pending]") << endl;
        }
    }
}

//Function to mark a task as done
void markTaskAsDone(vector<Task>& tasks) {
    int taskIndex;
    viewTasks(tasks);
    cout << "Enter task Number to mark as done: ";
    cin >> taskIndex;

    if (taskIndex >= 1 && taskIndex <= tasks.size()) {
        tasks[taskIndex - 1].markAsDone();
        cout << "Task marked as done.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

//Function to delete a task
void deleteTask(vector<Task>& tasks) {
    int taskIndex;
    viewTasks(tasks); //Show the tasks before deleting one
    cout<< "Enter task number to delete: ";
    cin >> taskIndex;

    if (taskIndex >= 1 && taskIndex <= tasks.size()) {
        tasks.erase(tasks.begin() +taskIndex -1);
        cout << "Task deleted.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}