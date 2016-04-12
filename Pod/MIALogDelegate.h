//
//  AppDelegate.h
//  e-friends
//
//  Created by janven on 16/1/21.
//  Copyright © 2016年 上海帜讯信息技术股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CocoaLumberjack/CocoaLumberjack.h>
#import <MIADefine/MIADefine.h>

@interface MIALogDelegate : NSObject

HMSingletonH(Help)

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
@end

