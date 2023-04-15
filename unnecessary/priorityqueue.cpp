#include <iostream>
#include <queue>
using namespace std;
  
int main()
{
    // Initialising the priority queue
    priority_queue<int, vector<int>, greater<int> > pq;
    
    // Inserting values in priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(15);
    pq.push(25);
  
    cout << "The priority queue in reverse order is : ";
      
    // Printing all elements in priority queue
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
  
    return 0;
}