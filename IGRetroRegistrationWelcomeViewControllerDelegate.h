/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:06 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGRetroRegistrationWelcomeViewControllerDelegate <NSObject>
@optional
-(void)welcomeViewControllerDidTapFBButton:(id)arg1;

@required
-(void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
-(void)welcomeViewControllerDidTapLoginButton:(id)arg1;
-(void)welcomeViewControllerDidTapSignUpButton:(id)arg1;
-(void)welcomeViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2;
-(void)welcomeViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
-(void)welcomeViewController:(id)arg1 proceedTwoFactorWithUserInfo:(id)arg2;

@end

