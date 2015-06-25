//
//  QQButton.h
//  QQBtn
//
//  Created by MacBook on 15/6/25.
//  Copyright (c) 2015年 维尼的小熊. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QQButton : UIButton

/** 大圆脱离小圆的最大距离 */
@property (nonatomic, assign) CGFloat        maxDistance;

/** 小圆 */
@property (nonatomic, strong) UIView         *samllCircleView;

/** 按钮消失的动画图片组 */
@property (nonatomic, strong) NSMutableArray *images;


@end
