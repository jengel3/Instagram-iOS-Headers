
#import <Instagram/IGRegistrationWelcomeControllerDelegate.h>
#import <Instagram/IGRegistrationWelcomeControllerThreeButtonsDelegate.h>
#import <Instagram/IGRegistrationEmailControllerDelegate.h>
#import <Instagram/IGRegistrationPhoneControllerDelegate.h>
#import <Instagram/IGRegistrationNameControllerDelegate.h>
#import <Instagram/IGRegistrationUsernameControllerDelegate.h>
#import <Instagram/IGRegistrationPasswordControllerDelegate.h>
#import <Instagram/IGRegistrationPhotoControllerDelegate.h>
#import <Instagram/IGRegistrationSMSConfirmationControllerDelegate.h>
#import <Instagram/IGRegistrationFindFriendsControllerDelegate.h>

@protocol IGRegistrationFlowControllerDelegate, IGRegistrationStepObject, IGRaindropAnalyticsDelegate;
@class UIViewController, NSMutableArray, NSString, UIImage, NSArray;

@interface IGRegistrationFlowController : NSObject <IGRegistrationWelcomeControllerDelegate, IGRegistrationWelcomeControllerThreeButtonsDelegate, IGRegistrationEmailControllerDelegate, IGRegistrationPhoneControllerDelegate, IGRegistrationNameControllerDelegate, IGRegistrationUsernameControllerDelegate, IGRegistrationPasswordControllerDelegate, IGRegistrationPhotoControllerDelegate, IGRegistrationSMSConfirmationControllerDelegate, IGRegistrationFindFriendsControllerDelegate> {

	char _submitting;
	char _skipEmail;
	char _usePhoneReg;
	UIViewController*<IGRegistrationFlowControllerDelegate> _delegate;
	int _currentStep;
	id<IGRegistrationStepObject> _currentStepObject;
	NSMutableArray* _stepObjectsStack;
	NSString* _email;
	NSString* _phoneNumber;
	NSString* _name;
	NSString* _username;
	NSString* _password;
	UIImage* _photo;
	NSString* _confirmationCode;
	NSArray* _suggestedUsernames;
	int _followCount;
	NSString* _fbToken;
	NSString* _forceSignupCode;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;

}

