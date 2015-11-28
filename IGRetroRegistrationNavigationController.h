
#import <Instagram/IGNavigationController.h>
#import <Instagram/IGRetroRegistrationWelcomeViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationLoginViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationAddEmailViewControllerDelegate.h>
#import <Instagram/IGNavigationControllerDelegate.h>
#import <Instagram/IGRetroRegistrationSignUpViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationFindFriendsViewControllerDelegate.h>
#import <Instagram/IGAccountRecoveryEmailConfirmationControllerDelegate.h>
#import <Instagram/IGAccountTakeOverViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationSMSVerificationViewControllerDelegate.h>

@class NSDictionary, NSArray, NSString;

@interface IGRetroRegistrationNavigationController : IGNavigationController <IGRetroRegistrationWelcomeViewControllerDelegate, IGRetroRegistrationLoginViewControllerDelegate, IGRetroRegistrationAddEmailViewControllerDelegate, IGNavigationControllerDelegate, IGRetroRegistrationSignUpViewControllerDelegate, IGRetroRegistrationFindFriendsViewControllerDelegate, IGAccountRecoveryEmailConfirmationControllerDelegate, IGAccountTakeOverViewControllerDelegate, IGRetroRegistrationSMSVerificationViewControllerDelegate> {

	char _isSwitchingUsers;
	int _currentStep;
	int _findFriendMode;
	NSDictionary* _facebookMeInfo;
	NSArray* _suggestedUsernames;
	NSDictionary* _loggedInDictionary;
	int _followCount;
	NSString* _email;
	NSDictionary* _twoFactorInfo;
	NSString* _forceSignUpCode;

}

@property (assign,nonatomic) int currentStep;                                //@synthesize currentStep=_currentStep - In the implementation block
@property (assign,nonatomic) int findFriendMode;                             //@synthesize findFriendMode=_findFriendMode - In the implementation block
@property (nonatomic,retain) NSDictionary * facebookMeInfo;                  //@synthesize facebookMeInfo=_facebookMeInfo - In the implementation block
@property (nonatomic,retain) NSArray * suggestedUsernames;                   //@synthesize suggestedUsernames=_suggestedUsernames - In the implementation block
@property (assign,nonatomic) NSDictionary * loggedInDictionary;              //@synthesize loggedInDictionary=_loggedInDictionary - In the implementation block
@property (assign,nonatomic) int followCount;                                //@synthesize followCount=_followCount - In the implementation block
@property (nonatomic,copy) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSDictionary * twoFactorInfo;                   //@synthesize twoFactorInfo=_twoFactorInfo - In the implementation block
@property (assign,nonatomic) char isSwitchingUsers;                          //@synthesize isSwitchingUsers=_isSwitchingUsers - In the implementation block
@property (nonatomic,copy) NSString * forceSignUpCode;                       //@synthesize forceSignUpCode=_forceSignUpCode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onDoneButtonTapped;
-(void)accountRecoveryEmailConfirmationControllerDelegate:(id)arg1 proceedWithLoggedInDictionary:(id)arg2 signUpCode:(id)arg3 ;
-(void)accountRecoveryEmailConfirmationControllerDelegate:(id)arg1 proceedWithForceSignUpCode:(id)arg2 ;
-(void)accountRecoveryEmailConfirmationControllerDelegateBackToLoginView:(id)arg1 ;
-(NSDictionary *)loggedInDictionary;
-(void)accountTakeOverViewControllerDidTapConfirmLogInButton:(id)arg1 ;
-(void)accountTakeOverViewControllerDidTapSignUpButton:(id)arg1 ;
-(void)setFollowCount:(int)arg1 ;
-(int)followCount;
-(NSDictionary *)facebookMeInfo;
-(char)isSwitchingUsers;
-(void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(id)initWithIsSwitchingUsers:(char)arg1 ;
-(void)setFacebookMeInfo:(NSDictionary *)arg1 ;
-(void)setIsSwitchingUsers:(char)arg1 ;
-(void)findFriendsController:(id)arg1 wantsToUpdateToFollowCount:(int)arg2 ;
-(void)findFriendsController:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)findFriendsController:(id)arg1 wantsToDismissViewControllerAnimated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)findFriendsController:(id)arg1 wasTappedOnURL:(id)arg2 ;
-(void)setCurrentStep:(int)arg1 ;
-(NSArray *)suggestedUsernames;
-(void)setSuggestedUsernames:(NSArray *)arg1 ;
-(void)addEmailViewControllerDidTapPhoneRegiButton:(id)arg1 ;
-(void)addEmailViewControllerDidTapLoginButton:(id)arg1 ;
-(void)addEmailViewController:(id)arg1 proceedWithValidatedEmail:(id)arg2 usernameSuggestions:(id)arg3 ;
-(void)addEmailViewController:(id)arg1 proceedWithConflictedEmail:(id)arg2 ;
-(void)findFriendsControllerNextButtonTapped:(id)arg1 ;
-(void)findFriendsControllerSkipButtonTapped:(id)arg1 ;
-(void)loginViewController:(id)arg1 proceedTwoFactorWithUserInfo:(id)arg2 ;
-(void)loginViewControllerDidTapLoginButton:(id)arg1 ;
-(void)loginViewControllerDidTapSignUpButton:(id)arg1 ;
-(void)loginViewController:(id)arg1 didTapOnURL:(id)arg2 ;
-(void)loginViewController:(id)arg1 resetPasswordWithViewController:(id)arg2 ;
-(void)loginViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(void)loginViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 ;
-(id)createFindFriendsViewController;
-(id)createFollowPeopleViewController;
-(id)createSMSVerificationViewController;
-(id)createSignUpViewController;
-(id)createEmailConfirmationViewController;
-(id)createAccountTakeOverViewController;
-(id)viewControllerForStep:(int)arg1 ;
-(void)userLoggedInOperations;
-(void)continueStep:(int)arg1 ;
-(NSString *)forceSignUpCode;
-(int)findFriendMode;
-(NSDictionary *)twoFactorInfo;
-(void)continueCurrentStep;
-(void)setFindFriendMode:(int)arg1 ;
-(void)setTwoFactorInfo:(NSDictionary *)arg1 ;
-(void)setForceSignUpCode:(NSString *)arg1 ;
-(void)setLoggedInDictionary:(NSDictionary *)arg1 ;
-(void)welcomeViewControllerDidTapLoginButton:(id)arg1 ;
-(void)welcomeViewControllerDidTapSignUpButton:(id)arg1 ;
-(void)welcomeViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 ;
-(void)welcomeViewController:(id)arg1 resetPasswordWithViewController:(id)arg2 ;
-(void)welcomeViewController:(id)arg1 proceedTwoFactorWithUserInfo:(id)arg2 ;
-(void)signupViewControllerDidTapLoginButton:(id)arg1 ;
-(void)signupViewControllerDidTapNextButton:(id)arg1 ;
-(void)signupViewControllerRegistrationSucceeded:(id)arg1 ;
-(void)signupViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3 ;
-(char)signupViewControllerIsSwitchingUsers:(id)arg1 ;
-(void)smsVerificationViewController:(id)arg1 wantsToPopViewControllerAnimated:(char)arg2 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(int)currentStep;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
@end

