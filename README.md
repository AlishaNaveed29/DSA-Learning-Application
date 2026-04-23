
###  Project Overview
This project is a simple **DSA learning platform** implemented in C++. It aims to assist students in understanding core DSA concepts through structured menus, quizzes, and practice links.
###  Features
User Authentication (Sign Up / Login)
Learning Modules:

  * Stack
  * Queue
  * Linked List
  * Sorting Algorithms:

    * Selection Sort
    * Bubble Sort
    * Insertion Sort
    * Quick Sort
Practice Section:

  * Quiz (MCQs)
  * Practice Problems (via external links)
  * Solution Search (Google integration)
* Interactive Console Menu System
###  Technologies Used
* **C++**
* Standard Libraries:
  * `<iostream>`
  * `<string>`
  * `<unistd.h>`
* System Commands:
  * `system("CLS")` for screen clearing
  * `system("start <URL>")` for opening web resources
### Project Structure
`main()` → Entry point of the program
Authentication:
  * `SignUp()`
  * `Login()`
  * `AuthenticationMenu()`
Navigation:
  * `menu()`
  * `learning()`
  * `practice()`
Learning Modules:
  * `stack()`
  * `queue()`
  * `linked_list()`
  * `algorithms()`
Sorting:
  * `selectionSort()`
  * `bubbleSort()`
  * `insertionSort()`
  * `quickSort()`
Practice:
  * `quiz()`
  * `practice_problems()`
  * `solutions()`
###  Limitations
 User data is **not stored permanently** (lost after program ends)
 Uses `system()` calls which are **platform-dependent**
 Limited error handling and input validation
 Console-based UI (no graphical interface)
###  Future Improvements
File handling for persistent user data
GUI implementation (Qt / Web-based interface)
More quizzes and interactive coding challenges
Better validation and security for login system
Replace system calls with portable alternatives
###  Author

Alisha Naveed
