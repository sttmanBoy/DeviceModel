//
//  UIDevice+DeviceModel.h
//  MySelfGUI
//
//  Created by shitaotao on 16/5/16.
//  Copyright © 2016年 sttman_boy. All rights reserved.
//

#import <UIKit/UIKit.h>

UIKIT_EXTERN NSString *const Device_Simulator;
UIKIT_EXTERN NSString *const Device_iPod1;
UIKIT_EXTERN NSString *const Device_iPod2;
UIKIT_EXTERN NSString *const Device_iPod3;
UIKIT_EXTERN NSString *const Device_iPod4;
UIKIT_EXTERN NSString *const Device_iPod5;
UIKIT_EXTERN NSString *const Device_iPad2;
UIKIT_EXTERN NSString *const Device_iPad3;
UIKIT_EXTERN NSString *const Device_iPad4;
UIKIT_EXTERN NSString *const Device_iPhone4;
UIKIT_EXTERN NSString *const Device_iPhone4S;
UIKIT_EXTERN NSString *const Device_iPhone5;
UIKIT_EXTERN NSString *const Device_iPhone5S;
UIKIT_EXTERN NSString *const Device_iPhone5C;
UIKIT_EXTERN NSString *const Device_iPadMini1;
UIKIT_EXTERN NSString *const Device_iPadMini2;
UIKIT_EXTERN NSString *const Device_iPadMini3;
UIKIT_EXTERN NSString *const Device_iPadAir1;
UIKIT_EXTERN NSString *const Device_iPadAir2;
UIKIT_EXTERN NSString *const Device_iPhone6;
UIKIT_EXTERN NSString *const Device_iPhone6plus;
UIKIT_EXTERN NSString *const Device_iPhone6S;
UIKIT_EXTERN NSString *const Device_iPhone6Splus;
UIKIT_EXTERN NSString *const Device_iPhoneSE;
UIKIT_EXTERN NSString *const Device_Unrecognized;

@interface UIDevice (DeviceModel)

-(NSString *)deviceModel;

@end
