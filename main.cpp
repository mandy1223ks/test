//what~
//
//  main.cpp
//  hw2_1
//
//  Created by 李沂珊 on 2019/10/2.
//  Copyright © 2019 李沂珊. All rights reserved.
//

#include <iostream>
using namespace std;

namespace spaceone{
    double length;
    double width;
    double high;
    void compute(){cout<<(length*width*high)<<endl;}
}

using namespace spaceone;

namespace{
    double max,min;
    void com(){
        if(length>width){
            max=length;
            min=width;
            if(high>length)
                max=high;
            else if(high<width)
                min=high;
        }
        else{
            max=width;
            min=length;
            if(high<length)
                min=high;
            else if(high>width)
                max=high;
        }
    }
    void display(){
        cout<<"the smallest side is"<<min<<endl;
        cout<<"the largest side is"<<max<<endl;
    }
}


int main() {
    cout<<"enter three sides of a box:";
    cin>>length>>width>>high;
    compute();
    com();
    display();
    return 0;
}
