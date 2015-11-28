
#import <Instagram/IGRegistrationWelcomeControllerBase.h>
#import <Instagram/IGRegistrationSignUpViewBaseDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class IGRegistrationSignUpView, IGRegistrationToggleView, NSString;

@interface IGRegistrationWelcomeController : IGRegistrationWelcomeControllerBase <IGRegistrationSignUpViewBaseDelegate, UIAlertViewDelegate> {

	IGRegistrationSignUpView* _signUpView;
	IGRegistrationToggleView* _toggleView;
	NSString* _email;

}

@property (nonatomic,retain) IGRegistrationSignUpView * signUpView; 
@property (assign,nonatomic,__weak) id<IGRegistrationWelcomeControllerDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toggleView;
-(char)validateField:(id)arg1 withAlert:(char)arg2 ;
-(void)userWillProceedFromSignUpView:(id)arg1 withUserInfo:(id)arg2 ;
-(void)validateEmail:(id)arg1 ;
-(void)stepViewWillAppear;
-(IGRegistrationSignUpView *)signUpView;
-(void)logInWithFacebookTapped;
-(void)setRegistrationMode:(int)arg1 ;
-(void)setKeyboardStateForSignUp:(char)arg1 ;
-(void)registrationSignUpView:(id)arg1 willProceedWithEmail:(id)arg2 keyboard:(char)arg3 ;
-(void)performCompletionBlockForKeyboardShowAnimation;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)keyboardWillShow:(id)arg1 ;
@end

