
#import <UIKit/UIViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGRetroRegistrationSignUpViewControllerDelegate;
@class NSMutableArray, IGRetroRegistrationSignUpView, IGProfilePictureHelper, NSTimer, NSDictionary, FBSDKAccessToken, UITapGestureRecognizer, IGRequest, NSString, UIImage;

@interface IGRetroRegistrationSignUpViewController : UIViewController <IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGProfilePictureImageViewDelegate, IGCoreTextLinkHandler, UIGestureRecognizerDelegate> {

	char _submitting;
	char _skipEmail;
	char _usernameFieldTappedOnce;
	char _shouldSplitUsername;
	id<IGRetroRegistrationSignUpViewControllerDelegate> _delegate;
	NSMutableArray* _suggestedUsernames;
	IGRetroRegistrationSignUpView* _signUpView;
	IGProfilePictureHelper* _profilePictureHelper;
	NSTimer* _usernameCheckTimer;
	NSDictionary* _facebookUserInfo;
	FBSDKAccessToken* _facebookAccessToken;
	UITapGestureRecognizer* _tapGesture;
	IGRequest* _signUpRequest;
	IGRequest* _usernameRequest;
	int _suggestedUsernameIndex;
	NSString* _email;
	NSString* _userDisplayName;
	NSString* _fbToken;
	UIImage* _profilePhoto;
	NSString* _forceSignUpCode;
	NSString* _SMSSignUpCode;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) IGRetroRegistrationSignUpView * signUpView;                                       //@synthesize signUpView=_signUpView - In the implementation block
@property (nonatomic,retain) IGProfilePictureHelper * profilePictureHelper;                                    //@synthesize profilePictureHelper=_profilePictureHelper - In the implementation block
@property (nonatomic,retain) NSTimer * usernameCheckTimer;                                                     //@synthesize usernameCheckTimer=_usernameCheckTimer - In the implementation block
@property (nonatomic,retain) NSDictionary * facebookUserInfo;                                                  //@synthesize facebookUserInfo=_facebookUserInfo - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * facebookAccessToken;                                           //@synthesize facebookAccessToken=_facebookAccessToken - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                                              //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) IGRequest * signUpRequest;                                                        //@synthesize signUpRequest=_signUpRequest - In the implementation block
@property (nonatomic,retain) IGRequest * usernameRequest;                                                      //@synthesize usernameRequest=_usernameRequest - In the implementation block
@property (assign,nonatomic) int suggestedUsernameIndex;                                                       //@synthesize suggestedUsernameIndex=_suggestedUsernameIndex - In the implementation block
@property (nonatomic,copy) NSString * email;                                                                   //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * userDisplayName;                                                         //@synthesize userDisplayName=_userDisplayName - In the implementation block
@property (nonatomic,copy) NSString * fbToken;                                                                 //@synthesize fbToken=_fbToken - In the implementation block
@property (nonatomic,retain) UIImage * profilePhoto;                                                           //@synthesize profilePhoto=_profilePhoto - In the implementation block
@property (nonatomic,copy,readonly) NSString * forceSignUpCode;                                                //@synthesize forceSignUpCode=_forceSignUpCode - In the implementation block
@property (setter=MSSignUpCode,nonatomic,copy,readonly) NSString * SMSSignUpCode;                              //@synthesize SMSSignUpCode=_SMSSignUpCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;                                                    //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) char submitting;                                                                  //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic) char skipEmail;                                                                   //@synthesize skipEmail=_skipEmail - In the implementation block
@property (assign,nonatomic) char usernameFieldTappedOnce;                                                     //@synthesize usernameFieldTappedOnce=_usernameFieldTappedOnce - In the implementation block
@property (nonatomic,readonly) char shouldSplitUsername;                                                       //@synthesize shouldSplitUsername=_shouldSplitUsername - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationSignUpViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestedUsernames;                                              //@synthesize suggestedUsernames=_suggestedUsernames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)backgroundTapped;
-(void)nextButtonTapped;
-(void)profilePictureTapped:(id)arg1 ;
-(FBSDKAccessToken *)facebookAccessToken;
-(void)setFacebookAccessToken:(FBSDKAccessToken *)arg1 ;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(char)shouldSplitUsername;
-(void)setProfilePictureHelper:(IGProfilePictureHelper *)arg1 ;
-(IGProfilePictureHelper *)profilePictureHelper;
-(void)setSignUpView:(IGRetroRegistrationSignUpView *)arg1 ;
-(IGRetroRegistrationSignUpView *)signUpView;
-(void)loginButtonTapped;
-(NSString *)userDisplayName;
-(NSDictionary *)facebookUserInfo;
-(void)profilePictureTapped;
-(char)isPasswordFieldsValid;
-(void)setUserDisplayName:(NSString *)arg1 ;
-(void)setUsernameFieldTappedOnce:(char)arg1 ;
-(void)prefillUsernameFieldOnFirstTap;
-(char)usernameFieldTappedOnce;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(int)arg3 ;
-(void)profilePictureHelperDidGetNewFacebookAccessToken:(id)arg1 ;
-(id)initWithSuggestedUsernames:(id)arg1 email:(id)arg2 phoneNumber:(id)arg3 facebookInfo:(id)arg4 facebookAccessToken:(id)arg5 SMSSignUpCode:(id)arg6 forceSignUpCode:(id)arg7 ;
-(void)setFacebookUserInfo:(NSDictionary *)arg1 ;
-(void)pasteFacebookUserInfo;
-(NSMutableArray *)suggestedUsernames;
-(void)fillSuggestedUsername;
-(void)setSuggestedUsernames:(NSMutableArray *)arg1 ;
-(void)refreshButtonTapped;
-(IGRequest *)signUpRequest;
-(void)startOrRestartUsernameCheckTimer;
-(IGRequest *)usernameRequest;
-(void)setUsernameRequest:(IGRequest *)arg1 ;
-(NSTimer *)usernameCheckTimer;
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
-(void)setFbToken:(NSString *)arg1 ;
-(void)setSkipEmail:(char)arg1 ;
-(void)accountCreatedWithUserInformation:(id)arg1 ;
-(void)accountRegistrationFailedWithResponse:(id)arg1 ;
-(UIImage *)profilePhoto;
-(void)setProfilePhoto:(UIImage *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationSignUpViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationSignUpViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
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
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
@end

