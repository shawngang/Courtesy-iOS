//
//  CourtesyCardPreviewStyleModel.h
//  Courtesy
//
//  Created by Zheng on 3/14/16.
//  Copyright © 2016 82Flex. All rights reserved.
//

typedef enum : NSUInteger {
    kCourtesyCardPreviewStyleDefault = 0,
    kCourtesyCardPreviewStyleLeaf = 1,
    kCourtesyCardPreviewStylePoker = 2,
    kCourtesyCardPreviewStyleMelody = 3,
    kCourtesyCardPreviewStyleBlood = 4
} CourtesyCardPreviewStyleType;

typedef enum : NSUInteger {
    kCourtesyCardPreviewBodyStretch = 0,
    kCourtesyCardPreviewBodyRepeat  = 1,
} CourtesyCardPreviewBodyMethod;

@interface CourtesyCardPreviewStyleModel : NSObject
@property (nonatomic, strong) UIImage *previewCheckmark;
@property (nonatomic, strong) UIImage *previewHeader;
@property (nonatomic, strong) UIImage *previewBody;
@property (nonatomic, strong) UIImage *previewFooter;
@property (nonatomic, strong) NSString *previewFooterText;
@property (nonatomic, assign) CourtesyCardPreviewBodyMethod bodyMethod;
@property (nonatomic, assign) CGPoint originPoint;

@end