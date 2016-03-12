//
//  CourtesyTextView.m
//  Courtesy
//
//  Created by Zheng on 3/12/16.
//  Copyright © 2016 82Flex. All rights reserved.
//

#import "CourtesyTextView.h"

@implementation CourtesyTextView

- (void)setContentSize:(CGSize)contentSize {
    [super setContentSize:CGSizeMake(self.contentSize.width + self.minContentSize.width, self.contentSize.height + self.minContentSize.height)];
}

- (YYTextContainerView *)yyContainerView {
    Ivar iVar = class_getInstanceVariable([YYTextView class], [[NSString stringWithFormat:@"_%@", @"containerView"] UTF8String]);
    id propertyVal = object_getIvar(self, iVar);
    CYLog(@"Access private ival of YYTextView -> _containerView.");
    NSAssert(propertyVal != nil, @"_containerView is nil!");
    return propertyVal;
}

@end
