//
//  Dog.h
//  podtest
//
//  Created by bt on 2019/4/8.
//  Copyright © 2019年 lijie. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Dog : NSObject
@property(nonatomic,copy)NSString *name;
@property(nonatomic,assign)float age;
- (void)eat;
- (void)play;
@end

NS_ASSUME_NONNULL_END
