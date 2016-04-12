
#import <Instagram/IGViewController.h>
#import <Instagram/IGInsightsComponentListViewControllerDelegate.h>

@class IGInsightsComponentListViewController, IGInsightsLoggingHelper, NSString;

@interface IGInsightsViewController : IGViewController <IGInsightsComponentListViewControllerDelegate> {

	IGInsightsComponentListViewController* _componentListViewController;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,retain) IGInsightsComponentListViewController * componentListViewController;              //@synthesize componentListViewController=_componentListViewController - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                          //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEntryPoint:(id)arg1 ;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(id)timezoneName;
-(IGInsightsComponentListViewController *)componentListViewController;
-(void)setComponentListViewController:(IGInsightsComponentListViewController *)arg1 ;
-(void)didSelectComponentListViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(id)generateQuery;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

