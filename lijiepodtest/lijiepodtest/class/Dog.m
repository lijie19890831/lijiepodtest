//
//  Dog.m
//  podtest
//
//  Created by bt on 2019/4/8.
//  Copyright © 2019年 lijie. All rights reserved.
//

#import "Dog.h"

@implementation Dog
- (void)eat{
    NSLog(@"the %@ is eatting",self.name);
}
- (void)play{
    NSLog(@"the %@ is playing",self.name);
}
@end
