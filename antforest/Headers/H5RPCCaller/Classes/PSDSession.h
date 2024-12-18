#ifndef PSDSession_h
#define PSDSession_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKSession.h"

@interface PSDSession : RVKSession
{
}

- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(id)arg3;
- (void)cancelProcess;
@property(copy, nonatomic) id cancelTask;
@property(copy, nonatomic) id destroyTask;
@property(nonatomic) _Bool isMainSession;
@property(nonatomic) __weak PSDSession *pairSession;
@property(retain, nonatomic) id processResult;
@property(nonatomic) _Bool processing;
@property(copy, nonatomic) id readyTask;
@property(copy, nonatomic) id saveTask;
- (id)session;

@end

#endif