//
//  TencentManager.h
//  CocoaAsyncSocket
//
//  Created by 姜政 on 2019/11/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TencentManager : NSObject

@property(nonatomic, copy) void (^callDidDisconnected)(NSInteger result); //断开链接
@property(nonatomic, copy) void (^callDidconnected)(NSInteger result);//已经链接上
@property(nonatomic, copy) void (^audioQuality)(NSUInteger quality);//检测当前本地网络

+(instancetype)shareInstance;

-(void)entryRoom:(NSString*)roomID;

-(void)hungup;

- (void)setSpeaker:(BOOL)isSpeakerOn;

- (void)setMute:(BOOL)isMute;

 //@return * 0: Success * < 0: Failure.
- (int)setDefaultAudioRouteToSpeakerphone:(BOOL)defaultToSpeaker;


@end

NS_ASSUME_NONNULL_END
