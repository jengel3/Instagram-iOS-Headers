
#import <UIKit/UIViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGRetroRegistrationUsernameViewControllerDelegate;
@class NSArray, NSString, NSDictionary, FBSDKAccessToken, UIImage, NSTimer, IGRequest, IGRetroRegistrationUsernameStepView, UITapGestureRecognizer;

@interface IGRetroRegistrationUsernameViewController : UIViewController <IGCoreTextLinkHandler, IGTextFieldDelegate> {

	char _submitting;
	char _skipEmail;
	id<IGRetroRegistrationUsernameViewControllerDelegate> _delegate;
	NSArray* _suggestedUsernames;
	NSString* _email;
	NSString* _phoneNumber;
	NSDictionary* _facebookInfo;
	FBSDKAccessToken* _facebookAccessToken;
	NSString* _SMSSignUpCode;
	NSString* _forceSignUpCode;
	NSString* _fullName;
	NSString* _password;
	UIImage* _profilePhoto;
	NSTimer* _usernameCheckTimer;
	IGRequest* _usernameRequest;
	IGRequest* _signUpRequest;
	NSString* _fbToken;
	int _suggestedUsernameIndex;
	IGRetroRegistrationUsernameStepView* _usernameView;
	UITapGestureRecognizer* _backgroundTapGesture;

}

@property (nonatomic,retain) NSArray * suggestedUsernames;                                                       //@synthesize suggestedUsernames=_suggestedUsernames - In the implementation block
@property (nonatomic,retain) NSString * email;                                                                   //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                                             //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSDictionary * facebookInfo;                                                        //@synthesize facebookInfo=_facebookInfo - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * facebookAccessToken;                                             //@synthesize facebookAccessToken=_facebookAccessToken - In the implementation block
@property (setter=MSSignUpCode,nonatomic,retain) NSString * SMSSignUpCode;                                       //@synthesize SMSSignUpCode=_SMSSignUpCode - In the implementation block
@property (nonatomic,retain) NSString * forceSignUpCode;                                                         //@synthesize forceSignUpCode=_forceSignUpCode - In the implementation block
@property (nonatomic,retain) NSString * fullName;                                                                //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * password;                                                                //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) UIImage * profilePhoto;                                                             //@synthesize profilePhoto=_profilePhoto - In the implementation block
@property (nonatomic,retain) NSTimer * usernameCheckTimer;                                                       //@synthesize usernameCheckTimer=_usernameCheckTimer - In the implementation block
@property (assign,nonatomic) char submitting;                                                                    //@synthesize submitting=_submitting - In the implementation block
@property (nonatomic,retain) IGRequest * usernameRequest;                                                        //@synthesize usernameRequest=_usernameRequest - In the implementation block
@property (nonatomic,retain) IGRequest * signUpRequest;                                                          //@synthesize signUpRequest=_signUpRequest - In the implementation block
@property (assign,nonatomic) char skipEmail;                                                                     //@synthesize skipEmail=_skipEmail - In the implementation block
@property (nonatomic,copy) NSString * fbToken;                                                                   //@synthesize fbToken=_fbToken - In the implementation block
@property (assign,nonatomic) int suggestedUsernameIndex;                                                         //@synthesize suggestedUsernameIndex=_suggestedUsernameIndex - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationUsernameStepView * usernameView;                                 //@synthesize usernameView=_usernameView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * backgroundTapGesture;                                      //@synthesize backgroundTapGesture=_backgroundTapGesture - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationUsernameViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)backgroundTapped;
-(FBSDKAccessToken *)facebookAccessToken;
-(void)setFacebookAccessToken:(FBSDKAccessToken *)arg1 ;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(void)didTapFooterButton;
-(IGRetroRegistrationUsernameStepView *)usernameView;
-(void)didTapNextButton;
-(void)pasteFacebookUserInfo;
-(NSArray *)suggestedUsernames;
-(void)fillSuggestedUsername;
-(void)setSuggestedUsernames:(NSArray *)arg1 ;
-(void)refreshButtonTapped;
-(IGRequest *)signUpRequest;
-(void)startOrRestartUsernameCheckTimer;
-(IGRequest *)usernameRequest;
-(void)setUsernameRequest:(IGRequest *)arg1 ;
-(NSTimer *)usernameCheckTimer;
-(UITapGestureRecognizer *)backgroundTapGesture;
-(void)validateUsername;
-(void)setUsernameCheckTimer:(NSTimer *)arg1 ;
-(void)signUpSuccessHandler:(id)arg1 ;
-(void)signUpfailureHandler:(id)arg1 ;
-(void)setSignUpRequest:(IGRequest *)arg1 ;
-(char)skipEmail;
-(NSString *)forceSignUpCode;
-(NSString *)SMSSignUpCode;
-(NSString *)fbToken;
-(int)suggestedUsernameIndex;
-(void)setSuggestedUsernameIndex:(int)arg1 ;
-(NSDictionary *)facebookInfo;
-(void)setFbToken:(NSString *)arg1 ;
-(void)setSkipEmail:(char)arg1 ;
-(void)accountCreatedWithUserInformation:(id)arg1 ;
-(void)accountRegistrationFailedWithResponse:(id)arg1 ;
-(UIImage *)profilePhoto;
-(id)initWithSuggestedUsernames:(id)arg1 email:(id)arg2 phoneNumber:(id)arg3 facebookInfo:(id)arg4 facebookAccessToken:(id)arg5 SMSSignUpCode:(id)arg6 forceSignUpCode:(id)arg7 fullName:(id)arg8 password:(id)arg9 profilePhoto:(id)arg10 ;
-(void)setFacebookInfo:(NSDictionary *)arg1 ;
-(void)setSMSSignUpCode:(NSString *)arg1 ;
-(void)setForceSignUpCode:(NSString *)arg1 ;
-(void)setProfilePhoto:(UIImage *)arg1 ;
-(void)setUsernameView:(IGRetroRegistrationUsernameStepView *)arg1 ;
-(void)setBackgroundTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationUsernameViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationUsernameViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(NSString *)phoneNumber;
-(id)dictionaryRepresentation;
-(void)registerAccount;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

