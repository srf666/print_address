//
//  main.cpp
//  print_address
//
//  Created by 20141105039 on 15/12/9.
//  Copyright (c) 2015年 20141105039. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=1;
    int *p;
    p=&a;
    printf("%d %d %x %x",a,p,&a,&p);
    return 0;
}
