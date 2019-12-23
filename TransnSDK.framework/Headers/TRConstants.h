/*!
 *   TRConstants.h
 *   TransnSDK
 *
 *   Created by 姜政 on 2017/8/16.
 *   Copyright © 2018年 Transn. All rights reserved.
 *
 */

#ifndef TRConstants_h
#define TRConstants_h
#import "TRNotification.h"

#pragma mark SDK 1.5.1 2017-08-16
/**
 *   调试模式
 *
 *   - TransnDebugModeProduct: 生产环境
 *   - TransnDebugModeDevelopment: 开发环境
 *   - TransnDebugModeTest: 测试环境
 */
typedef NS_ENUM (NSInteger, TransnDebugMode) {
    TransnDebugModeProduct = 0,
    TransnDebugModeDevelopment = 1,
    TransnDebugModeTest = 2,
};




///TransnSDK 回调Block
typedef void (^ TIMCompletionBlock) (id result, NSError *error);

#define TRAPIDeprecated(instead)            NS_DEPRECATED(8_0, 8_0, 8_0, 8_0, instead)
#ifndef TRDicWithOAndK
#define TRDicWithOAndK(firstObject, ...)    [NSDictionary dictionaryWithObjectsAndKeys: firstObject, ##__VA_ARGS__, nil]
#endif

#endif /* TRConstants_h */
