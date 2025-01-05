
#include<bits/stdc++.h> // THEORY: includes every single function eg std, in the cpp library
#include <iostream>
using namespace std;

// Program 1
// TOPIC: if else
/* int main() {
    int marks;
    cout<<"enter marks"<<endl;
    cin >> marks;
    if (marks < 25) {
        cout<< 'F'<<endl;
    }

    else if (marks <44) {
        cout << 'E'<<endl;
    }

    else if (marks < 49) {
        cout << 'D'<<endl;
    }

    else if (marks < 59) {
        cout << 'C'<<endl;
    }

    else if (marks < 79) {
        cout << 'B'<<endl;
    }

    else if (marks < 100) {
        cout << 'A'<<endl;
    }
    return 0;
} */


//  Program 2
// TOPIC: if else (nested)
/* int main() {
    int age;
    cout<< "Enter your age"<<endl;
    cin>> age;

    if (age < 18) {
        cout<<"not eligible for job";
    }
   // OPT: could write just else here and write if-else nested inside that else
    else if (age <= 54) {
        cout << "eligible for job";
    }

    else if (age <= 57){
        cout<< "Eligible for job but retirement soon";
    }

    else{
        cout << "retirement time";
    }

    return 0;
} */

// Program 3
// TOPIC: switch case
// THEORY: break helps us leave the immediate loop it is in
/* int main() {
    int day;
    cout<<"enter number";
    cin>>day;
    switch (day) {
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid";
    }
    return 0;
} */

// Program 4
// TOPIC: array
// THEORY: array elements are always stored in consecutive memory blocks

// TOPIC: for loop
// THEORY: scope of i outside and inside of a for loop

/*
for(int i=1; i<=5;i=i+1) {
    cout<<"Striver"<<endl;
}
cout<<i<<endl; // here we get an error since the scope of i dies outside of this for loop but if we want the scope to stay we can declare this i outside of the for loop.

int i;
for(i=1; i<=5;i=i+1) {
    cout<<"Striver"<<endl;
}
cout<<i<<endl; //this will now work fine
*/

// TOPIC: while loop
// THEORY: simple while loop
// converting for loop to while look
/*
int i =1;
while(i<=5) {
    cout <<"Striver" <<endl;
    i=i+1;
}
 */

// THEORY: do while loop
// if u need to execute a while look a minimum of one time then do-while helps
/*
int i=2;
do {
    cout<<"Striver"<<endl;
    i=i+1;
} while (i=1);
*/

// TOPIC: functions

// OPT: could make sumOf as a void function and cout within it instead of returning to int main()
/*
int sumOf(int num1, int num2){
    return num1+num2;
}

int main() {
    int num1, num2;
    cout<<"enter num1 and num2"<<endl;
    cin>>num1>>num2;
    cout<<sumOf(num1, num2);
    return 0;
}
*/

// THEORY: pass by reference and pass by value
// pass by value, the passed value is just a copy of the value passed and not the actual thing so any modifications made to the value inside the passed outsourced function is not reflected in the original function call variable
// pass by reference, the original number's memory address is passed therefore any modifications made is reflected in the original as well.
// NOTE: dont need &s can do &a or any other variable as well
/*
void doSomething(string &s) {
    s[0] = 't';
    cout<<"inside doSomething(): "<<s<<endl;
}
int main() {
    string s = "raj";
    doSomething(s);
    cout<<"in main(): "<<s<<endl;
    return 0;
}
*/

// NOTE: arrays are always passed by reference and never passed by value inherently even without mentioning "&", like that is the only way to pass an array you cannot pass an array by value
/*
void doSomething(int arr[], int n) {
    arr[0] +=100;
    cout<<"Value inside function: "<<arr[0]<<endl;
}
int main() {
    int n = 5;
    int arr[n];
    for (int i=0; i<n; i=i+1) {
        cin>>arr[i];
    }

    doSomething(arr,n);

    cout<<"Value inside int main: "<<arr[0]<<endl;
    return 0;
}
*/