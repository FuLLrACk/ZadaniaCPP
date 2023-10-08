#include <iostream>
#include <cmath>
using namespace std;

void ex1(){
    cout << "Exercise 1: Degrees conversion" << endl;
    double angle, result;
    cout << "Insert value of the angle in degrees: ";
    cin >> angle;
    result = (angle * M_PI)/180;
    cout << angle << " degrees is equal to " << result << " radians." << endl;
}

void ex2(){
    cout << "\n" << "Exercise 2: Calculation of sum, average and harmonic average" << endl;
    double a, b, c, sum, avg, avgh;
    cout << "Insert a: ";
    cin >> a;
    cout << "Insert b: ";
    cin >> b;
    cout << "Insert c: ";
    cin >> c;
    sum = a+b+c;
    avg = sum/3;
    avgh = 3/(a/1+b/1+c/1);
    cout << "Sum equals " << sum << "\n" << "Average equals " << avg << "\n" << "Harmonic average equals " << avgh << endl;
}

void ex3(){
    cout << "\n" << "Exercise 3: Calculating sphere's or cone's volume" << endl;
    char choice;
    double result;
    int flag = 0;
    while(flag == 0){
        cout << "Calculate volume of sphere or cone?(s = sphere, c = cone): ";
        cin >> choice;
        if(choice == 's'){
            double r;
            cout << "Insert radius: ";
            cin >> r;
            result = (4 * M_PI * pow(r, 3))/3;
            cout << "Volume of sphere equals " << result << endl;
            flag = 1;
        }
        else if(choice == 'c'){
            double r, H;
            cout << "Insert radius: ";
            cin >> r;
            cout << "Insert height: ";
            cin >> H;
            result = (M_PI * pow(r, 2) * H)/3;
            cout << "Volume of cone equals " << result << endl;
            flag = 1;
        }

        else{
            cout << "Inserted values are incorrect!" << endl;
        }
    }
}

void ex4(){
    cout << "\n" << "Exercise 4: Check if certain year is a leap year" << endl;
    int year;
    string result;
    cout << "Insert year you want to check: ";
    cin >> year;
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                result = "Year " + to_string(year) + " is a leap year";
            }else{
                result = "Year " + to_string(year) + " is not a leap year";
            }
        }else{
            result = "Year " + to_string(year) + " is a leap year";
        }
    }else{
        result = "Year " + to_string(year) + " is not leap year";
    }
    cout << result << endl;
}

void ex5(){
    cout << "\n" << "Exercise 5: Find x out of equation ax^2 + bx + c = 0" << endl;
    double a, b, c, delta, x, x1, x2;
    cout << "Insert a: ";
    cin >> a;
    cout << "Insert b: ";
    cin >> b;
    cout << "Insert c: ";
    cin >> c;
    if(a != 0){
        delta = pow(b, 2)-(4*a*c);
        if(delta > 0){
            x1 = (-b-sqrt(delta))/2*a;
            x2 = (-b+sqrt(delta))/2*a;
            cout << "x from equation " << a << "x^2 + " << b << "x + " << c << " = 0 equals " << x1 << " or " << x2;
        }else if(delta == 0){
            x = -b/(2*a);
            cout << "x from equation " << a << "x^2 + " << b << "x + " << c << " = 0 equals " << x;
        }else{
            cout << "No solutions";
        }
    }else{
        x = -c/b;
        cout << "x from equation " << a << "x^2 + " << b << "x + " << c << " = 0 equals " << x;
    }
}

int main() {
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    return 0;
}
