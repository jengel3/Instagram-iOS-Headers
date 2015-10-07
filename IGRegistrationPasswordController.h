/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:13 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>

@protocol IGRegistrationPasswordControllerDelegate;
@class IGRegistrationStepView, IGRegistrationNavigationBar, UIView, UIButton, NSString;

@interface IGRegistrationPasswordController : NSObject <IGTextFieldDelegate, IGRegistrationStepObject> {

	id<IGRegistrationPasswordControllerDelegate> _delegate;
	IGRegistrationStepView* _stepView;
	IGRegistrationNavigationBar* _navBar;
	UIView* _iconView;
	UIButton* _passwordToggleButton;

}

@property (assign,nonatomic,__weak) id<IGRegistrationPasswordControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationStepView * stepView;                                         //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * navBar;                                      //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                         //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIButton * passwordToggleButton;                                           //@synthesize passwordToggleButton=_passwordToggleButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsVerifying:(char)arg1 ;
-(void)nextButtonTapped;
-(char)validateField:(id)arg1 withAlert:(char)arg2 ;
-(IGRegistrationStepView *)stepView;
-(void)stepViewWillAppear;
-(void)setStepView:(IGRegistrationStepView *)arg1 ;
-(UIButton *)passwordToggleButton;
-(void)passwordToggleButtonTapped;
-(void)setPasswordToggleButton:(UIButton *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
-(void)setNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGRegistrationPasswordControllerDelegate>)arg1 ;
-(id<IGRegistrationPasswordControllerDelegate>)delegate;
-(char)textFieldShouldReturn:(id)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
@end

