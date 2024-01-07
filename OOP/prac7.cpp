// prac 7
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){

    map<string,float> m;
    // m["Maharastra"]=23;
    m.insert({"chandori",0.00025});
    m.insert({"ok om",200});
    m.insert(pair<string, float>("Maharashtra", 125));
	m.insert(pair<string, float>("Uttar Pradesh", 225));
	m.insert(pair<string,int>("Bihar", 120)); 
	m.insert(pair<string,int>("West Bengal", 100)); 
	m.insert(make_pair("Madhya Pradesh", 90)); 
	m.insert(make_pair("Tamil Nadu", 80)); 
	m.insert(make_pair("Rajasthan", 78));
	m.insert(make_pair("Andhra Pradesh", 53));
	m.insert(make_pair("Odisha", 47));
	m.insert(make_pair("Kerala", 38));
	m.insert(make_pair("Telangana", 37));
	m.insert(make_pair("Assam", 35));
	m.insert(make_pair("Jharkhand", 38));
	m.insert(make_pair("Karnataka", 68));
	m.insert(make_pair("Gujarat", 70));
	m.insert(make_pair("Punjab", 31));
	m.insert(make_pair("Chhattisgarh", 30));
	m.insert(make_pair("Haryana", 29));
	m.insert(make_pair("UT Delhi", 19));
	m.insert(make_pair("UT Jammu and Kashmir", 14));
	m.insert(make_pair("Uttarakhand", 12));
	m.insert(make_pair("Himachal Pradesh", 8));
	m.insert(make_pair("Tripura", 04));
	m.insert(make_pair("Meghalaya", 4));
	m.insert(make_pair("Manipur", 3));
	m.insert(make_pair("Nagaland", 2));
	m.insert(make_pair("Goa", 2));
	m.insert(make_pair("Arunachal Pradesh", 2));
	m.insert(make_pair("UT Puducherry", 2));
	m.insert(make_pair("Mizoram", 1));
	m.insert(make_pair("UT Chandigarh", 1));
	m.insert(make_pair("Sikkim", 1));
	m.insert(make_pair("UT Dadra and Nagar Haveli and Daman and Diu", 1));
	m.insert(make_pair("UT Andaman and Nicobar Islands", 1));
	m.insert(make_pair("UT Lakshadweep", 0.0003));
	m.insert(make_pair("UT Ladakh", 0.00006));

    string population;
    char op;

    for(auto s: m){
        cout<<s.first<<" "<<s.second<<endl;
    }

    // for(auto i=m.begin();i!=m.end();i++){
    //     cout<<i->first<<" "<<i->second<<endl;
    // }

        do{
        cout<<"which state population do you wnat to find: ";
        cin.ignore();
        getline(cin,population);

        auto it=m.find(population);
        if(it!=m.end())
        cout<<"Population is: "<<(*it).second<<endl;
        else
        cout<<"Given state is not present or you mistype it"<<endl;
		
        cout<<"\nDo you want to continue(y/n): ";
        cin>>op;

        }while(op!='n');


}