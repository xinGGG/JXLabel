//
//  JXLabel.h
//  label上画横线
//
//  Created by Li Pan on 15-6-30.
//  Copyright (c) 2015年 JunXing Li. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JXLabel : UILabel

@property (assign, nonatomic) BOOL strikeThroughEnabled; // 是否画线

@property (strong, nonatomic) UIColor *strikeThroughColor; // 画线颜色

@end
