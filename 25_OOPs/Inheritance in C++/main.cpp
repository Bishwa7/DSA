#include <bits/stdc++.h>
using namespace std;

// Employee class
class Employee
{
    protected:
    string name;
    int empId;
    
    public:
    Employee(string _name, int _empId)
    {
        this->name = _name;
        this->empId = _empId;
    }
    
    void display()
    {
        cout<<"Employee : "<< this->name <<" ID : "<< this->empId <<endl;
    }
};


// Developer class
class Developer : public Employee
{
    private:
    string programmingLang;
    
    public:
    Developer(string _name, int _empId, string _programmingLang): Employee(_name, _empId)
    {
        this->programmingLang = _programmingLang;
    }
    
    void show()
    {
        cout<<"Specialization: Developer, Programming Language: " << this->programmingLang<<endl;
    }
};


// Executive class
class Executive : public Employee
{
    public:
    Executive(string _name, int _empId): Employee(_name, _empId)
    {
        
    }
    
    
    void makeExeDecision()
    {
        cout<<" Decision of executive"<<endl;
    }
};


// Ceo class
class Ceo : public Executive
{
    public:
    Ceo(string _name, int _empId): Executive(_name, _empId)
    {
        
    }
    
    void leadCompany()
    {
        makeExeDecision();
        cout<<" Ceo leads company"<<endl;
    }
};


// SalesManager class
class SalesManager : public Employee
{
    public:
    SalesManager(string _name, int _empId) : Employee(_name, _empId)
    {
        
    }
    
    void boostSales()
    {
        cout<<" Sales manager boosts sales"<<endl;
    }
};


// MarketingManager class
class MarketingManager : public Employee
{
    public:
    MarketingManager(string _name, int _empId) : Employee(_name, _empId)
    {
        
    }
    
    void createMarketingStrategy()
    {
        cout<<" Marketing manager creates maketing strategies"<<endl;
    }
};


// BusinessDevManager class
class BusinessDevManager : public SalesManager, public MarketingManager
{
    public:
    BusinessDevManager(string _name, int _empId) : SalesManager(_name, _empId), MarketingManager(_name, _empId)
    {
        
    }
    
    void coordinatesBusinessDev()
    {
        boostSales();
        createMarketingStrategy();
        cout<<" Business development manager coordinates business development efforts"<<endl;
    }
};



// HRManager class
class HRManager : public Employee
{
    public:
    HRManager(string _name, int _empId): Employee(_name, _empId)
    {
        
    }
    
    void handleHRDuties()
    {
        cout<<" HR manager handles HR duties"<<endl;
    }
};


// HRDirector class
class HRDirector : public HRManager
{
    public:
    HRDirector(string _name, int _empId): HRManager(_name, _empId)
    {
        
    }
    
    void manageHRDep()
    {
        handleHRDuties();
        cout<<" HR Director manages HR Department "<<endl;
    }
};


// ProjectManager class
class ProjectManager
{
    protected:
    string projectManaged;
    
    public:
    
    ProjectManager(string _projectManaged)
    {
        this->projectManaged = _projectManaged;
    }
    
    void manageProject()
    {
        cout<<"Project Manager manages Projects : "<< this->projectManaged <<endl;
    }
};


// TeamLead class
class TeamLead
{
    protected:
    int teamSize;
    
    public:
    TeamLead(int _teamSize)
    {
        this->teamSize = _teamSize;
    }
    
    
    void leadTeam()
    {
        cout<<"Team Lead leads the entire team of "<< this->teamSize <<" members"<<endl;
    }
};


// TechLead class
class TechLead : public Employee, public ProjectManager, public TeamLead
{
    public:
    TechLead(string _name, int _empId, string _projectManaged, int _teamSize): Employee(_name, _empId), ProjectManager(_projectManaged), TeamLead(_teamSize)               
    {
        
    }
    
    void displayInfo()
    {
        display();
        manageProject();
        leadTeam();
    }
};





int main()
{
    //Single Inheritance
    Developer dev("Ramu Kaka", 101, "C++");
    dev.show();

    // Multiple Inheritance
    TechLead techLead("Anna Dev", 202, "Project X", 5);
    techLead.displayInfo();

    // Multi-level Inheritance
    HRDirector hrDirector("Lucy Madam", 303);
    hrDirector.handleHRDuties();
    hrDirector.manageHRDep();

    // Hierarchical Inheritance
    Ceo ceo1("Devi Lal", 404);
    ceo1.leadCompany();

    // Hybrid Inheritance
    BusinessDevManager bdManager("Sam Uncle", 606);
    bdManager.coordinatesBusinessDev();
    

    return 0;
}