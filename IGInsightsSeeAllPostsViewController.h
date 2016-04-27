
#import <Instagram/IGViewController.h>
#import <Instagram/IGInsightsDataProviderDelegate.h>
#import <Instagram/IGInsightsSeeAllPostsTabContentViewControllerDelegate.h>

@class UIActivityIndicatorView, IGInsightsDataProvider, NSArray, IGInsightsFilterUnit, NSString, IGInsightsQuery, IGInsightsLoggingHelper, IGInsightsSeeAllPostsTabContentViewController;

@interface IGInsightsSeeAllPostsViewController : IGViewController <IGInsightsDataProviderDelegate, IGInsightsSeeAllPostsTabContentViewControllerDelegate> {

	UIActivityIndicatorView* _spinner;
	IGInsightsDataProvider* _dataProvider;
	NSArray* _defaultTabComponents;
	IGInsightsFilterUnit* _filterUnit;
	NSString* _filterSummaryTitle;
	IGInsightsQuery* _buttonQuery;
	NSArray* _educationUnits;
	IGInsightsLoggingHelper* _loggingHelper;
	IGInsightsSeeAllPostsTabContentViewController* _tabPageViewController;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                  //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * dataProvider;                                              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,copy) NSArray * defaultTabComponents;                                                       //@synthesize defaultTabComponents=_defaultTabComponents - In the implementation block
@property (nonatomic,retain) IGInsightsFilterUnit * filterUnit;                                                  //@synthesize filterUnit=_filterUnit - In the implementation block
@property (nonatomic,copy) NSString * filterSummaryTitle;                                                        //@synthesize filterSummaryTitle=_filterSummaryTitle - In the implementation block
@property (nonatomic,retain) IGInsightsQuery * buttonQuery;                                                      //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (nonatomic,copy) NSArray * educationUnits;                                                             //@synthesize educationUnits=_educationUnits - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                            //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) IGInsightsSeeAllPostsTabContentViewController * tabPageViewController;              //@synthesize tabPageViewController=_tabPageViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGInsightsQuery *)buttonQuery;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(void)requestFailureForDataProvider:(id)arg1 errorMessage:(id)arg2 ;
-(void)setButtonQuery:(IGInsightsQuery *)arg1 ;
-(id)initWithButtonQuery:(id)arg1 loggingHelper:(id)arg2 ;
-(IGInsightsSeeAllPostsTabContentViewController *)tabPageViewController;
-(void)setupTabBarViewController;
-(void)requestTabBarItemsAndDefaultTabContent;
-(void)setDefaultTabComponents:(NSArray *)arg1 ;
-(void)setUpDefaultComponentsEducationUnit;
-(id)createTabContentViewControllerWithQuery:(id)arg1 ;
-(void)setTabPageViewController:(IGInsightsSeeAllPostsTabContentViewController *)arg1 ;
-(NSArray *)defaultTabComponents;
-(void)didSelectNavigateInSeeAllPostsTabContentViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(void)initializeSpinner;
-(NSArray *)educationUnits;
-(void)setFilterUnit:(IGInsightsFilterUnit *)arg1 ;
-(void)setFilterSummaryTitle:(NSString *)arg1 ;
-(void)setEducationUnits:(NSArray *)arg1 ;
-(NSString *)filterSummaryTitle;
-(IGInsightsFilterUnit *)filterUnit;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)setDataProvider:(IGInsightsDataProvider *)arg1 ;
-(IGInsightsDataProvider *)dataProvider;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)startRequest;
@end

