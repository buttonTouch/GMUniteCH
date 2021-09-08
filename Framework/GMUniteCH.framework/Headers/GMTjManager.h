//
//  GMTjManager.h
//  GMUniteCH
//
//  Created by yao wang on 2021/9/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GMTjManager : NSObject
/// 初始化统计SDK
+(void)initSDK;

/// 统计事件类型1
/// @param name 统计事件名称
+(void)event:(NSString *)name;

/// 统计事件类型2
/// @param name 统计事件名称
/// @param lab 统计事件值
+(void)event:(NSString *)name label:(NSString *)lab;

/// 统计事件类型3
/// @param name 统计事件名称
/// @param params 统计事件参数值
+(void)event:(NSString *)name params:(NSDictionary *)params;
@end

NS_ASSUME_NONNULL_END
