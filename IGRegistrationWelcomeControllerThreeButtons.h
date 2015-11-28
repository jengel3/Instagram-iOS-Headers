
#import <Instagram/IGRegistrationWelcomeControllerBase.h>
#import <Instagram/IGRegistrationSignUpViewBaseDelegate.h>

@class IGRegistrationSignUpViewThreeButtons, NSString;

@interface IGRegistrationWelcomeControllerThreeButtons : IGRegistrationWelcomeControllerBase <IGRegistrationSignUpViewBaseDelegate> {

	IGRegistrationSignUpViewThreeButtons* _signUpView;

}

@property (nonatomic,retain) IGRegistrationSignUpViewThreeButtons * signUpView; 
@property (assign,nonatomic,__weak) id<IGRegistrationWelcomeControllerThreeButtonsDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userWillProceedFromSignUpView:(id)arg1 withUserInfo:(id)arg2 ;
-(IGRegistrationSignUpViewThreeButtons *)signUpView;
-(void)logInWithFacebookTapped;
-(void)setRegistrationMode:(int)arg1 ;
-(void)dealloc;
@end

