#include<iostream>
#include<vector>

using namespace std;

class ToDoList{
    vector<string> list;
    public:
    void addToList(){
        string str;
        cout << "Give description for your work!" << endl;
        cin.ignore();
        getline(cin, str);
        list.push_back(str);
    }
    void showList()
    {
        for(int i = 0; i < list.size(); i++)
            cout <<i+1 << " " << list[i] << endl;
        cout << endl;
    }
    void start()
    {
        while(true)
        {
            cout << endl;
            cout << "1 -> Add something to list" << endl;
            cout << "2 -> Show the list" << endl;
            cout << "3 -> Exit" << endl;
            cout << "Enter a number between 1 to 3 :";
            int n;
            cin >> n;
            if(n == 1)
                addToList();
            else if(n == 2)
                showList();
            else if(n == 3)
                return ;
            else
            {
                cout << "Number should be 1 to 3" << endl;
                cout << "You entered " << n << endl;
            }
        }
    }
};

int main()
{
    ToDoList toDoList;
    toDoList.start();
    return 0;
}