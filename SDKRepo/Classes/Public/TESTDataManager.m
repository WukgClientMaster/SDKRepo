//
//  TESTDataManager.m
//  AFNetworking
//
//  Created by 吴可高 on 2019/12/3.
//

#import "TESTDataManager.h"

static TESTDataManager * _dataManager = nil;

@interface TESTDataManager()<NSCopying,NSMutableCopying>

@end

@implementation TESTDataManager

+(instancetype)shared{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (_dataManager == nil) {
            _dataManager = [[self class] allocWithZone:nil];
        }
    });
    return _dataManager;
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone{
   return [self shared];
}

-(id)copyWithZone:(NSZone *)zone{
    return self;
}
-(id)mutableCopyWithZone:(NSZone *)zone{
    return self;
}


@end
