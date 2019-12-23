//
//  ChatOrderManger+Private.h
//  TransnSDK
//
//  Created by Fan Lv on 16/10/27.
//  Copyright © 2016年 Transn. All rights reserved.
//

#import "ChatOrderManger.h"
@interface ChatOrderManger (Private)

- (void)hangupVoiceCall;

-(void)startFlow:(NSString *)flowId linkType:(NSString *)linkType;

#pragma mark  发送Tips 消息大全
//通话中被挂断，补发挂断消息。
-(TransnMessage *)sendHungUpTip;

//杀死了app
-(TransnMessage *)sendKillAppTip;
//IM30秒超时
-(TransnMessage *)sendIMTimeOutTip;
//用户取消订单
-(TransnMessage *)sendUserCancleOrderTip;
//预扣费检查
-(TransnMessage *)sendBalanceCheckResultTips:(NSString *)tips;
//确认订单
-(TransnMessage *)sendUserConfirmTheOrderTip;
//支持短语音
-(TransnMessage *)sendSupportVoiceTip;
//心跳包
- (TransnMessage *)sendHeartBreakTip;
//用户使用语音通话
-(void)sendUserUseVoiceTip;
//用户退出语音通话
-(void)sendUserExitVoiceTip;

//系统tips
- (void)sendSystemTip:(NSString *)text;
///发送tips 消息
-(TransnMessage *)sendTip:(NSString *)tips;

- (void)sendTipMessage:(NSString *)tipStr toUser:(NSString *)userID flowdID:(NSString *)fid tryTime:(int)tryTime;

-(void)handleAdminMessage:(XMPPMessage *)message;
@end
