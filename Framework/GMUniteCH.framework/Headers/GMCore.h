//
//  GMCore.h
//  GMUniteCH
//
//  Created by yao wang on 2021/9/8.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, GamaLanguageType) {
    Gama_SimpleChinese,//简体中文
    Gama_TraditionalChinese,//繁体中文
    Gama_Japanese,//日语
    Gama_Korean,//韩语
    Gama_English,//英语
    Gama_French,//法语
    Gama_Italian,//意大利语
    Gama_German,//德语
    Gama_Russian,//俄语
    Gama_Spanish//西班牙语
};
typedef NS_ENUM(NSInteger, GamaNetWork) {
    Gama_UNKNOW,//未知网络
    Gama_WWAN,//蜂窝网络
    Gama_WIFI,//WIFI网络
    Gama_Broken//断网状态
};

@interface GMCore : NSObject
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

/// 获取application
+(UIApplication *)getApplication;

/// 获取window
+(UIWindow *)getWindow;

/// 获取控制器
+(UIViewController *)getViewControl;

/// 判断是否是iPhone X 系列手机
+(BOOL)isIPhoneXSeries;

/// 获取手机系统语言
+(GamaLanguageType)getDeviceLanguage;

/// 振动
+(void)vibrate:(int)time;

+(GamaNetWork)getNetworkStatus;

+(void)openWeb:(NSString *)url;

+(void)showMessage:(NSString *)message;
+(void)showLoadingView;
+(void)hiddonLoading;

@end

NS_ASSUME_NONNULL_END
