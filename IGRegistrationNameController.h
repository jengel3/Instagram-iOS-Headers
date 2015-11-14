/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:05 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>

@protocol IGRegistrationNameControllerDelegate;
@class IGRegistrationStepView, IGRegistrationNavigationBar, UIView, NSString;

@interface IGRegistrationNameController : NSObject <IGTextFieldDelegate, IGRegistrationStepObject> {

	id<IGRegistrationNameControllerDelegate> _delegate;
	IGRegistrationStepView* _stepView;
	IGRegistrationNavigationBar* _navBar;
	UIView* _iconView;

}

@property (assign,nonatomic,__weak) id<IGRegistrationNameControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationStepView * stepView;                                     //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * navBar;                                  //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                     //@synthesize iconView=_iconView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsVerifying:(char)arg1 ;
-(void)nextButtonTapped;
-(IGRegistrationStepView *)stepView;
-(void)stepViewWillAppear;
-(void)setStepView:(IGRegistrationStepView *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRegistrationNameControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGRegistrationNameControllerDelegate>)delegate;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
@end

