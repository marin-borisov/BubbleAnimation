//
//  BubbleInfo.h
//  BubbleAnimation
//
//  Created by Marin Borisov on 9/2/15.
//  Copyright (c) 2015 Marin Borisov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BubbleInfo : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *desc;
@property (nonatomic, strong) UIColor *bgColor;
@property (nonatomic) CGFloat titleFontSize;
@property (nonatomic) CGRect frame;

@end
