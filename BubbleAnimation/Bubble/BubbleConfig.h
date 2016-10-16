//
//  BubbleConfig.h
//  BubbleAnimation
//
//  Created by Marin Borisov on 9/2/15.
//  Copyright (c) 2015 Marin Borisov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BubbleInfo.h"

@interface BubbleConfig : NSObject

// Returns an Array of "BubbleInfo" objects
+(NSArray *)getBubbleInfoArray;

// Adds Tap gesture to view
+(void)addTapGestureToView:(UIView *)view
                    target:(id)target
                  selector:(SEL)selector;

@end
