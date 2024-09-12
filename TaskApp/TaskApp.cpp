#include <iostream>
#include <vector>
#include<string>

std::vector<std::string> task;
// Add task to vector
void addTask() {
    std::cout << "How many task do you want to input? (You may input up to 5)\n";
    std::string numOfTask;
    // Get input and validate input 
    getline(std::cin, numOfTask);
    while (numOfTask.empty()) {
        std::cout << "You must input a valid number, 1-5\n";
        getline(std::cin, numOfTask);
    }
    // Turning user input into an int for switch
    int taskNumber = stoi(numOfTask);
    // switch statements
    switch (taskNumber) {
    // User inputs one task
    case 1: {
        std::cout << "Enter the name of the task: \n";
        std::string task1;
        getline(std::cin, task1);
        while (task1.empty()) {
            std::cout << "You need to give task 1 a name!\n";
            getline(std::cin, task1);
        }
        // add task name to task
        task.push_back(task1);
        std::cout << "Task 1: " << task[0] << " has been added to your to-do-list\n";
        break;
    }
    // User wants to input two task
    case 2: {
        std::cout << "Enter the first name for task 1: \n";
        std::string task1;
        std::string task2;
        getline(std::cin, task1);
        std::cout << "Enter the name for task 2: \n";
        getline(std::cin, task2);
        //validate input from task 1 and 2
        while (task1.empty() || task2.empty()) {
            if (task1.empty()) {
                std::cout << "You must input something for task 1!\n";
                getline(std::cin, task1);
            }
            else if (task2.empty()) {
                std::cout << "You must input something for task 2!\n";
                getline(std::cin, task2);
            }
        }
        task.push_back(task1); // Index 0
        task.push_back(task2); // Index 1
        std::cout << "Task 1: " << task[0] << " and Task 2: " << task[1] << " have been added to your to-do-list\n";
        break;
    }
    // User wants to add 3 task
    case 3: {
        std::cout << "Enter the first name for task 1: \n";
        std::string task1;
        std::string task2;
        std::string task3;
        getline(std::cin, task1);
        std::cout << "Enter the name for task 2: \n";
        getline(std::cin, task2);
        std::cout << "Enter the name for task 3: \n";
        getline(std::cin, task3);
        // Make sure task 1 2 and 3 have input 
        while (task1.empty() || task2.empty() || task3.empty()) {
            if (task1.empty()) {
                std::cout << "You need to input something for task 1\n";
                getline(std::cin, task1);
            }
            else if (task2.empty()) {
                std::cout << "You need to input something for task 2\n";
                getline(std::cin, task2);
            }
            else if (task3.empty()) {
                std::cout << "You need to input something for task 3\n";
                getline(std::cin, task3);
            }
        }
        task.push_back(task1); // Index 0
        task.push_back(task2); // Index 1
        task.push_back(task3); // Index 2
        std::cout << "Task 1: " << task[0] << " Task 2: " << task[1] << " and Task 3: " << task[2] << " have been added to your to-do-list\n";
        break;
    }
    // User wants to input 4 task 
    case 4: {
        std::cout << "Enter the first name for task 1: \n";
        std::string task1;
        std::string task2;
        std::string task3;
        std::string task4;
        getline(std::cin, task1);
        std::cout << "Enter the name for task 2: \n";
        getline(std::cin, task2);
        std::cout << "Enter the name for task 3: \n";
        getline(std::cin, task3);
        std::cout << "Enter the name for task 4: \n";
        getline(std::cin, task4);
        // Making sure all task have input
        while (task1.empty() || task2.empty() || task3.empty() || task4.empty()) {
            if (task1.empty()) {
                std::cout << "You need to input something for task 1\n";
                getline(std::cin, task1);
            }
            else if (task2.empty()) {
                std::cout << "You need to input something for task 2\n";
                getline(std::cin, task2);
            }
            else if (task3.empty()) {
                std::cout << "You need to input something for task 3\n";
                getline(std::cin, task3);
            }
            else if (task4.empty()) {
                std::cout << "You need to input something for task 4\n";
                getline(std::cin, task4);
            }
        }

        task.push_back(task1); // Index 0
        task.push_back(task2); // Index 1
        task.push_back(task3); // Index 2
        task.push_back(task4); // Index 3

        std::cout << "Task 1: " << task[0] << "Task 2: " << task[1] << "Task 3: " << task[2] << " and task 4: " << task[3] << " have been added to your to-do-list \n";
        break;
    }
    // User wants to input 5 task 
    case 5: {
        std::cout << "Enter the first name for task 1: \n";
        std::string task1;
        std::string task2;
        std::string task3;
        std::string task4;
        std::string task5;
        getline(std::cin, task1);
        std::cout << "Enter the name for task 2: \n";
        getline(std::cin, task2);
        std::cout << "Enter the name for task 3: \n";
        getline(std::cin, task3);
        std::cout << "Enter the name for task 4: \n";
        getline(std::cin, task4);
        std::cout << "Enter the name for task 5: \n";
        getline(std::cin, task5); 
        // Make sure all task have input
        while (task1.empty() || task2.empty() || task3.empty() || task4.empty() || task5.empty()) {
            if (task1.empty()) {
                std::cout << "You need to input something for task 1: \n";
                getline(std::cin, task1);
            }
            else if (task2.empty()) {
                std::cout << "You need to input something for task 2: \n";
                getline(std::cin, task2);
            }
            else if (task3.empty()) {
                std::cout << "You need to input something for task 3: \n";
                getline(std::cin, task3);
            }
            else if (task4.empty()) {
                std::cout << "You need to input something for task 4: \n";
                getline(std::cin, task4);
            }
            else if (task5.empty()) {
                std::cout << "You need to input something for task 5: \n";
                getline(std::cin, task5);
            }
        }
        task.push_back(task1); // Index 0
        task.push_back(task2); // Index 1
        task.push_back(task3); // Index 2
        task.push_back(task4); // Index 3
        task.push_back(task5); // Index 4

        std::cout << "Task 1: " << task[0] << "Task 2: " << task[1] << "Task 3: " << task[2] << " and task 4: " << task[3] << " and task 5: " << task[4] <<
            " \nhave been added to your to-do-list\n";
        break;
    }


    }
}


