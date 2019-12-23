//
//  TencentCloudSettingManager.h
//  CocoaAsyncSocket
//
//  Created by 吴可高 on 2019/12/19.
//

#import <Foundation/Foundation.h>
#import "TRTCCloudDef.h"
#import "TRTCAudioConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface TencentCloudSettingManager : NSObject

@property (nonatomic) TRTCAppScene scene;
@property (strong, nonatomic) TRTCParams *params;
@property (strong, nonatomic, readonly) TRTCAudioConfig *audioConfig;

@end

NS_ASSUME_NONNULL_END
