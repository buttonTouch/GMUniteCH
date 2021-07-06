//
//  GMNativeAd.h
//  GMUniteCH
//
//  Created by Mgs on 2021/4/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GMNativeAd : NSObject

-(void)openWithX:(int)x Y:(int)y Width:(int)w Height:(int)h;
-(void)closeNativeAd;

@end

NS_ASSUME_NONNULL_END
