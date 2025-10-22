#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
#define outfile1 "Employee.txt"

struct employee {
    string id , name;
    float salary , tax , tolsal , hour;
    int type;
};

void printfile(employee info[] , int n){
    ofstream ods1;
    ods1.open(outfile1);
    ods1 << "ID" << setw(10) << "Name" << setw(10) << "Type" << setw(10) << "Hours" << setw(10) << "Salary" << setw(10) << "Tax" << setw(10) << "Net" <<endl;
    for(int i = 0 ; i < n ; i ++){
        ods1 << info[i].id << setw(10) << info[i].name << setw(10) << info[i].type << setw(10) << info[i].hour << setw(10) << info[i].salary << setw(10) << info[i].tax << setw(10) << info[i].tolsal << endl;
    }
    ods1.close();
}

void sortdata1(employee info[] , int n){
    int choice;
    do{
        cout << "Do you want to sort by ?" << endl;
        cout << "1. by ID" << endl;
        cout << "2. by type of work" << endl;
        cout << "3. by hours of work" << endl;
        cout << "4. by Salary" << endl;
        cout << "5. by tax" << endl;
        cout << "6. by Net" << endl;
        cin >> choice;
            switch(choice){
                case 1:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].id < info[j+1].id){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                case 2:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].type < info[j+1].type){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                case 3:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].hour < info[j+1].hour){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                case 4:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].salary < info[j+1].salary){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                case 5:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].tax < info[j+1].tax){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                case 6:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].tolsal < info[j+1].tolsal){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                default:
                    cout << "invalid choice" << endl;
            }
    }while(choice > 6 || choice < 1);
}

void sortdata2(employee info[] , int n){
    int choice;
    do{
        cout << "Do you want to sort by ?" << endl;
        cout << "1. by ID" << endl;
        cout << "2. by type of work" << endl;
        cout << "3. by hours of work" << endl;
        cout << "4. by Salary" << endl;
        cout << "5. by tax" << endl;
        cout << "6. by Net" << endl;
        cin >> choice;
            switch(choice){
                case 1:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].id > info[j+1].id){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                case 2:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].type > info[j+1].type){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                case 3:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].hour > info[j+1].hour){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                case 4:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].salary > info[j+1].salary){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                case 5:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].tax > info[j+1].tax){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                case 6:
                    for(int i = 0 ; i < n - 1 ; i ++){
                        for(int j = 0 ; j < n - i - 1 ; j++){
                            if(info[j].tolsal > info[j+1].tolsal){
                                employee temp = info[j];
                                info[j] = info[j+1];
                                info[j+1] = temp;
                            }
                        }
                    }
                    break;
                default:
                    cout << "invalid choice" << endl;
            }
    }while(choice > 6 || choice < 1);
}

void taxcal(employee info[] , int n){
    for(int i = 0 ; i < n ; i++){
        info[i].tax = (info[i].salary * 5) / 100;
        info[i].tolsal = info[i].salary - info[i].tax;
    }
}

void salcal (employee info[] , int n){
    for(int i = 0 ; i < n ; i ++){
        switch(info[i].type) {
            case 1:
                info[i].salary = info[i].hour * 1000;
                break;
            case 2:
                info[i].salary = info[i].hour * 700;
                break;
            case 3:
                info[i].salary = info[i].hour * 500;
                break;
        }
    }
}

void Getdata(employee info[] , int n){
    int choice;
    for(int i = 0 ; i < n ; i ++){
        cout << "employee number " << i+1 << endl;
        cout << "ID: ";
        cin >> info[i].id;
        cout << "Name: ";
        cin >> info[i].name;
        cout << "Hours of work: ";
        cin >> info[i].hour;
        do{
            cout << "What department?" << endl;
            cout << "1.Software Development" << endl;
            cout << "2.Qaulity checker" << endl;
            cout << "3.Customer Services" << endl;
            cin >> info[i].type;
            if(info[i].type > 3 || info[i].type < 1) cout << "Invalid choice" << endl;
        }while(info[i].type < 1 || info[i].type > 3);
    }
}

int main(){
    int n , choice , i , c;
    cout << "How much employee?" << endl;
    cin >> n;
    employee info[n];
    Getdata(info , n);
    salcal(info , n);
    taxcal(info , n);
    do{
        cout << "Do you want to sort you data?(Yes type 1 / No type 0 )" << endl;
        cin >> i;
        if(i == 1){
            do{
                cout << "Do you want to sort from most to least (type 1) or least to most (type 2)?" << endl;
                cin >> c;
                    switch(c){
                    case 1:
                        sortdata1(info , n);
                        break;
                    case 2:
                        sortdata2(info , n);
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                    }
            }while(c > 2 || c < 1);
            break;
        }
        else if(i == 0){
            break;
        }
        else{
            cout << "Invalid choice!" << endl;
        }
    }while(true);
    printfile(info , n);
}