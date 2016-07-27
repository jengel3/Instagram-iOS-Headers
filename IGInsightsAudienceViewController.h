
#import <Instagram/IGViewController.h>

@class IGInsightsComponentListViewController, IGInsightsLoggingHelper;

@interface IGInsightsAudienceViewController : IGViewController {

	IGInsightsComponentListViewController* _componentListViewController;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,retain) IGInsightsComponentListViewController * componentListViewController;              //@synthesize componentListViewController=_componentListViewController - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                          //@synthesize loggingHelper=_loggingHelper - In the implementation block
-(id)analyticsModule;
-(char)canHostInlineGallery:(char)arg1 ;
-(IGInsightsLoggingHelper *)loggingHelper;
-(char)prefersTabBarHidden;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(IGInsightsComponentListViewController *)componentListViewController;
-(id)initWithQuery:(id)arg1 loggingHelper:(id)arg2 ;
-(void)setComponentListViewController:(IGInsightsComponentListViewController *)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

