
#import <UIKit/UIViewController.h>

@protocol IGRetroRegistrationWelcomeViewControllerDelegate;
@class IGRetroRegistrationWelcomeView;

@interface IGRetroRegistrationWelcomeViewController : UIViewController {

	id<IGRetroRegistrationWelcomeViewControllerDelegate> _delegate;
	IGRetroRegistrationWelcomeView* _welcomeView;

}

@property (assign,nonatomic,__weak) id<IGRetroRegistrationWelcomeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationWelcomeView * welcomeView;                                      //@synthesize welcomeView=_welcomeView - In the implementation block
-(void)onFacebookAuthSuccess;
-(void)onFacebookAuthCancelled;
-(void)setFacebookButtonLoading:(char)arg1 ;
-(void)handleLoggedInUserForResponse:(id)arg1 ;
-(void)handleEmailAlreadyTakenForResponse:(id)arg1 ;
-(void)handleEmailTakenAutoLoginForResponse:(id)arg1 ;
-(void)handleLockedAccountForResponse:(id)arg1 ;
-(void)loginButtonTapped;
-(void)authWithFacebookForRegistration;
-(void)signupButtonTapped;
-(void)FBButtonTapped;
-(void)handleDistilleryErrorWithCode:(int)arg1 response:(id)arg2 ;
-(/*^block*/id)getCompletionHandler;
-(void)handleNoFBForResponse:(id)arg1 ;
-(void)setWelcomeView:(IGRetroRegistrationWelcomeView *)arg1 ;
-(IGRetroRegistrationWelcomeView *)welcomeView;
-(void)setDelegate:(id<IGRetroRegistrationWelcomeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGRetroRegistrationWelcomeViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)prefersNavigationBarHidden;
@end

