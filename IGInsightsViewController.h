
#import <Instagram/IGViewController.h>
#import <Instagram/IGInsightsComponentListViewControllerDelegate.h>
#import <Instagram/IGTopAccountWelcomeNUXViewControllerDelegate.h>

@class IGInsightsLoggingHelper, UIViewController, NSString;

@interface IGInsightsViewController : IGViewController <IGInsightsComponentListViewControllerDelegate, IGTopAccountWelcomeNUXViewControllerDelegate> {

	IGInsightsLoggingHelper* _loggingHelper;
	UIViewController* _currentViewController;

}

@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                 //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,readonly) UIViewController * currentViewController;              //@synthesize currentViewController=_currentViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithEntryPoint:(id)arg1 ;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)didAcceptTermsAndConditionsWithWelcomeNUXVIewController:(id)arg1 ;
-(id)initWithLoggingHelper:(id)arg1 ;
-(char)canHostInlineGallery:(char)arg1 ;
-(UIViewController *)currentViewController;
-(id)timezoneName;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)didSelectComponentListViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(void)setUpInitialViewController;
-(id)createWelcomeViewControllerForTopAccounts;
-(id)createComponentsViewController;
-(id)generateQuery;
-(void)transitionToViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

