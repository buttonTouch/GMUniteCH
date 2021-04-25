//
//  GMCoreManager.h
//  GMUniteCH
//
//  Created by Mgs on 2021/4/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface GMCoreManager : NSObject

/// 游戏启动时调用
+(void)didFinishLaunchWithApplication:(UIApplication *)application
                              options:(NSDictionary *)launchOptions
                               window:(UIWindow *)win
                          rootControl:(UIViewController *)vc;

/// 应用进入激活状态
+(void)applicationDidBecomeActive;

/// 从前台切换到后台
+(void)applicationWillResignActive;

/// 进入后台状态
+(void)applicationDidEnterBackground;

/// 用户杀死进程
+(void)applicationWillTerminate;

@end

NS_ASSUME_NONNULL_END
