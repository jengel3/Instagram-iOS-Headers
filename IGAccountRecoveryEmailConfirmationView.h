/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:05 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGAccountRecoveryEmailConfirmationScrollView, IGRetroRegistrationBackgroundView;

@interface IGAccountRecoveryEmailConfirmationView : UIView {

	IGAccountRecoveryEmailConfirmationScrollView* _confirmationScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGAccountRecoveryEmailConfirmationScrollView * confirmationScrollView;              //@synthesize confirmationScrollView=_confirmationScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
-(IGAccountRecoveryEmailConfirmationScrollView *)confirmationScrollView;
-(void)setConfirmationScrollView:(IGAccountRecoveryEmailConfirmationScrollView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

