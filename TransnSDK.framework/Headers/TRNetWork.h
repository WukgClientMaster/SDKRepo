//
//  TRNetWork.h
//  TransnSDK
//
//  Created by 姜政 on 2017/8/17.
//  Copyright © 2017年 Transn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TRConstants.h"
#import "TRSingleton.h"

@interface TRNetWork : NSObject
SingletonH(Manager)

- (NSURLSessionDataTask *)requestURLPath:(NSString *)urlPath httpMethod:(NSString *)httpMethod parmas:(NSDictionary *)parmas completetion:(void (^) (id responseObject, NSError *error))completion;

- (void)downLoadFile:(NSString *)fileUrlPath completetion:(void (^) (NSString *filePath, NSError *error))completion;

- (void)postFile:(NSData *)fileData url:(NSString *)url name:(NSString *)name fileName:(NSString *)fileName params:(NSDictionary *)params extention:(NSString *)ext completionHandler:(void (^)(NSDictionary *returnDic, NSError *error))completionHandler;
@end
