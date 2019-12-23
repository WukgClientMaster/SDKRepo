//
//  TRSingleton.h
//  TransnSDK
//
//  Created by 姜政 on 2017/8/17.
//  Copyright © 2017年 Transn. All rights reserved.
//

#ifndef TRSingleton_h
#define TRSingleton_h

// 帮助实现单例设计模式
// 单例
#define SingletonH(methodName) \
\
+ (instancetype)shared##methodName;

#define SingletonM(methodName) \
\
+ (instancetype)shared##methodName    { \
static id _instace = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
    _instace = [[self alloc] init];  \
}); \
return _instace; \
}

// .h文件的实现
//#define SingletonH(methodName) + (instancetype)shared##methodName;
//
//// .m文件的实现
//#if __has_feature(objc_arc) // 是ARC
//#define SingletonM(methodName)                       \
//static id _instace = nil;                          \
//+ (id)allocWithZone:(struct _NSZone *)zone         \
//{                                                  \
//if (_instace == nil) {                         \
//static dispatch_once_t onceToken;          \
//dispatch_once(&onceToken, ^{               \
//_instace = [super allocWithZone:zone]; \
//});                                        \
//}                                              \
//return _instace;                               \
//}                                                  \
//\
//- (id)init                                         \
//{                                                  \
//static dispatch_once_t onceToken;              \
//dispatch_once(&onceToken, ^{                   \
//_instace = [super init];                   \
//});                                            \
//return _instace;                               \
//}                                                  \
//\
//+ (instancetype)shared##methodName                 \
//{                                                  \
//return [[self alloc] init];                    \
//}                                                  \
//+ (id)copyWithZone:(struct _NSZone *)zone          \
//{                                                  \
//return _instace;                               \
//}                                                  \
//\
//+ (id)mutableCopyWithZone:(struct _NSZone *)zone   \
//{                                                  \
//return _instace;                               \
//}
//
//#else // 不是ARC
//
//#define SingletonM(methodName)                       \
//static id _instace = nil;                          \
//+ (id)allocWithZone:(struct _NSZone *)zone         \
//{                                                  \
//if (_instace == nil) {                         \
//static dispatch_once_t onceToken;          \
//dispatch_once(&onceToken, ^{               \
//_instace = [super allocWithZone:zone]; \
//});                                        \
//}                                              \
//return _instace;                               \
//}                                                  \
//\
//- (id)init                                         \
//{                                                  \
//static dispatch_once_t onceToken;              \
//dispatch_once(&onceToken, ^{                   \
//_instace = [super init];                   \
//});                                            \
//return _instace;                               \
//}                                                  \
//\
//+ (instancetype)shared##methodName                 \
//{                                                  \
//return [[self alloc] init];                    \
//}                                                  \
//\
//- (oneway void)release                             \
//{                                                  \
//\
//}                                                  \
//\
//- (id)retain                                       \
//{                                                  \
//return self;                                   \
//}                                                  \
//\
//- (NSUInteger)retainCount                          \
//{                                                  \
//return 1;                                      \
//}                                                  \
//+ (id)copyWithZone:(struct _NSZone *)zone          \
//{                                                  \
//return _instace;                               \
//}                                                  \
//\
//+ (id)mutableCopyWithZone:(struct _NSZone *)zone   \
//{                                                  \
//return _instace;                               \
//}
//#endif /* if __has_feature(objc_arc) */

#endif /* TRSingleton_h */
