// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     list<int>myList={100,10,20,80,10,30,40,10,40,35,20};
//     // myList.remove(40);  // remove all 40 elements

//     // myList.sort(); //sort Ascending order
//     // myList.sort(greater<int>());    // Sort descending order

//     // myList.sort();
//     // myList.unique();  // Remove duplicate value But first make it sorted

//     // myList.reverse();  // To print list in reverse 

//     // cout<<myList.front();  // Access head

//     // cout<<myList.back();  // Access tail

//     // cout<<*next(myList.begin(),2);  // Access ith elements
    
//     // for(int c:myList){
//     //     cout<<c<<" ";
//     // }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class LinkedList{
    public:
    string name;
    int roll;
    int age;
    LinkedList(int roll,int age ,string name){
        this->age=age;
        this->roll=roll;
        this->name=name;
    }
};
int main()
{
    cout<<"Here is new Code!";
    LinkedList ob(32,12,"Yesin Arafat");
    cout<<ob.age<<" "<<ob.roll<<" "<<ob.name;
}