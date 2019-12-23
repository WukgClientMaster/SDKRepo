//
//  ReservationManager.h
//  TransnSDK
//
//  Created by 姜政 on 2018/4/20.
//  Copyright © 2018年 Transn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TransnReservation.h"
#import "TRConstants.h"
#import "TransnMessage.h"
#import "TransnFileObject.h"


@interface ReservationManager : NSObject
/**
 *  预约单上传文件获取文件ID
 *  @param translateObject  需要翻译的内容
 *  @param completion   回调
 */
-(void)upLoadFile:(TransnFileObject *)translateObject
     completetion:(TIMCompletionBlock)completion;
/**
 *  预约单订单预估时长
 *  @param translateObjects  需要翻译的内容,请先把TransnFileObject的langId设置好
 *  @param completion   回调
 */
-(void)estimateFile:(NSArray<TransnFileObject*> *)translateObjects
       completetion:(TIMCompletionBlock)completion;
/**
 *  预约单下单
 *  @param reservation 预约单对象，TransnReservation.transnFileObjects对象必须已经获取了fileId，并且它们的原语种和目标语种的ID必须跟其它的一样
 *  @param completion   回调
 */
-(void)submitReservation:(TransnReservation *)reservation
            completetion:(void (^)(TransnReservation *reservation,NSError *error))completion;

/**
 *  预约单留言
 *  @param content 留言内容
 *  @param sourceId 留言的业务方订单id
 *  @param completion   回调
 */
-(void)leaveMessage:(NSString *)content  sourceId:(NSString *)sourceId completetion:(TIMCompletionBlock)completion;

/**
 *  预约单留言
 *  @param image 留言图片
 *  @param sourceId 留言的业务方订单id
 *  @param completion   回调
 */
-(void)leaveImageMessage:(UIImage *)image  sourceId:(NSString *)sourceId completetion:(TIMCompletionBlock)completion;
@end
