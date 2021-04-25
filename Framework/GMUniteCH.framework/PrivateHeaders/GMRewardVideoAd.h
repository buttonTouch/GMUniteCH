//
//  GMRewardVideoAd.h
//  GMUniteCH
//
//  Created by Mgs on 2021/4/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GMRewardVideoAd : NSObject
-(void)loadAd;
-(BOOL)isAdReady;
-(void)openAdCloseCallback:(void(^)(BOOL))callback;
@end

NS_ASSUME_NONNULL_END
