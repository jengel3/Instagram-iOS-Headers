
#import <UIKit/UIViewController.h>
#import <Instagram/IGFacebookAuthHelperDelegate.h>

@protocol IGRetroRegistrationWelcomeViewControllerDelegate;
@class IGRetroRegistrationWelcomeView, IGFacebookAuthHelper, NSString;

@interface IGRetroRegistrationWelcomeViewController : UIViewController <IGFacebookAuthHelperDelegate> {

	id<IGRetroRegistrationWelcomeViewControllerDelegate> _delegate;
	IGRetroRegistrationWelcomeView* _welcomeView;
	IGFacebookAuthHelper* _fbAuthHelper;

}

@property (assign,nonatomic,__weak) id<IGRetroRegistrationWelcomeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationWelcomeView * welcomeView;                                      //@synthesize welcomeView=_welcomeView - In the implementation block
@property (nonatomic,retain) IGFacebookAuthHelper * fbAuthHelper;                                               //@synthesize fbAuthHelper=_fbAuthHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissButtonTapped;
-(void)facebookAuthHelper:(id)arg1 willProceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)facebookAuthHelperDidTapSignUpButton:(id)arg1 ;
-(void)facebookAuthHelperDidTapLogInButton:(id)arg1 ;
-(void)facebookAuthHelper:(id)arg1 willProceedEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(void)facebookAuthHelper:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)facebookAuthHelper:(id)arg1 willResetPasswordWithViewController:(id)arg2 ;
-(void)setFacebookButtonLoading:(char)arg1 ;
-(IGFacebookAuthHelper *)fbAuthHelper;
-(void)authWithFacebookForRegistration;
-(void)onFacebookAuthSuccess:(id)arg1 ;
-(void)onFacebookAuthCancelled:(id)arg1 ;
-(/*^block*/id)fbAuthCompletionHandler;
-(void)setFbAuthHelper:(IGFacebookAuthHelper *)arg1 ;
-(void)loginButtonTapped;
-(void)signupButtonTapped;
-(void)FBButtonTapped;
-(void)handleLoggedInUserForResponse:(id)arg1 facebookAccessToken:(id)arg2 ;
-(void)fetchFBUsername;
-(void)setWelcomeView:(IGRetroRegistrationWelcomeView *)arg1 ;
-(IGRetroRegistrationWelcomeView *)welcomeView;
-(void)setDelegate:(id<IGRetroRegistrationWelcomeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGRetroRegistrationWelcomeViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)prefersNavigationBarHidden;
@end

