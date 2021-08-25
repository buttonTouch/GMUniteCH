//
//  GMTools.h
//  GMUnite
//
//  Created by Mgs on 2021/4/23.
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
@interface GMTools : NSObject

//绑定App 的window 和根控制器
+(void)bindWindow:(UIWindow *)window rootViewControl:(UIViewController *)vc;

/// 获取window
+(UIWindow *)getWindow;

/// 获取控制器
+(UIViewController *)getViewControl;

/// 获取版本号
+(NSString*)getVersion;

/// 判断是否是iPhone X 系列手机
+(BOOL)isIPhoneXSeries;

/// 手机系统语言是否是简体中文
+(BOOL)isSimpleChinese;

/// 获取手机系统语言
+(GamaLanguageType)getDeviceLanguage;

/// 检查网络是否可用 0:没有网络 1:WWAN  2:WIFI
+(int)getNetworkStatus;

/// 振动
+(void)vibrate:(int)time;

/// 是否是下载首日
+(BOOL)isDownloadFirstDay;

/// 屏幕上显示提示文字 1.5秒后消失
/// @param message 提示信息
+(void)showMessage:(NSString *)message;

/// 显示加载页
+(void)showLoadingView;

/// 隐藏加载页
+(void)hiddonLoading;

+(void)openWebWithURL:(NSString *)URLString;

/// 获取设置唯一标识
/// 获取设置唯一标识需要用keychain相关的内容 在项目的targets -> sgining&capabilipies 添加 Keychina sharing  设置值为包名
+(NSString *)getDeviceUniqueId;

/// 打开用户评价
+(void)openRate;

#pragma mark - Post请求获取数据
+(void)POST:(NSString *)urlString Param:(NSDictionary <NSString *,NSString *>*)params header:(NSDictionary <NSString *,NSString *>*)headers callback:(void(^)(BOOL isSuccess,id response))callback;

#pragma mark - Get请求获取数据
+(void)Get:(NSString *)urlString Param:(NSDictionary <NSString *,NSString *>*)params header:(NSDictionary <NSString *,NSString *>*)headers callback:(void(^)(BOOL isSuccess,id response))callback;

@end

NS_ASSUME_NONNULL_END
