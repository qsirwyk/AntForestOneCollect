#ifndef UITextFieldDelegate_Protocol_h
#define UITextFieldDelegate_Protocol_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIMenu, UITextField;
@protocol UIEditMenuInteractionAnimating;

@protocol UITextFieldDelegate <NSObject>

@optional
- (UIMenu *)textField:(UITextField *)arg1 editMenuForCharactersInRange:(struct _NSRange)arg2 suggestedActions:(NSArray *)arg3;
- (_Bool)textField:(UITextField *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)textField:(UITextField *)arg1 willDismissEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)textField:(UITextField *)arg1 willPresentEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)textFieldDidBeginEditing:(UITextField *)arg1;
- (void)textFieldDidChangeSelection:(UITextField *)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg1 reason:(long long)arg2;
- (_Bool)textFieldShouldBeginEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldClear:(UITextField *)arg1;
- (_Bool)textFieldShouldEndEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldReturn:(UITextField *)arg1;
@end

#endif