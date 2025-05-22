#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Employee Structure
struct Employee {
    string name;
    int id;
    string department;
    double salary;
    string position;
    string birthday;
    string address;
    string phone;
    string email;
    string status;
    string level;
    string maritalStatus;
};

// Employee Database
vector<Employee> employees;

// Function to create an employee
void createEmployee() {
    Employee emp;
    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, emp.name);
    cout << "Enter Employee ID: ";
    cin >> emp.id;
    cout << "Enter Department: ";
    cin.ignore();
    getline(cin, emp.department);
    cout << "Enter Salary: ";
    cin >> emp.salary;
    cout << "Enter Position: ";
    cin.ignore();
    getline(cin, emp.position);
    cout << "Enter Birthday: ";
    getline(cin, emp.birthday);
    cout << "Enter Address: ";
    getline(cin, emp.address);
    cout << "Enter Phone Number: ";
    getline(cin, emp.phone);
    cout << "Enter Email: ";
    getline(cin, emp.email);
    cout << "Enter Status (Active/Inactive): ";
    getline(cin, emp.status);
    cout << "Enter Level (Manager/Supervisor/Employee): ";
    getline(cin, emp.level);
    cout << "Enter Marital Status (Single/Married/Divorced/Widowed): ";
    getline(cin, emp.maritalStatus);

    employees.push_back(emp);
    cout << "Employee added successfully!\n";
}

// Function to display all employees
void displayEmployees() {
    if (employees.empty()) {
        cout << "No employees to display.\n";
        return;
    }
    for (const auto& emp : employees) {
        cout << "ID: " << emp.id << ", Name: " << emp.name 
             << ", Department: " << emp.department 
             << ", Position: " << emp.position 
             << ", Salary: " << emp.salary << "\n";
    }
}

// Function to search for an employee
void searchEmployee() {
    int id;
    cout << "Enter Employee ID to search: ";
    cin >> id;

    for (const auto& emp : employees) {
        if (emp.id == id) {
            cout << "Employee found:\n";
            cout << "Name: " << emp.name << "\nDepartment: " << emp.department 
                 << "\nSalary: " << emp.salary << "\nPosition: " << emp.position 
                 << "\nEmail: " << emp.email << "\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

// Function to update employee information
void updateEmployee() {
    int id;
    cout << "Enter Employee ID to update: ";
    cin >> id;

    for (auto& emp : employees) {
        if (emp.id == id) {
            cout << "Enter new salary: ";
            cin >> emp.salary;
            cout << "Enter new position: ";
            cin.ignore();
            getline(cin, emp.position);
            cout << "Employee updated successfully!\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

// Function to delete an employee
void deleteEmployee() {
    int id;
    cout << "Enter Employee ID to delete: ";
    cin >> id;

    auto it = remove_if(employees.begin(), employees.end(), [id](const Employee& emp) {
        return emp.id == id;
    });

    if (it != employees.end()) {
        employees.erase(it, employees.end());
        cout << "Employee deleted successfully.\n";
    } else {
        cout << "Employee not found.\n";
    }
}

// Function to sort employees by ID
void sortEmployees() {
    sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.id < b.id;
    });
    cout << "Employees sorted by ID.\n";
}

// Main function
int main() {
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Create Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Sort Employees\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: createEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6: sortEmployees(); break;
            case 0: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