void checkTask() {
    // Loop through and list all task entered
    int count = 0;
    for (std::string taskInput : task) {
        count++;
        std::cout << count << ". " << taskInput << "\n";
    }
}

void deleteTask() {
    std::cout << "Enter the number of the task you want to delete, for example: if you want to delete task 1, enter task 1\n";
    int taskDelete;
    std::cin >> taskDelete;
    switch (taskDelete) {
    // User wants to delete first task
    case 1: {
        task.erase(task.begin());
        std::cout << "Task 1 had been deleted\n";
        break;
    }
    case 2: {
        task.erase(task.begin() + 1);
        std::cout << "Task 2 has been deleted\n";
        break;
    }
    case 3: {
        task.erase(task.begin() + 2);
        std::cout << "Task 3 has been deleted\n";
        break;
    }
    case 4: {
        task.erase(task.begin() + 3);
        std::cout << "Task 4 has been deleted\n";
        break;
    }
    case 5: {
        task.erase(task.begin() + 4);
        std::cout << "Task 5 has been deleted\n";
        break;
    }
    }
}

bool Menu() {
    std::cout << " Task application by BitByBit-MD\n";
    std::cout << " 1. Add Task\n 2. Remove Task\n 3. Check Task\n 4. Exit\n";
    std::cout << "Input: ";
    std::string input;
    getline(std::cin, input);
    // Validate input
    while (input.empty()) {
        std::cout << "You need to enter valid input\n";
        getline(std::cin, input);
    }
    // Converting string to int for switch statements 
    int numInput = stoi(input);
    switch (numInput) {
    case 1: {
        addTask();
        break;
    }
    case 2: {
        deleteTask();
        break;
    }
    case 3: {
        checkTask();
        break;
    }
    case 4: {
        return false;
    }
    }
}

int main()
{
    while (true) {
        if (!Menu()) {
            break;
        }
    }
}

