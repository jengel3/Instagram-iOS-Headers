/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGRegistrationLogInViewDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@protocol IGRegistrationWelcomeControllerBaseDelegate;
@class IGRegistrationLogInView, IGRegistrationSignUpViewBase, UIView, IGRegistrationToggleView, IGRegistrationLogoView, UIButton, NSString, IGRegistrationNavigationBar;

@interface IGRegistrationWelcomeControllerBase : NSObject <IGRegistrationLogInViewDelegate, IGRegistrationStepObject, IGCoreTextLinkHandler> {

	char _submitting;
	IGRegistrationLogInView* _logInView;
	IGRegistrationSignUpViewBase* _signUpView;
	UIView* _stepView;
	IGRegistrationToggleView* _toggleView;
	int _registrationMode;
	id<IGRegistrationWelcomeControllerBaseDelegate> _delegate;
	IGRegistrationLogoView* _iconView;
	UIButton* _dismissButton;

}

@property (nonatomic,retain) IGRegistrationLogInView * logInView;                                          //@synthesize logInView=_logInView - In the implementation block
@property (nonatomic,retain) IGRegistrationSignUpViewBase * signUpView;                                    //@synthesize signUpView=_signUpView - In the implementation block
@property (nonatomic,retain) UIView * stepView;                                                            //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationToggleView * toggleView;                                        //@synthesize toggleView=_toggleView - In the implementation block
@property (assign,nonatomic) int registrationMode;                                                         //@synthesize registrationMode=_registrationMode - In the implementation block
@property (assign,nonatomic) char submitting;                                                              //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic,__weak) id<IGRegistrationWelcomeControllerBaseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationLogoView * iconView;                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                                     //@synthesize dismissButton=_dismissButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGRegistrationNavigationBar * navBar; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)onFacebookAuthSuccess;
-(IGRegistrationToggleView *)toggleView;
-(void)setToggleView:(IGRegistrationToggleView *)arg1 ;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(UIView *)stepView;
-(void)stepViewWillAppear;
-(void)stepViewWasTapped;
-(void)setStepView:(UIView *)arg1 ;
-(void)onFacebookAuthCancelled;
-(void)registrationLogInView:(id)arg1 willProceedWithKeyboard:(char)arg2 ;
-(void)registrationLogInView:(id)arg1 didDismissForHelpWithUsername:(id)arg2 ;
-(void)registrationLogInView:(id)arg1 didBeginEditingTextField:(id)arg2 ;
-(IGRegistrationSignUpViewBase *)signUpView;
-(IGRegistrationLogInView *)logInView;
-(void)logInWithFacebookTapped;
-(int)registrationMode;
-(void)setRegistrationMode:(int)arg1 ;
-(void)performCompletionBlockForKeyboardShowAnimation;
-(void)logInFromEmail:(id)arg1 ;
-(id)attributedStringForString:(id)arg1 ;
-(void)setFacebookButtonLoading:(char)arg1 ;
-(void)authWithFacebookForRegistrationMode:(int)arg1 ;
-(void)sendPasswordResetEmailForUser:(id)arg1 ;
-(void)displayToastMessage:(id)arg1 ;
-(void)facebookLoginCallback:(int)arg1 ;
-(void)sendLoginEmailCallback:(id)arg1 ;
-(void)lookupEmailForUsernameCallback:(id)arg1 ;
-(void)forgotPasswordFlowCallback:(id)arg1 ;
-(void)submitFBSignupRequest;
-(void)handleLoggedInUserForResponse:(id)arg1 ;
-(void)handleEmailAlreadyTakenForResponse:(id)arg1 ;
-(void)handleEmailTakenAutoLoginForResponse:(id)arg1 ;
-(void)handleLockedAccountForResponse:(id)arg1 ;
-(void)logIn;
-(char)preparedForLogin;
-(void)loginCompletionHandlerForUser:(id)arg1 error:(id)arg2 statusCode:(int)arg3 ;
-(SEL)callbackForButtonType:(int)arg1 ;
-(void)setLogInView:(IGRegistrationLogInView *)arg1 ;
-(void)setSignUpView:(IGRegistrationSignUpViewBase *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
-(void)dealloc;
-(void)setDelegate:(id<IGRegistrationWelcomeControllerBaseDelegate>)arg1 ;
-(id)init;
-(id<IGRegistrationWelcomeControllerBaseDelegate>)delegate;
-(void)dismiss;
-(IGRegistrationLogoView *)iconView;
-(void)setIconView:(IGRegistrationLogoView *)arg1 ;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(id)iconName;
@end

