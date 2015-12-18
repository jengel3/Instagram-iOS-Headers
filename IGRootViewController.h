
#import <UIKit/UIViewController.h>
#import <Instagram/IGAnalyticsRaindropProtocol.h>

@class IGNavigationController, UIWindow, UIViewController, NSString, IGAnalyticsMetadata, IGRaindropNavEvent, IGMutableRaindropRankInfo;

@interface IGRootViewController : UIViewController <IGAnalyticsRaindropProtocol> {

	char _isVisible;
	char _isManagingChildViewControllerAppearance;
	IGNavigationController* _registrationController;
	int _loginState;
	UIWindow* _popoverWindow;
	UIViewController* _popoverViewController;

}

@property (nonatomic,readonly) UIViewController * topMostViewController; 
@property (nonatomic,retain) IGNavigationController * registrationController;              //@synthesize registrationController=_registrationController - In the implementation block
@property (assign,nonatomic) int loginState;                                               //@synthesize loginState=_loginState - In the implementation block
@property (nonatomic,readonly) UIViewController * visibleViewController; 
@property (nonatomic,retain) UIWindow * popoverWindow;                                     //@synthesize popoverWindow=_popoverWindow - In the implementation block
@property (nonatomic,retain) UIViewController * popoverViewController;                     //@synthesize popoverViewController=_popoverViewController - In the implementation block
@property (assign,nonatomic) char isVisible;                                               //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) char isManagingChildViewControllerAppearance;                 //@synthesize isManagingChildViewControllerAppearance=_isManagingChildViewControllerAppearance - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGAnalyticsMetadata * analyticsMetadata; 
@property (nonatomic,readonly) IGRaindropNavEvent * currentNavEvent; 
@property (nonatomic,readonly) int viewType; 
@property (nonatomic,readonly) char enableNavState; 
@property (nonatomic,readonly) IGMutableRaindropRankInfo * surfaceRankInfo; 
-(UIViewController *)topMostViewController;
-(IGAnalyticsMetadata *)analyticsMetadata;
-(char)enableNavState;
-(void)presentViewControllerFromTopMostController:(id)arg1 ;
-(IGMutableRaindropRankInfo *)surfaceRankInfo;
-(int)loginState;
-(IGNavigationController *)registrationController;
-(IGRaindropNavEvent *)currentNavEvent;
-(id)viewControllerStack;
-(void)moveAppToLoggedOutStateWithForceAnimated:(char)arg1 isSwitchingUsers:(char)arg2 ;
-(void)moveAppToLoggedInStateWithMainFeedSource:(id)arg1 animated:(char)arg2 ;
-(void)setIsVisible:(char)arg1 ;
-(char)isManagingChildViewControllerAppearance;
-(void)moveToAppLoginState:(int)arg1 mainFeedSource:(id)arg2 animated:(char)arg3 isSwitchingUsers:(char)arg4 ;
-(void)showMainAppControllerWithMainFeedSource:(id)arg1 animated:(char)arg2 ;
-(void)showLoginControllerAnimated:(char)arg1 isSwitchingUsers:(char)arg2 ;
-(void)setIsManagingChildViewControllerAppearance:(char)arg1 ;
-(void)setRegistrationController:(IGNavigationController *)arg1 ;
-(void)setLoginState:(int)arg1 ;
-(UIWindow *)popoverWindow;
-(void)setPopoverWindow:(UIWindow *)arg1 ;
-(UIViewController *)popoverViewController;
-(void)setPopoverViewController:(UIViewController *)arg1 ;
-(id)init;
-(int)preferredStatusBarStyle;
-(void)loadView;
-(int)viewType;
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

