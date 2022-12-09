//ibrahim ayyad compsci data structures
//due dec 8th
#include <iostream>
#include <string>
#include <queue>

void move_to_rear(queue queue1){
    if (!empty(queue1)) {
        queue queue2;
        int first = queue1.front();
        while(1) {
            int temp = queue1.pop();
            if(temp == first) {queue1.push(temp); break;}
            queue2.push(temp);
        }
    while(!empty(queue2))
    {
    queue1.push(queue2.pop());
    }
}
}