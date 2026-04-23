#include <iostream>
#include <unistd.h>
#include <string>
#define clr system("CLS")
using namespace std;

struct UserData
{
    string username;
    string password;

    UserData *next;
    UserData *pre;
};

struct UserData *UserHead = 0, *UserTail = 0, *user = 0, *UserTemp = 0;

bool CheckSignUp = 0;

void menu();
void learning();
void practice();
void stack();
void queue();
void linked_list();
void algorithms();
void quiz();
void practice_problems();
void solutions();
void SignUp();
void Login();
void AuthenticationMenu();
void wait(string, int);
void selectionSort();
void bubbleSort();
void insertionSort();
void quickSort();

int main()
{
	system("color 72");
	cout<<"LAHORE GARRISON UNIVERSITY "<<endl;
	cout<<"TITLE:DSA LEARNING APPLICATION"<<endl;
	cout<<"		1.Alisha Naveed (042) "<<endl;
	cout<<"___________________________________"<<endl;
    AuthenticationMenu();
    return 0;
}

void menu()
{
    clr;
    int choice;
    cout << "1. Learn DSA \n2. Practice DSA \nChoice: ";
    cin >> choice;

    if(choice == 1)         learning();
    else if(choice == 2)    practice();
    else
    {
        cout << "Wrong Choice" << endl;
        menu();
    }
}

void learning()
{
	clr;
    int choice;
    cout << "Learning Page" << endl;
    cout << "----------" << endl << endl;
    cout << "1. Stack \n2. Queue \n3. Linked List \n4. Algorithms \n5. Exit \nChoice: ";
    cin >> choice;
    switch(choice)
    {
        case 1:     stack();                    break;
        case 2:     queue();                    break;
        case 3:     linked_list();              break;
        case 4:     algorithms();               break;
        case 5:     menu();                     break;
        case 6:     exit(1);	               break;
        default:    cout << "Wrong Choice\n";   break;
    }
}

void practice()
{
	clr;
    int choice;
    cout << "Practice Page" << endl;
    cout << "----------" << endl << endl;
    
    cout << "1. Quiz \n2. Practice Problems \n3. Solutions \nChoice: ";
    cin >> choice;
    switch(choice)
    {
        case 1:     quiz();                     break;
        case 2:     practice_problems();        break;
        case 3:     solutions();                break;
        default:    cout << "Wrong Choice\n";   break;
    }
}

void stack()
{	
    clr;
	int choice;
    cout << "Learning Page" << endl;
    cout << "----------" << endl << endl;

    cout << "Once you completely understand the concept,\nCome Back to this dashboard." << endl << endl;
    wait("Opening Stack Content", 3);
    sleep(1);
    system("start https://www.programiz.com/cpp-programming/stack");
    
    while(1)
    {
	    cout << "1. Learning Menu \n2. Practice Stack \n3, Return to menu page \n4. Exit \nChoice: " << endl;
	    cin >> choice;
	    switch(choice)
	    {
	    	case 1: learning();            break;
	    	case 2:	practice_problems();   break;
	    	case 3: menu();                break;
	    	case 4:	exit(1);               break;
	    	default:
	    		cout << "Wrong Choice";
	    		break;
		}
	}
}

void queue()
{
	int choice;
    clr;
    cout << "Learning Page" << endl;
    cout << "----------" << endl << endl;

    cout << "Once you completely understand the concept,\nCome Back to this dashboard." << endl << endl;
    wait("Opening Queue Content", 3);
    sleep(1);
    system("start https://www.programiz.com/cpp-programming/queue");
    
    while(1)
    {
	    cout << "1. Learning Menu \n2. Practice n3.Return to menu page \n4. Exit \nChoice: " << endl;
	    cin >> choice;
	    switch(choice)
	    {
	    	case 1: learning();              break;
	    	case 2: practice_problems();     break;
	    	case 3: menu();                  break;
	    	case 4:	exit(1);                 break;
	    	default:
	    		cout << "Wrong Choice";
	    		break;
		}
	}
}

void linked_list()
{
	int choice;
    clr;
    cout << "Learning Page" << endl;
    cout << "----------" << endl << endl;

    cout << "Once you completely understand the concept,\nCome Back to this dashboard." << endl << endl;
    wait("Opening Linked-List Content", 3);
    sleep(1);
    system("start https://www.programiz.com/dsa/linked-list");
    
    while(1)
    {
	    cout << "1. Learning Menu \n2. Practice linked list \n3. Return to menu page \n4.Exit \nChoice: " << endl;
	    cin >> choice;
	    switch(choice)
	    {
	    	case 1: learning();           break;
	    	case 2:	practice_problems();  break;
	    	case 3: menu();               break;
	    	case 4: exit(1);              break;
	    	default:
	    		cout << "Wrong Choice";
	    		break;
		}
	}
}

