#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

// using namespace sql;
void cSheet(){
// for (char &c : command)
        // {
        //     c = tolower(c); // converting everything to lower cases
        // }

        // istringstream iss(command);
        // vector<string> words;
        // string word;

        // while (iss >> word) // splitting sentences by spaces
        // {
        //     words.push_back(word); //pushing word in vector
        // }

}

// Opening a file for writing
ofstream file("location.csv", ios::app);
// Reading from a file
 ifstream file("location.csv");
//  Checking if file is open
file.is_open()
// closing file
file.close()


// connecting to database mysql
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>

void connectDB(){
    int main() {
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    // For fetching and sending data
    sql::Connection *con;
    sql::Statement *stmt;
    sql::ResultSet *res;
    sql::PreparedStatement *prepStmt;

    // Create a MySQL driver object
    driver = sql::mysql::get_mysql_driver_instance();

    // Establish a MySQL database connection
    con = driver->connect("tcp://127.0.0.1:3306", "username", "password");

    if (con) {
        std::cout << "Connected to MySQL database!" << std::endl;

        // Perform database operations...
        stmt = con->createStatement();

        // Execute a SQL query to fetch data
        res = stmt->executeQuery("SELECT * FROM your_table");

        // Process the resultset
        while (res->next()) {
            // Retrieve data from each column
            int id = res->getInt("id");
            std::string name = res->getString("name");

            // Do something with the retrieved data
            std::cout << "ID: " << id << ", Name: " << name << std::endl;
        }
        // Sending data
        prepStmt = con->prepareStatement("INSERT INTO your_table (column1, column2) VALUES (?, ?)");

        // Set the values to be inserted
        prepStmt->setString(1, "Value 1");
        prepStmt->setInt(2, 42);

        // Execute the prepared statement
        prepStmt->execute();

        // Close the database connection
        delete con;
    } else {
        std::cout << "Failed to connect to MySQL database." << std::endl;
    }

}

}
