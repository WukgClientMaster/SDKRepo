/*!
 *   TransnMessageStorage.h
 *   TransnSDK
 *
 *   Created by 姜政 on 2018/1/23.
 *   Copyright © 2018年 Transn. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>
#import "TRSingleton.h"

typedef NS_ENUM (NSInteger, TransnMessageStoreMode) {
    /*!SDK内部方法，存到sqlite中去了*/
    TransnMessageStoreDefault = 0,
    ///让xmpp协议自己保存到coredata中了
    TransnMessageStoreXMPP = 1,
    ///全部存储,性能消耗会大一倍
    TransnMessageStoreAll = 2,
};
@interface TransnMessageStorage : NSObject

SingletonH(Storage)

///消息存储方法,默认为TransnMessageStoreDefault
@property (nonatomic, assign) TransnMessageStoreMode messageStoreMode;
@end