void algorithms()
{
	clr;
	int choice;
    cout << "Learning Page" << endl;
    cout << "----------" << endl << endl;

	
    while(1)
    {
	    cout << "1. Selection Sort \n2. Bubble Sort  \n3. Insertion Sort  \n4. Quick Sort \n5. Exit \nChoice: " << endl;
	    cin >> choice;
	    switch(choice)
	    {
	    	case 1:	selectionSort();       break;
	    	case 2: bubbleSort();          break;
	        case 3:	insertionSort();       break;
	    	case 4:	quickSort();           break;
	    	case 5:	exit(1);               break;
	    	default:
	    		cout << "Wrong Choice";
	    		break;
		}
	}
}
void quiz()
{
    clr;
    int choice;
    int score = 0;
    string answer;

    cout << "Practice Page" << endl;
    cout << "----------" << endl << endl;

    cout << "Welcome to the DSA Quiz!" << endl;
    cout << "Answer the following questions:" << endl;

    cout << "1. What is the time complexity of binary search?" << endl;
    cout << "a. O(n) \nb. O(log n) \nc. O(n^2) \nd. O(n log n)" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "b" || answer == "B") score++;

    cout << "2. Which data structure uses LIFO (Last In First Out) principle?" << endl;
    cout << "a. Queue \nb. Stack \nc. Linked List \nd. Array" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "b" || answer == "B") score++;

    cout << "3. What is the time complexity of bubble sort in the worst case?" << endl;
    cout << "a. O(n) \nb. O(log n) \nc. O(n^2) \nd. O(n log n)" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c" || answer == "C") score++;

    cout << "4. Which data structure uses FIFO (First In First Out) principle?" << endl;
    cout << "a. Queue \nb. Stack \nc. Linked List \nd. Tree" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "a" || answer == "A") score++;

    cout << "5. Which sorting algorithm is the fastest in the average case for large datasets?" << endl;
    cout << "a. Selection Sort \nb. Bubble Sort \nc. Quick Sort \nd. Insertion Sort" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c" || answer == "C") score++;

    cout << "\nYou scored " << score << " out of 5." << endl;
    wait("Returning to the main menu", 3);
    menu();
}
void practice_problems()
{
    clr;
    int choice;
    cout << "Practice Problems Page" << endl;
    cout << "----------------------" << endl << endl;
    cout << "1. Stack Problems \n2. Queue Problems \n3. Linked List Problems \n4. Sorting Problems \n5. Exit \nChoice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
    	wait("Opening practice problem stack content ",5);
    	sleep(1);
    	system("start https://www.geeksforgeeks.org/stack-data-structure/");
        break;
    case 2:
        wait("Opening practice problem queue content ",5);
    	sleep(1);
    	system("start https://www.geeksforgeeks.org/top-50-problems-on-queue-data-structure-asked-in-sde-interviews/");
        break;
    case 3:
        wait("Opening practice problem linked list content ",5);
    	sleep(1);
    	system("start https://www.geeksforgeeks.org/linked-list-c-cpp-programs/");
        break;
    case 4:
        wait("Opening practice problem  sorting content ",5);
    	sleep(1);
    	system("start https://www.geeksforgeeks.org/sorting-algorithms/");
        break;
    case 5:
        exit(1);
        break;
    default:
        cout << "Wrong Choice\n";
        break;
    }
}
void solutions()
{
    system("CLS");
    string question;
    cout << "Solutions Page" << endl;
    cout << "--------------" << endl << endl;
    cout << "Enter the question you want to search for: ";
    cin.ignore();  
    getline(cin, question);

    for (size_t i = 0; i < question.size(); ++i)
    {
        if (question[i] == ' ')
            question[i] = '+';
    }
    string url = "https://www.google.com/search?q=" + question;
    string command = "start " + url;
    system(command.c_str());
    wait("Returning to the main menu", 5);
    menu();
}
void Login()
{
	clr;
    cout << "Login Page" << endl;
    cout << "----------" << endl << endl;

    if(CheckSignUp == 0)
    {
        cout << "Sign Up First" << endl;
        wait("Forwading Towards Sign Up Page", 3);
        clr;
        SignUp();
    }

    string username, password;
    cout << "Enter Username: ";
    getline(cin >> ws, username);
    cout << "Enter Password: ";
    getline(cin >> ws, password);

    UserTemp = UserHead;
    while(UserTemp != NULL)
    {
        if(UserTemp -> username == username && UserTemp -> password == password)
        {
            cout << "\nSuccessfully Logged In" << endl;
            wait("Opening Portal", 3);
            menu();
            break;
        }
        else
        {
            cout << "User Not Found, TRY AGAIN" << endl;
            sleep(3);
            Login();
        }

        UserTemp = UserTemp -> next;
    }
}

