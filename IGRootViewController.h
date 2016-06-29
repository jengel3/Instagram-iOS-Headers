
#import <UIKit/UIViewController.h>
#import <Instagram/IGAnalyticsModule.h>

@class IGNavigationController, UIWindow, UIViewController, NSString;

@interface IGRootViewController : UIViewController <IGAnalyticsModule> {

	char _isVisible;
	char _isManagingChildViewControllerAppearance;
	IGNavigationController* _registrationController;
	int _loginState;
	UIWindow* _popoverWindow;
	UIViewController* _popoverViewController;

}

@property (assign,nonatomic) int loginState;                                               //@synthesize loginState=_loginState - In the implementation block
@property (nonatomic,readonly) UIViewController * visibleViewController; 
@property (nonatomic,retain) IGNavigationController * registrationController;              //@synthesize registrationController=_registrationController - In the implementation block
@property (nonatomic,retain) UIWindow * popoverWindow;                                     //@synthesize popoverWindow=_popoverWindow - In the implementation block
@property (nonatomic,retain) UIViewController * popoverViewController;                     //@synthesize popoverViewController=_popoverViewController - In the implementation block
@property (assign,nonatomic) char isVisible;                                               //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) char isManagingChildViewControllerAppearance;                 //@synthesize isManagingChildViewControllerAppearance=_isManagingChildViewControllerAppearance - In the implementation block
@property (nonatomic,readonly) UIViewController * topMostViewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsMetadata;
-(char)enableNavState;
-(id)analyticsModule;
-(UIViewController *)topMostViewController;
-(void)presentViewControllerFromTopMostController:(id)arg1 ;
-(void)setIsVisible:(char)arg1 ;
-(int)loginState;
-(IGNavigationController *)registrationController;
-(char)isManagingChildViewControllerAppearance;
-(id)viewControllerStack;
-(void)moveToAppLoginState:(int)arg1 animated:(char)arg2 isSwitchingUsers:(char)arg3 hasRecentlyEnabledSSOUsers:(char)arg4 ;
-(char)isStatusBarVolumeViewEnabled;
-(void)showMainAppControllerAnimated:(char)arg1 ;
-(void)showLoginControllerAnimated:(char)arg1 isSwitchingUsers:(char)arg2 hasRecentlyEnabledSSOUsers:(char)arg3 ;
-(void)setIsManagingChildViewControllerAppearance:(char)arg1 ;
-(void)setRegistrationController:(IGNavigationController *)arg1 ;
-(void)moveAppToLoggedInStateAnimated:(char)arg1 ;
-(void)moveAppToLoggedOutStateWithForceAnimated:(char)arg1 isSwitchingUsers:(char)arg2 hasRecentlyEnabledSSOUsers:(char)arg3 ;
-(void)setLoginState:(int)arg1 ;
-(UIWindow *)popoverWindow;
-(void)setPopoverWindow:(UIWindow *)arg1 ;
-(UIViewController *)popoverViewController;
-(void)setPopoverViewController:(UIViewController *)arg1 ;
-(id)init;
-(int)preferredStatusBarStyle;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(UIViewController *)visibleViewController;
-(char)isVisible;
@end

