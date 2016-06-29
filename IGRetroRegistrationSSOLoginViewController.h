
#import <UIKit/UIViewController.h>

@protocol IGRetroRegistrationSSOLoginViewControllerDelegate;
@class IGRetroRegistrationSSOLoginView, NSString, NSTimer;

@interface IGRetroRegistrationSSOLoginViewController : UIViewController {

	char _isAuthenticating;
	char _isFetchingLoginInfo;
	id<IGRetroRegistrationSSOLoginViewControllerDelegate> _delegate;
	IGRetroRegistrationSSOLoginView* _ssoLoginView;
	NSString* _userID;
	NSString* _username;
	NSString* _profilePictureURL;
	NSTimer* _loginInfoFetcherTimer;
	int _counter;

}

@property (nonatomic,retain) IGRetroRegistrationSSOLoginView * ssoLoginView;                                     //@synthesize ssoLoginView=_ssoLoginView - In the implementation block
@property (nonatomic,retain) NSString * userID;                                                                  //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) NSString * username;                                                                //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * profilePictureURL;                                                       //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (assign,nonatomic) char isAuthenticating;                                                              //@synthesize isAuthenticating=_isAuthenticating - In the implementation block
@property (assign,nonatomic) char isFetchingLoginInfo;                                                           //@synthesize isFetchingLoginInfo=_isFetchingLoginInfo - In the implementation block
@property (nonatomic,retain) NSTimer * loginInfoFetcherTimer;                                                    //@synthesize loginInfoFetcherTimer=_loginInfoFetcherTimer - In the implementation block
@property (assign,nonatomic) int counter;                                                                        //@synthesize counter=_counter - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationSSOLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setProfilePictureURL:(NSString *)arg1 ;
-(NSString *)profilePictureURL;
-(void)setIsFetchingLoginInfo:(char)arg1 ;
-(void)fetchSSOEnabledUsers;
-(void)setLoginInfoFetcherTimer:(NSTimer *)arg1 ;
-(void)loadSSOAccountDetailsAndLoadView;
-(void)didTapSSOLoginButtonFrom:(id)arg1 ;
-(void)logDidTapLoginButton:(id)arg1 ;
-(void)setIsAuthenticating:(char)arg1 ;
-(IGRetroRegistrationSSOLoginView *)ssoLoginView;
-(void)logSSOLoginSucceeded;
-(void)logDidTapRemoveButton;
-(void)logDidCancelRemove;
-(void)logDidConfirmRemove;
-(NSTimer *)loginInfoFetcherTimer;
-(void)didTapSwitchAccountButton;
-(void)didTapSignUpButton;
-(void)didTapProfilePicture;
-(void)didTapLoginButton;
-(void)didTapRemoveAccountButton;
-(void)setSsoLoginView:(IGRetroRegistrationSSOLoginView *)arg1 ;
-(void)setupButtons;
-(id)getErrorButtonTitle:(id)arg1 ;
-(void)logSSOLoginFailedWithReason:(id)arg1 ;
-(char)isFetchingLoginInfo;
-(id)createIndicatorViewAndAddToLoginButton;
-(void)removeIndicatorViewFromLoginButton:(id)arg1 ;
-(void)handleLoginErrors:(id)arg1 ;
-(void)stopTimer;
-(void)setDelegate:(id<IGRetroRegistrationSSOLoginViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationSSOLoginViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLoad;
-(int)counter;
-(void)setCounter:(int)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)setUsername:(NSString *)arg1 ;
-(char)isAuthenticating;
-(NSString *)username;
@end