void SignUp()
{
	clr;
    cout << "Sign Up Page" << endl;
    cout << "----------" << endl << endl;

    string username, password;
    cout << "Enter Username: ";
    getline(cin >> ws, username);
    cout << "Enter Password: ";
    getline(cin >> ws, password);

	UserData* user = new UserData;
    user -> username = username;
    user -> password = password;
    user -> next = NULL;
    user -> pre = NULL;

    if(UserHead == 0)
    {
        UserHead = user;
        UserTail = user;
    }
    else
    {
        user -> pre = UserTail;
        UserTail -> next = user;
        UserTail = user;
    }

    CheckSignUp = 1;

    Login();
}

void AuthenticationMenu()
{

    int choice;
    cout << "1. Sign Up \n2. Login \n3. Exit \nChoice: ";
    cin >> choice;

    switch(choice)
    {
        case 1: SignUp();    break;
        case 2: Login();  break;
        case 3: exit(1);  break;
        default: cout << "Wrong"; break;
    }
}

void wait(string s, int n)
{
	cout << s;
	for(int i = 0; i < n; i++)
	{
		cout << ".";
		sleep(1);
	}
	cout << endl;
}

void selectionSort()
{
	int choice;
	
    clr;
    cout << "Learning Page" << endl;
    cout << "----------" << endl << endl;

    cout << "Once you completely understand the concept,\nCome Back to this dashboard." << endl << endl;
    wait("Opening Selection-Sort Content", 3);
    sleep(1);
    system("start https://www.programiz.com/dsa/selection-sort");
    
    while(1)
    {
	    cout << "1. Learning Menu \n2. Practice sorting \n3. Exit \nChoice: " << endl;
	    cin >> choice;
	    switch(choice)
	    {
	    	case 1:
	    		learning();
	    		break;
	    	
	    	case 2:
	    		practice_problems();
	    		break;
	    		
	    	case 3:
	    		exit(1);
	    		break;
	    	
	    	default:
	    		cout << "Wrong Choice";
	    		break;
		}
	}
}

void bubbleSort()
{
	int choice;
	
    clr;
    cout << "Learning Page" << endl;
    cout << "----------" << endl << endl;

    cout << "Once you completely understand the concept,\nCome Back to this dashboard." << endl << endl;
    wait("Opening Bubble-Sort Content", 3);
    sleep(1);
    system("start https://www.programiz.com/dsa/bubble-sort");
    
    while(1)
    {
	    cout << "1. Learning Menu \n2. Practice sorting \n3. Exit \nChoice: " << endl;
	    cin >> choice;
	    switch(choice)
	    {
	    	case 1:
	    		learning();
	    		break;
	    	
	    	case 2:
	    		practice_problems();
	    		break;
	    		
	    	case 3:
	    		exit(1);
	    		break;
	    	
	    	default:
	    		cout << "Wrong Choice";
	    		break;
		}
	}
}

void insertionSort()
{
	int choice;
	
    clr;
    cout << "Learning Page" << endl;
    cout << "----------" << endl << endl;

    cout << "Once you completely understand the concept,\nCome Back to this dashboard." << endl << endl;
    wait("Opening Insertion-Sort Content", 3);
    sleep(1);
    system("start https://www.programiz.com/dsa/insertion-sort");
    
    while(1)
    {
	    cout << "1. Learning Menu \n2. Practice sorting \n3. Exit \nChoice: " << endl;
	    cin >> choice;
	    switch(choice)
	    {
	    	case 1:
	    		learning();
	    		break;
	    	
	    	case 2:
	    		practice_problems();
	    		break;
	    		
	    	case 3:
	    		exit(1);
	    		break;
	    	
	    	default:
	    		cout << "Wrong Choice";
	    		break;
		}
	}
}

void quickSort()
{
	int choice;
	
    clr;
    cout << "Learning Page" << endl;
    cout << "----------" << endl << endl;

    cout << "Once you completely understand the concept,\nCome Back to this dashboard." << endl << endl;
    wait("Opening Quick-Sort Content", 3);
    sleep(1);
    system("start https://www.programiz.com/dsa/quick-sort");
    
    while(1)
    {
	    cout << "1. Learning Menu \n2. Practice sorting \n3. Exit \nChoice: " << endl;
	    cin >> choice;
	    switch(choice)
	    {
	    	case 1:
	    		learning();
	    		break;
	    	
	    	case 2:
	    		practice_problems();
	    		break;
	    		
	    	case 3:
	    		exit(1);
	    		break;
	    	
	    	default:
	    		cout << "Wrong Choice";
	    		break;
		}
	}
}
