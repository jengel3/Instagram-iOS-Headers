
#import <Instagram/IGNavigationController.h>
#import <Instagram/IGRetroRegistrationSSOLoginViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationWelcomeViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationLoginViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationAddEmailViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationSignUpViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationFindFriendsViewControllerDelegate.h>
#import <Instagram/IGAccountRecoveryEmailConfirmationControllerDelegate.h>
#import <Instagram/IGRetroRegistrationSMSVerificationViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationPhoneNumberViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationPhoneConfirmationViewControllerDelegate.h>
#import <Instagram/IGAccountTakeOverViewControllerDelegate.h>
#import <Instagram/IGResetPasswordDelegate.h>
#import <Instagram/IGRetroRegistrationSignInHelperViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationRequestSupportDelegate.h>
#import <Instagram/IGRetroRegistrationUsernameViewControllerDelegate.h>

@class NSDictionary, NSArray, NSString, IGTwoFactorInfo, FBSDKAccessToken, UIImage;

@interface IGRetroRegistrationNavigationController : IGNavigationController <IGRetroRegistrationSSOLoginViewControllerDelegate, IGRetroRegistrationWelcomeViewControllerDelegate, IGRetroRegistrationLoginViewControllerDelegate, IGRetroRegistrationAddEmailViewControllerDelegate, IGRetroRegistrationSignUpViewControllerDelegate, IGRetroRegistrationFindFriendsViewControllerDelegate, IGAccountRecoveryEmailConfirmationControllerDelegate, IGRetroRegistrationSMSVerificationViewControllerDelegate, IGRetroRegistrationPhoneNumberViewControllerDelegate, IGRetroRegistrationPhoneConfirmationViewControllerDelegate, IGAccountTakeOverViewControllerDelegate, IGResetPasswordDelegate, IGRetroRegistrationSignInHelperViewControllerDelegate, IGRetroRegistrationRequestSupportDelegate, IGRetroRegistrationUsernameViewControllerDelegate> {

	char _isSwitchingUsers;
	int _currentStep;
	int _findFriendMode;
	NSDictionary* _facebookMeInfo;
	NSArray* _suggestedUsernames;
	NSDictionary* _loggedInDictionary;
	int _followCount;
	NSString* _email;
	NSString* _username;
	NSString* _userPK;
	IGTwoFactorInfo* _twoFactorInfo;
	FBSDKAccessToken* _facebookAccessToken;
	NSString* _phoneNumber;
	NSString* _forceSignUpCode;
	NSString* _SMSVerificationCode;
	NSString* _fullName;
	NSString* _password;
	UIImage* _profilePhoto;
	int _signUpStepFlow;

}

