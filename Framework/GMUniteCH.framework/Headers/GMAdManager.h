//
//  GMAdManager.h
//  GMUniteCH
//
//  Created by yao wang on 2021/9/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GMAdManager : NSObject
/// 获取单利对象
+ (instancetype)sharedInstance;

/// 广告SDK初始化
-(void)initAdSdk;

/// 打开开屏广告
-(void)openSplash;

/// 打开banner广告
-(void)openBanner;
/// 关闭banner广告
-(void)closeBanner;


/// 打开原生广告
-(void)openNativeX:(int)x Y:(int)y W:(int)w H:(int)h;
/// 关闭原生广告
-(void)closeNativeAd;


/// 普通插屏广告是否加载成功
-(BOOL)isInterstitialAdReady;
/// 打开普通插屏广告
-(void)openInterstitialCallback:(void(^)(void))callback;


/// 全屏视频广告是否加载成功
-(BOOL)isFullScreenAdReady;
/// 打开全屏视频广告
-(void)openFullScreenAdCallback:(void(^)(void))callback;


/// 激励视频是否加载成功
-(BOOL)isRewardVideoAdReady;
/// 打开激励视频广告
-(void)openRewardVideoCallback:(void(^)(BOOL))callback;

@end

NS_ASSUME_NONNULL_END
