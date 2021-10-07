    #include <iostream>
    #include <string> 

    using namespace std;
    int main (){

    string name,Payday,employeenumber,employeestatus;
    double Philhealth, SSS, Pagibig;
    double netpay,grosspay,withholdingtax,deduction; 
    int hoursworked;
    double hourlypayrate;
    double tax = 0.12;
  
    cout<<"\nEnter Employee Name     : ";
    getline(cin,name); 
    cout<<"\nEnter Employee Number   : ";
    getline(cin,employeenumber); 
    cout<<"\nDate of PayDay          : ";
    getline (cin, Payday);
    cout<<"\nEnter Hourly Payrate    : ";
    cin >> hourlypayrate;
    cin.ignore();
    cout<<"\nNumber of Hours Worked  : ";
    cin >> hoursworked;
    cin.ignore();

    cout<<"\n----------------------------------------"<<endl;
    SSS = 250.00;
    Pagibig = 200.00;
    Philhealth = 150.00;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "You worked " <<hoursworked <<"hours and earned :" <<hourlypayrate << "per hour" <<endl;

    grosspay = hourlypayrate * hoursworked;
    deduction = SSS + Pagibig + Philhealth;
    withholdingtax = grosspay * tax;
    netpay = grosspay - withholdingtax - Philhealth - SSS - Pagibig;
     

    cout<<"\nPayroll summary for : "<< name << endl;
    
    cout<<"\nEmployee Number     : "<< employeenumber << endl;

    cout<<"\nDate of PayDay      : "<< Payday << endl;

    cout<<"\nGross pay        : "<< "Php" << grosspay;
    cout<<"\nWithholding tax  : "<< withholdingtax;
    cout<<"\nPhilhealth       : "<< Philhealth;
    cout<<"\nSSS              : "<< SSS;
    cout<<"\nPag-ibig         : "<< Pagibig;

    cout<<"\n----------------------------------------"<<endl;
    cout<<"\nNet Pay : "<< netpay <<endl;

    if (netpay<5000){
    cout <<"Employee Status: Contractual";
    }
    else if (netpay>=5000 && netpay<=10000){
    cout<<"Employee Status : Probationary";
    }
    else if (netpay>10000){
    cout<<"Employee Status : Regular";
    }
    return 0;
}