/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:11 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBDialog.h>

@protocol FBLoginDialogDelegate;
@interface FBLoginDialog : FBDialog {

	id<FBLoginDialogDelegate> _loginDelegate;

}

@property (assign,nonatomic) id<FBLoginDialogDelegate> loginDelegate;              //@synthesize loginDelegate=_loginDelegate - In the implementation block
-(id)initWithURL:(id)arg1 loginParams:(id)arg2 delegate:(id)arg3 ;
-(void)dialogDidSucceed:(id)arg1 ;
-(id<FBLoginDialogDelegate>)loginDelegate;
-(void)setLoginDelegate:(id<FBLoginDialogDelegate>)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)dialogDidCancel:(id)arg1 ;
@end

