//
//  SelectableOverlay.h
//  AMapClickOverlay
//
//  Created by Captain on 2017/8/21.
//  Copyright © 2017年 CaptainSir. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MAMapKit/MAMapKit.h>

@interface SelectableOverlay : NSObject<MAOverlay>

@property (nonatomic, assign, getter = isSelected) BOOL selected;
@property (nonatomic, strong) UIColor * selectedColor;
@property (nonatomic, strong) UIColor * regularColor;

@property (nonatomic, strong) id<MAOverlay> overlay;

- (id)initWithOverlay:(id<MAOverlay>) overlay;

@end
