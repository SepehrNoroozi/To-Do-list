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
}