/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:05 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGRegistrationFlowControllerDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@protocol IGRegistrationFlowViewControllerDelegate, IGRegistrationStepObject;
@class IGRegistrationBackgroundView, IGRegistrationFlowController, NSString;

@interface IGRegistrationFlowViewController : IGViewController <IGRegistrationFlowControllerDelegate, IGRaindropAnalyticsDelegate> {

	id<IGRegistrationFlowViewControllerDelegate> _delegate;
	IGRegistrationBackgroundView* _backgroundView;
	id<IGRegistrationStepObject> _currentStepObject;
	IGRegistrationFlowController* _flowController;

}

@property (assign,nonatomic,__weak) id<IGRegistrationFlowViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationBackgroundView * backgroundView;                             //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) id<IGRegistrationStepObject> currentStepObject;                            //@synthesize currentStepObject=_currentStepObject - In the implementation block
@property (nonatomic,retain) IGRegistrationFlowController * flowController;                             //@synthesize flowController=_flowController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(id)initWithPhoneRegistration:(char)arg1 delegate:(id)arg2 ;
-(void)showActivatonFlow;
-(void)flowController:(id)arg1 didFinishRegistrationWithLoggedInDict:(id)arg2 ;
-(void)flowController:(id)arg1 continueRegistrationToStep:(id)arg2 inboundAnimation:(int)arg3 outboundAnimation:(int)arg4 ;
-(id<IGRegistrationStepObject>)currentStepObject;
-(char)flowControllerIsSwitchingUsers:(id)arg1 ;
-(void)flowController:(id)arg1 shouldRegisterWithFacebookInformation:(id)arg2 ;
-(void)flowController:(id)arg1 willResetPasswordWithViewController:(id)arg2 ;
-(void)flowController:(id)arg1 willPresentNavigationController:(id)arg2 ;
-(void)setCurrentStepObject:(id<IGRegistrationStepObject>)arg1 ;
-(void)setFlowController:(IGRegistrationFlowController *)arg1 ;
-(IGRegistrationFlowController *)flowController;
-(void)transitToStep:(id)arg1 inboundAnimation:(int)arg2 outboundAnimation:(int)arg3 ;
-(void)setDelegate:(id<IGRegistrationFlowViewControllerDelegate>)arg1 ;
-(id<IGRegistrationFlowViewControllerDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)setBackgroundView:(IGRegistrationBackgroundView *)arg1 ;
-(IGRegistrationBackgroundView *)backgroundView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(char)prefersNavigationBarHidden;
@end

