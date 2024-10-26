#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>myList={10,20,30};
    // // list<int>newList=myList; // Assign anither List
    // list<int>newList;
    // newList.assign(myList.begin(),myList.end());

    // list<int>myList={10,20,30,40,50};
    // myList.push_back(100);  // add an element in tail
    // myList.push_back(200);

    // myList.push_front(100); //Add an element in front
    // myList.push_front(200);

    // myList.pop_back(); // Delete the tail
    // myList.pop_front();//Delete the head

    list<int>newList={100,200,300};
    list<int> myList = {10, 20, 30,30,30,30, 40, 50};
    // myList.insert(next(myList.begin(), 4), 100);  //Insert value in position
    // myList.insert(next(myList.begin(),2),{10 , 20 ,30 ,40});   // Insert Multiple value
    // myList.insert(next(myList.begin(),2),newList.begin(),newList.end());  // Insert another list

    //  list<int> myList = {10, 20, 30, 40, 50};
    //  myList.erase(next(myList.begin(),7));    // Delete any Position
    // myList.erase(next(myList.begin(),2),next(myList.begin(),4));  // Delete multiple value

    // replace(myList.begin(),myList.end(),30,200);  //sob gulo 30 replace hoye 200 hobe

    auto it= find(myList.begin(),myList.end(),10);
    if(it==myList.end()){
        cout<<"NOT FIND";
    }
    else{
        cout<<"FIND";
    }
    // for (int val : myList)
    // {
    //     cout << val << " ";
    // }
    return 0;
}