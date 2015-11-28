
#import <UIKit/UIViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGRetroRegistrationSignUpViewControllerDelegate;
@class IGRetroRegistrationSignUpView, IGProfilePictureHelper, NSTimer, NSMutableArray, NSDictionary, UITapGestureRecognizer, IGRequest, NSString, UIImage;

@interface IGRetroRegistrationSignUpViewController : UIViewController <IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGProfilePictureImageViewDelegate, IGCoreTextLinkHandler, UIGestureRecognizerDelegate> {

	char _submitting;
	char _downloadingProfilePicture;
	char _connectedWithFacebook;
	char _connectingWithFacebook;
	char _skipEmail;
	id<IGRetroRegistrationSignUpViewControllerDelegate> _delegate;
	IGRetroRegistrationSignUpView* _signUpView;
	IGProfilePictureHelper* _profilePictureHelper;
	NSTimer* _usernameCheckTimer;
	NSMutableArray* _suggestedUsernames;
	NSDictionary* _facebookUserInfo;
	UITapGestureRecognizer* _tapGesture;
	IGRequest* _signUpRequest;
	int _suggestedUsernameIndex;
	NSString* _email;
	NSString* _userDisplayName;
	UIImage* _profilePhoto;
	NSString* _forceSignUpCode;

}

@property (assign,nonatomic,__weak) id<IGRetroRegistrationSignUpViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationSignUpView * signUpView;                                       //@synthesize signUpView=_signUpView - In the implementation block
@property (nonatomic,retain) IGProfilePictureHelper * profilePictureHelper;                                    //@synthesize profilePictureHelper=_profilePictureHelper - In the implementation block
@property (nonatomic,retain) NSTimer * usernameCheckTimer;                                                     //@synthesize usernameCheckTimer=_usernameCheckTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestedUsernames;                                              //@synthesize suggestedUsernames=_suggestedUsernames - In the implementation block
@property (nonatomic,retain) NSDictionary * facebookUserInfo;                                                  //@synthesize facebookUserInfo=_facebookUserInfo - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                                              //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) IGRequest * signUpRequest;                                                        //@synthesize signUpRequest=_signUpRequest - In the implementation block
@property (assign,nonatomic) int suggestedUsernameIndex;                                                       //@synthesize suggestedUsernameIndex=_suggestedUsernameIndex - In the implementation block
@property (nonatomic,copy) NSString * email;                                                                   //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * userDisplayName;                                                         //@synthesize userDisplayName=_userDisplayName - In the implementation block
@property (nonatomic,retain) UIImage * profilePhoto;                                                           //@synthesize profilePhoto=_profilePhoto - In the implementation block
@property (nonatomic,copy,readonly) NSString * forceSignUpCode;                                                //@synthesize forceSignUpCode=_forceSignUpCode - In the implementation block
@property (assign,nonatomic) char submitting;                                                                  //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic) char downloadingProfilePicture;                                                   //@synthesize downloadingProfilePicture=_downloadingProfilePicture - In the implementation block
@property (assign,nonatomic) char connectedWithFacebook;                                                       //@synthesize connectedWithFacebook=_connectedWithFacebook - In the implementation block
@property (assign,nonatomic) char connectingWithFacebook;                                                      //@synthesize connectingWithFacebook=_connectingWithFacebook - In the implementation block
@property (assign,nonatomic) char skipEmail;                                                                   //@synthesize skipEmail=_skipEmail - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)profilePictureTapped:(id)arg1 ;
-(void)backgroundTapped;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(void)nextButtonTapped;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 ;
-(void)profilePictureHelperWillStartDownloadingProfilePicture:(id)arg1 ;
-(IGProfilePictureHelper *)profilePictureHelper;
-(void)setProfilePictureHelper:(IGProfilePictureHelper *)arg1 ;
-(void)setFacebookUserInfo:(NSDictionary *)arg1 ;
-(void)pasteFacebookUserInfo;
-(void)startOrRestartUsernameCheckTimer;
-(void)getFacebookUserInfo;
-(NSDictionary *)facebookUserInfo;
-(NSMutableArray *)suggestedUsernames;
-(char)skipEmail;
-(void)accountCreatedWithUserInformation:(id)arg1 ;
-(void)setSuggestedUsernames:(NSMutableArray *)arg1 ;
-(void)setSkipEmail:(char)arg1 ;
-(void)setProfilePhoto:(UIImage *)arg1 ;
-(UIImage *)profilePhoto;
-(char)downloadingProfilePicture;
-(void)setDownloadingProfilePicture:(char)arg1 ;
-(char)connectedWithFacebook;
-(void)setConnectedWithFacebook:(char)arg1 ;
-(char)connectingWithFacebook;
-(void)setConnectingWithFacebook:(char)arg1 ;
-(void)validateUsername;
-(NSTimer *)usernameCheckTimer;
-(void)setUsernameCheckTimer:(NSTimer *)arg1 ;
-(IGRetroRegistrationSignUpView *)signUpView;
-(void)setSignUpView:(IGRetroRegistrationSignUpView *)arg1 ;
-(void)loginButtonTapped;
-(NSString *)forceSignUpCode;
-(id)initWithSuggestedUsernames:(id)arg1 email:(id)arg2 facebookInfo:(id)arg3 forceSignUpCode:(id)arg4 ;
-(void)fillSuggestedUsername;
-(NSString *)userDisplayName;
-(IGRequest *)signUpRequest;
-(void)profilePictureTapped;
-(char)isPasswordFieldsValid;
-(void)validateUsernameField:(id)arg1 requestDelay:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(int)suggestedUsernameIndex;
-(void)setSuggestedUsernameIndex:(int)arg1 ;
-(void)cleanUpUsernameField:(id)arg1 ;
-(void)validateUsernameFieldViaNetwork:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)createIndicatorViewAndAddToNextButton;
-(void)removeIndicatorViewFromNextButton:(id)arg1 ;
-(void)signUpSuccessHandler:(id)arg1 ;
-(void)signUpfailureHandler:(id)arg1 ;
-(void)setSignUpRequest:(IGRequest *)arg1 ;
-(void)accountRegistrationFailedWithResponse:(id)arg1 ;
-(void)setUserDisplayName:(NSString *)arg1 ;
-(void)addSuggestedUsernames:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationSignUpViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationSignUpViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(id)dictionaryRepresentation;
-(void)registerAccount;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
@end

