/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGDirectKeyboardTextViewControllerDelegate <NSObject>
@optional
-(char)keyboardTextViewController:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)keyboardTextViewController:(id)arg1 textViewWillBeginEditing:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 textViewDidBeginEditing:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 textViewDidEndEditing:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 textViewDidChange:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 didObserveKeyboardFrameChangingToFrame:(CGRect)arg2;

@required
-(void)keyboardTextViewController:(id)arg1 didTapSendWithText:(id)arg2;
-(void)keyboardTextViewControllerDidTapCamera:(id)arg1;
-(void)keyboardTextViewControllerDidTapLike:(id)arg1;
-(void)keyboardTextViewController:(id)arg1 didChangeContentHeightToHeight:(float)arg2;
-(void)keyboardTextViewControllerDidDismissCamera:(id)arg1;
-(void)keyboardTextViewControllerDidTapCameraBackButton:(id)arg1;

@end

