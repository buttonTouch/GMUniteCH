//
//  GMBaseAd.h
//  GMUniteCH
//
//  Created by yao wang on 2021/9/8.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, GMAdStatus) {
    NotStart,
    Loading,
    LoadSuccess,
    LoadFailed,
    LaunchOpen,
    Displaying,
    DisplayComplete,
    DisplayFailed,
    Skiped,
    Clicked,
    RewardUser,
    Closed
};
typedef NS_ENUM(NSInteger, GMAdType) {
    Splash,
    Banner,
    NativeBanner,
    Interstitial,
    NativeInterstitial,
    FullScreen,
    RewardVideo
};
NS_ASSUME_NONNULL_BEGIN

@interface GMBaseAd : NSObject
@property(nonatomic,assign)GMAdType mAdType;

@property(nonatomic,assign)GMAdStatus mAdStatus;

@property(nonatomic,copy)NSString *mAdId;

@property(nonatomic,strong)UIViewController *mVc;

@property(nonatomic,copy)NSString *errorMsg;

@property(nonatomic,assign)NSInteger errorCode;

-(instancetype)initWithId:(NSString *)adId type:(GMAdType)type control:(UIViewController*)vc;

-(void)loadAd;

-(BOOL)isAdReady;

-(void)openAd;

-(void)closeAd;

@end

NS_ASSUME_NONNULL_END
