//
//  GMNormalInterstitialAd.h
//  GMUniteCH
//
//  Created by Mgs on 2021/4/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GMNormalInterstitialAd : NSObject
-(void)loadAd;
-(BOOL)isAdReady;
-(void)openAdCloseCallback:(void(^)(void))callback;
@end

NS_ASSUME_NONNULL_END