@property (assign,nonatomic,__weak) UIViewController*<IGRegistrationFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int currentStep;                                                                      //@synthesize currentStep=_currentStep - In the implementation block
@property (nonatomic,retain) id<IGRegistrationStepObject> currentStepObject;                                       //@synthesize currentStepObject=_currentStepObject - In the implementation block
@property (nonatomic,retain) NSMutableArray * stepObjectsStack;                                                    //@synthesize stepObjectsStack=_stepObjectsStack - In the implementation block
@property (nonatomic,retain) NSString * email;                                                                     //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * username;                                                                  //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                                                  //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) char submitting;                                                                      //@synthesize submitting=_submitting - In the implementation block
@property (nonatomic,retain) UIImage * photo;                                                                      //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) NSString * confirmationCode;                                                          //@synthesize confirmationCode=_confirmationCode - In the implementation block
@property (nonatomic,retain) NSArray * suggestedUsernames;                                                         //@synthesize suggestedUsernames=_suggestedUsernames - In the implementation block
@property (assign,nonatomic) int followCount;                                                                      //@synthesize followCount=_followCount - In the implementation block
@property (nonatomic,retain) NSString * fbToken;                                                                   //@synthesize fbToken=_fbToken - In the implementation block
@property (nonatomic,retain) NSString * forceSignupCode;                                                           //@synthesize forceSignupCode=_forceSignupCode - In the implementation block
@property (assign,nonatomic) char skipEmail;                                                                       //@synthesize skipEmail=_skipEmail - In the implementation block
@property (assign,nonatomic) char usePhoneReg;                                                                     //@synthesize usePhoneReg=_usePhoneReg - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;                             //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(void)skipButtonTapped;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(void)callUserWithConfirmationCode;
-(NSString *)confirmationCode;
-(void)setConfirmationCode:(NSString *)arg1 ;
-(void)setFollowCount:(int)arg1 ;
-(int)followCount;
-(void)emailController:(id)arg1 wantsToProceedWithEmail:(id)arg2 usernameSuggestions:(id)arg3 ;
-(void)findFriendsController:(id)arg1 wantsToUpdateToFollowCount:(int)arg2 ;
-(void)findFriendsController:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)findFriendsController:(id)arg1 wantsToDismissViewControllerAnimated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)findFriendsController:(id)arg1 wasTappedOnURL:(id)arg2 ;
-(void)setUsePhoneReg:(char)arg1 ;
-(char)usePhoneReg;
-(void)setCurrentStep:(int)arg1 ;
-(NSMutableArray *)stepObjectsStack;
-(id)prepareNewStepObjectForStep:(int)arg1 ;
-(void)continueToNextStep;
-(void)setCurrentStepIsVerifying:(char)arg1 ;
-(NSArray *)suggestedUsernames;
-(void)goBackToPreviousStep;
-(void)goForwardToStep:(int)arg1 ;
-(id<IGRegistrationStepObject>)currentStepObject;
-(void)submitCredentialsToReceiveSMSCodeAndShouldContinueUponSuccess:(char)arg1 ;
-(NSString *)fbToken;
-(char)skipEmail;
-(NSString *)forceSignupCode;
-(id)getFilesDictionary;
-(void)accountCreatedWithUserInformation:(id)arg1 ;
-(void)accountAlreadyExistsWithUsername:(id)arg1 errorMessage:(id)arg2 ;
-(void)goBackToStep:(int)arg1 ;
-(void)setSuggestedUsernames:(NSArray *)arg1 ;
-(void)setFbToken:(NSString *)arg1 ;
-(void)setSkipEmail:(char)arg1 ;
-(void)getSuggestedUsernamesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)submitWithConfirmationCode;
-(void)welcomeController:(id)arg1 wantsToProceedWithEmail:(id)arg2 usernameSuggestions:(id)arg3 ;
-(void)welcomeController:(id)arg1 wantsToProceedWithConflictedEmail:(id)arg2 ;
-(void)welcomeController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(void)welcomeController:(id)arg1 proceedRegisteringWithFBInfo:(id)arg2 ;
-(void)welcomeController:(id)arg1 didTapOnURL:(id)arg2 ;
-(void)welcomeController:(id)arg1 wantsToResetPasswordWithViewController:(id)arg2 ;
-(void)welcomeController:(id)arg1 wantsToPresentNavigationController:(id)arg2 ;
-(void)welcomeControllerWantsToDismiss:(id)arg1 ;
-(char)welcomeControllerIsSwitchingUsers:(id)arg1 ;
-(void)userWantsToProceedToEnterPhoneNumberFromWelcomeController:(id)arg1 ;
-(void)userWantsToProceedToEnterEmailFromWelcomeController:(id)arg1 ;
-(void)phoneController:(id)arg1 wantsToProceedWithPhoneNumber:(id)arg2 countryCode:(id)arg3 ;
-(void)phoneController:(id)arg1 wantsToDismissViewController:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)phoneController:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)nameController:(id)arg1 wantsToProceedWithName:(id)arg2 ;
-(void)usernameController:(id)arg1 wantsToProceedWithUsername:(id)arg2 ;
-(void)passwordController:(id)arg1 wantsToProceedWithPassword:(id)arg2 ;
-(void)photoController:(id)arg1 willProceedWithPhoto:(id)arg2 ;
-(void)confirmationController:(id)arg1 willProceedWithConfirmationCode:(id)arg2 ;
-(void)userNeedsConfirmationCodePhoneCallFromConfirmationController:(id)arg1 ;
-(void)userWantsConfirmationCodeResentFromConfirmationController:(id)arg1 ;
-(void)userWantsToChangePhoneNumberFromConfirmationController:(id)arg1 ;
-(id)initWithAnalyticsDelegate:(id)arg1 flowControllerDelegate:(id)arg2 usePhoneRegistration:(char)arg3 ;
-(void)goToActivationFlow;
-(void)setCurrentStepObject:(id<IGRegistrationStepObject>)arg1 ;
-(void)setStepObjectsStack:(NSMutableArray *)arg1 ;
-(void)setForceSignupCode:(NSString *)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(UIImage *)photo;
-(void)setDelegate:(UIViewController*<IGRegistrationFlowControllerDelegate>)arg1 ;
-(UIViewController*<IGRegistrationFlowControllerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)phoneNumber;
-(id)dictionaryRepresentation;
-(int)currentStep;
-(void)setPhoto:(UIImage *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)submit;
@end

