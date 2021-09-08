//
//  GamaTimer.h
//  AAA
//
//  Created by yao wang on 2021/9/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GamaTimer : NSObject
-(instancetype)initWithInterval:(NSInteger)i callback:(void(^)(void))cb;
-(void)pause;
-(void)resume;
@end

NS_ASSUME_NONNULL_END