@property (assign,nonatomic) int currentStep;                                                     //@synthesize currentStep=_currentStep - In the implementation block
@property (assign,nonatomic) int findFriendMode;                                                  //@synthesize findFriendMode=_findFriendMode - In the implementation block
@property (nonatomic,retain) NSDictionary * facebookMeInfo;                                       //@synthesize facebookMeInfo=_facebookMeInfo - In the implementation block
@property (nonatomic,retain) NSArray * suggestedUsernames;                                        //@synthesize suggestedUsernames=_suggestedUsernames - In the implementation block
@property (nonatomic,retain) NSDictionary * loggedInDictionary;                                   //@synthesize loggedInDictionary=_loggedInDictionary - In the implementation block
@property (assign,nonatomic) int followCount;                                                     //@synthesize followCount=_followCount - In the implementation block
@property (nonatomic,copy) NSString * email;                                                      //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * username;                                                   //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * userPK;                                                     //@synthesize userPK=_userPK - In the implementation block
@property (nonatomic,retain) IGTwoFactorInfo * twoFactorInfo;                                     //@synthesize twoFactorInfo=_twoFactorInfo - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * facebookAccessToken;                              //@synthesize facebookAccessToken=_facebookAccessToken - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                                //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) char isSwitchingUsers;                                               //@synthesize isSwitchingUsers=_isSwitchingUsers - In the implementation block
@property (nonatomic,copy) NSString * forceSignUpCode;                                            //@synthesize forceSignUpCode=_forceSignUpCode - In the implementation block
@property (setter=MSVerificationCode,nonatomic,copy) NSString * SMSVerificationCode;              //@synthesize SMSVerificationCode=_SMSVerificationCode - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                                   //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy) NSString * password;                                                   //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) UIImage * profilePhoto;                                              //@synthesize profilePhoto=_profilePhoto - In the implementation block
@property (assign,nonatomic) int signUpStepFlow;                                                  //@synthesize signUpStepFlow=_signUpStepFlow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIsSwitchingUsers:(char)arg1 hasRecentlyEnabledSSOUsers:(char)arg2 ;
-(NSString *)userPK;
-(void)setUserPK:(NSString *)arg1 ;
-(void)onDoneButtonTapped;
-(void)accountRecoveryEmailConfirmationController:(id)arg1 proceedWithLoggedInDictionary:(id)arg2 signUpCode:(id)arg3 ;
-(void)accountRecoveryEmailConfirmationController:(id)arg1 proceedWithForceSignUpCode:(id)arg2 ;
-(void)accountRecoveryEmailConfirmationControllerBackToLoginView:(id)arg1 ;
-(NSDictionary *)loggedInDictionary;
-(char)accountTakeOverViewControllerIsSwitchingUsers:(id)arg1 ;
-(void)accountTakeOverViewControllerDidTapConfirmLogInButton:(id)arg1 ;
-(void)accountTakeOverViewControllerDidTapSignUpButton:(id)arg1 ;
-(void)setIsSwitchingUsers:(char)arg1 ;
-(char)isSwitchingUsers;
-(FBSDKAccessToken *)facebookAccessToken;
-(void)resetPasswordController:(id)arg1 dismissWithTwoFactorInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(char)resetPasswordControllerIsSwitchingUsers:(id)arg1 ;
-(void)smsVerificationViewController:(id)arg1 didRequestSupportWithUsername:(id)arg2 twoFactorIdentifier:(id)arg3 ;
-(void)smsVerificationViewController:(id)arg1 wantsToPopViewControllerAnimated:(char)arg2 ;
-(char)smsVerificationViewControllerIsSwitchingUsers:(id)arg1 ;
-(void)requestSupportViewControllerWantsToDismiss:(id)arg1 ;
-(void)setFacebookAccessToken:(FBSDKAccessToken *)arg1 ;
-(void)contactPointViewControllerDidTapLoginButton:(id)arg1 ;
-(void)contactPointViewControllerDelegateSMSSentWithPhoneNumber:(id)arg1 contactPointViewController:(id)arg2 ;
-(void)contactPointViewController:(id)arg1 proceedWithValidatedEmail:(id)arg2 usernameSuggestions:(id)arg3 ;
-(int)findFriendsMode;
-(void)findFriendsController:(id)arg1 wantsToUpdateToFollowCount:(int)arg2 ;
-(void)findFriendsControllerNextButtonTapped:(id)arg1 ;
-(void)findFriendsControllerSkipButtonTapped:(id)arg1 ;
-(void)findFriendsController:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)findFriendsController:(id)arg1 wantsToDismissViewControllerAnimated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFollowCount:(int)arg1 ;
-(int)followCount;
-(void)findFriendsController:(id)arg1 wasTappedOnURL:(id)arg2 ;
-(char)loginViewControllerIsSwitchingUsers:(id)arg1 ;
-(void)loginViewControllerDidTapGoBackButton:(id)arg1 ;
-(void)loginViewControllerDidTapLoginButton:(id)arg1 ;
-(void)loginViewController:(id)arg1 didTapOnLoginHelperButtonWithUsername:(id)arg2 ;
-(void)loginViewControllerDidTapSignUpButton:(id)arg1 ;
-(void)loginViewControllerWantsToDismiss:(id)arg1 ;
-(void)loginViewController:(id)arg1 didTapOnURL:(id)arg2 ;
-(void)loginViewController:(id)arg1 resetPasswordWithViewController:(id)arg2 ;
-(void)loginViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)loginViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(void)loginViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(id)viewControllerForStep:(int)arg1 ;
-(void)logInFromEmail:(id)arg1 ;
-(id)createFindFriendsViewController;
-(id)createFollowPeopleViewController;
-(id)createPhoneConfirmationViewController;
-(id)createSMSVerificationViewController;
-(id)createTwoFactorContactFormViewController;
-(id)createSignUpViewController;
-(id)createUsernameStepViewController;
-(id)createEmailConfirmationViewController;
-(id)createAccountTakeOverViewController;
-(id)createSignInHelperViewController;
-(id)createRequestSupportFormViewController;
-(Class)viewControllerClassForStep:(int)arg1 ;
-(int)indexOfViewControllerClass:(Class)arg1 ;
-(void)userLoggedInOperations;
-(int)followPeopleStep;
-(void)setCurrentStep:(int)arg1 ;
-(void)continueStep:(int)arg1 ;
-(NSDictionary *)facebookMeInfo;
-(NSString *)SMSVerificationCode;
-(int)findFriendMode;
-(IGTwoFactorInfo *)twoFactorInfo;
-(void)setFacebookMeInfo:(NSDictionary *)arg1 ;
-(void)continueCurrentStep;
-(int)signUpStepFlow;
-(int)findFriendsStep;
-(void)setFindFriendMode:(int)arg1 ;
-(void)continueToSwitchAccountLogInWithBackButton:(char)arg1 ;
-(void)continueToSignUpWithBackButton:(char)arg1 ;
-(void)setTwoFactorInfo:(IGTwoFactorInfo *)arg1 ;
-(void)proceedRegistrationWithFBUserInfo:(id)arg1 facebookAccessToken:(id)arg2 ;
-(void)setSignUpStepFlow:(int)arg1 ;
-(void)onRegistrationFinished;
-(void)setLoggedInDictionary:(NSDictionary *)arg1 ;
-(void)setSMSVerificationCode:(NSString *)arg1 ;
-(void)ssoLoginViewControllerDidTapLoginButton:(id)arg1 ;
-(void)addEmailViewControllerDidTapLoginButton:(id)arg1 ;
-(void)addEmailViewControllerDidTapPhoneRegiButton:(id)arg1 ;
-(void)addEmailViewController:(id)arg1 proceedWithValidatedEmail:(id)arg2 usernameSuggestions:(id)arg3 ;
-(void)addEmailViewController:(id)arg1 proceedWithConflictedEmail:(id)arg2 ;
-(void)signInHelperViewController:(id)arg1 didTapOnURL:(id)arg2 ;
-(void)usernameViewControllerDidTapNextButton:(id)arg1 ;
-(int)registrationStepForContactPointViewController:(id)arg1 ;
-(void)didTapBackButton:(id)arg1 ;
-(void)phoneConfirmationViewController:(id)arg1 didVerifyWithCode:(id)arg2 ;
-(void)phoneNumberViewControllerDelegateSMSSentWithPhoneNumber:(id)arg1 phoneNumberViewController:(id)arg2 ;
-(void)phoneNumberViewControllerDelegateDidTapLoginButton:(id)arg1 ;
-(void)phoneNumberViewControllerDelegateDidTapEmailRegistrationButton:(id)arg1 ;
-(char)signInHelperViewControllerIsSwitchingUsers:(id)arg1 ;
-(void)signInHelperViewControllerDidTapBackButton:(id)arg1 ;
-(void)signInHelperViewController:(id)arg1 didRequestSupportWithUsername:(id)arg2 ;
-(void)signInHelperViewControllerDidTapLogInButton:(id)arg1 ;
-(void)signInHelperViewControllerDidTapSignUpButton:(id)arg1 ;
-(void)signInHelperViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDicted:(id)arg2 ;
-(void)signInHelperViewController:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)signInHelperViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)signInHelperViewController:(id)arg1 resetPasswordWithViewController:(id)arg2 ;
-(int)registrationStepForSignUpViewController:(id)arg1 ;
-(void)signupViewControllerDidTapNextButton:(id)arg1 hasUsernameField:(char)arg2 withFullName:(id)arg3 password:(id)arg4 profilePhoto:(id)arg5 fromFlow:(int)arg6 ;
-(void)signupViewControllerDidTapLoginButton:(id)arg1 ;
-(char)signupViewControllerIsSwitchingUsers:(id)arg1 ;
-(void)signupViewControllerRegistrationSucceeded:(id)arg1 ;
-(void)signupViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3 ;
-(char)welcomeViewControllerIsSwitchingUsers:(id)arg1 ;
-(void)welcomeViewControllerDidGoBackButton:(id)arg1 ;
-(void)welcomeViewControllerDidTapLoginButton:(id)arg1 ;
-(void)welcomeViewControllerDidTapSignUpButton:(id)arg1 ;
-(void)welcomeViewControllerWantsToDismiss:(id)arg1 ;
-(void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(void)welcomeViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)welcomeViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)welcomeViewController:(id)arg1 resetPasswordWithViewController:(id)arg2 ;
-(void)ssoLoginViewControllerDidTapSwitchAccountButton:(id)arg1 withBackButton:(char)arg2 ;
-(void)ssoLoginViewControllerDidTapSignUpButton:(id)arg1 ;
-(void)ssoLoginViewControllerDidTapOnURL:(id)arg1 ;
-(void)ssoLoginViewControllerResetPasswordWithViewController:(id)arg1 ;
-(void)ssoLoginViewControllerProceedTwoFactorWithInfo:(id)arg1 facebookAccessToken:(id)arg2 ;
-(int)registrationStepForSSOLoginViewController:(id)arg1 ;
-(NSArray *)suggestedUsernames;
-(void)setSuggestedUsernames:(NSArray *)arg1 ;
-(int)registrationStepForUsernameViewController:(id)arg1 ;
-(void)usernameViewControllerDidTaSigninButton:(id)arg1 ;
-(char)isPhoneRegForUsernameViewController:(id)arg1 ;
-(NSString *)forceSignUpCode;
-(char)isFBSignUpForUsernameViewController:(id)arg1 ;
-(UIImage *)profilePhoto;
-(char)isUserSwitchingForUsernameViewController:(id)arg1 ;
-(void)usernameStepViewControllerRegistrationSucceeded:(id)arg1 ;
-(void)usernameViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3 ;
-(void)setForceSignUpCode:(NSString *)arg1 ;
-(void)setProfilePhoto:(UIImage *)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(NSString *)phoneNumber;
-(int)currentStep;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

