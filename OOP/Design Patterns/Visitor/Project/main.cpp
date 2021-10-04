#include <iostream>
#include "Employee.h"
#include "Group.h"
#include "PrintVisitor.h"
#include "SearchVisitor.h"
#include "CountVisitor.h"
#include <string>

using namespace std;

Node* BuildAppleCo()
{
	Group* root = new Group("Apple");
	Employee* CEO = new Employee("Tim", "Cook", "CEO");
        Group* VPs = new Group("VP");
        Employee* VPEng = new Employee("Craig", "Federighi", "VP of Engineering");
        Employee* VPDesign = new Employee("Jonathan", "Ive", "VP of Design");
        Employee* VPMarketing = new Employee("Phillip","Schiller", "VP of Marketing");

        root->AddChild(CEO);
        root->AddChild(VPs);
        VPs->AddChild(VPEng);
        VPs->AddChild(VPDesign);
        VPs->AddChild(VPMarketing);
        Group* iPadGroup = new Group("iPad");
        Group* iWatchGroup = new Group("Smartwatch");
        Group* iPhoneGroup = new Group("iPhone");
        Employee* iPadDesigner = new Employee ("Phillip","Smith", "Designer");
        VPs->AddChild(iPadGroup);
        VPs->AddChild(iWatchGroup);
        VPs->AddChild(iPhoneGroup);
        iPhoneGroup->AddChild(iPadDesigner);
	return root;
}

int main()
{
    
	Node* AppleCo = BuildAppleCo();
	PrintVisitor* pVisitor = new PrintVisitor();
	AppleCo->Accept(pVisitor);
	cout<<"______________________"<<endl << endl;
        SearchVisitor* sVisitor = new SearchVisitor();
        
        string craigQuery="Craig Federighi";
        sVisitor->setQuery(craigQuery);
        AppleCo->Accept(sVisitor);
        sVisitor->PrintResults();
        sVisitor->Reset();
        
        string ipadQuery="iPhone";
        sVisitor->setQuery(ipadQuery);
        AppleCo->Accept(sVisitor);
        sVisitor->PrintResults();
        sVisitor->Reset();
        
        string philQuery="Phillip";
        sVisitor->setQuery(philQuery);
        AppleCo->Accept(sVisitor);
        sVisitor->PrintResults();
        sVisitor->Reset();

        string cookQuery="Cook";
        sVisitor->setQuery(cookQuery);
        AppleCo->Accept(sVisitor);
        sVisitor->PrintResults();
        sVisitor->Reset();

        string DNEQuery="DNE";
        sVisitor->setQuery(DNEQuery);
        AppleCo->Accept(sVisitor);
        sVisitor->PrintResults();
        sVisitor->Reset();

	cout<<"______________________"<<endl << endl;
        CountVisitor* cVisitor = new CountVisitor();
	AppleCo->Accept(cVisitor);
        cVisitor->PrintResults();
        cVisitor->Reset();

	delete AppleCo;
        delete cVisitor;
        delete sVisitor;
        delete pVisitor;

}
