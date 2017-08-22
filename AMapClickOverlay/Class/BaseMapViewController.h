//
//  BaseMapViewController.h
//  AMapClickOverlay
//
//  Created by Captain on 2017/8/21.
//  Copyright © 2017年 CaptainSir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MAMapKit/MAMapKit.h>

@interface BaseMapViewController : UIViewController<MAMapViewDelegate>

@property (nonatomic, strong) MAMapView *mapView;

@end
