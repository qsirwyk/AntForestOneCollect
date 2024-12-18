#ifndef H5RPCCaller_h
#define H5RPCCaller_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTRpcAsyncCaller, PSDSession;

@interface H5RPCCaller : NSObject
{
    DTRpcAsyncCaller *_jsRpc;
    PSDSession *_session;
}

- (void)callRPC:(id)arg1 completeBlock:(id)arg2;
- (void)cancel;
- (void)dealloc;
- (id)getAppKeyWithGateWay:(id)arg1;
- (_Bool)isFinished;
@property(nonatomic) __weak PSDSession *session; // @synthesize session=_session;

@end

#endif