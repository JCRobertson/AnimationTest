//
//  UIView+Animation.h
//  AnimationTest
//
//  Created by James Robertson on 7/10/13.
//  Copyright (c) 2013 James Robertson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Animation)

- (void) moveTo:(CGPoint)destination duration:(float)secs option:(UIViewAnimationOptions)option;

@end
