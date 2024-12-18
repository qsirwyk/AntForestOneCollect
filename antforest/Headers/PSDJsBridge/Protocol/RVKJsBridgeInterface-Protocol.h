#ifndef RVKJsBridgeInterface_Protocol_h
#define RVKJsBridgeInterface_Protocol_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol RVKJsBridgeInterface <NSObject>
- (void)callHandler:(NSString *)arg1;
- (void)callHandler:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)callHandler:(NSString *)arg1 data:(NSDictionary *)arg2 responseCallback:(void (^)(id))arg3;
- (void)callJsApi:(NSString *)arg1 url:(NSString *)arg2 data:(NSDictionary *)arg3 responseCallback:(void (^)(id))arg4;
@end

#endif