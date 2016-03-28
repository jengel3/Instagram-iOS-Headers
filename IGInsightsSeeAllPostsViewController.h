
#import <Instagram/IGViewController.h>
#import <Instagram/IGInsightsDataProviderDelegate.h>
#import <Instagram/IGInsightsSeeAllPostsTabContentViewControllerDelegate.h>
#import <Instagram/IGInsightsTabBarControllerDelegate.h>

@class IGInsightsTabBarController, UIActivityIndicatorView, IGInsightsDataProvider, NSArray, IGChevronTitleButton, NSString, IGInsightsQuery;

@interface IGInsightsSeeAllPostsViewController : IGViewController <IGInsightsDataProviderDelegate, IGInsightsSeeAllPostsTabContentViewControllerDelegate, IGInsightsTabBarControllerDelegate> {

	char _needRefreshView;
	IGInsightsTabBarController* _tabBarViewController;
	UIActivityIndicatorView* _spinner;
	IGInsightsDataProvider* _dataProvider;
	NSArray* _defaultTabComponents;
	NSArray* _defaultTabMediaOrderSelectorTabs;
	IGChevronTitleButton* _postTypeButton;
	NSArray* _filterMediaTypeUnits;
	NSString* _filterSummaryTitle;
	NSArray* _titles;
	unsigned _activeIndex;
	IGInsightsQuery* _buttonQuery;
	NSArray* _educationUnits;

}

@property (nonatomic,retain) IGInsightsTabBarController * tabBarViewController;              //@synthesize tabBarViewController=_tabBarViewController - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * dataProvider;                          //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,copy) NSArray * defaultTabComponents;                                   //@synthesize defaultTabComponents=_defaultTabComponents - In the implementation block
@property (nonatomic,copy) NSArray * defaultTabMediaOrderSelectorTabs;                       //@synthesize defaultTabMediaOrderSelectorTabs=_defaultTabMediaOrderSelectorTabs - In the implementation block
@property (nonatomic,retain) IGChevronTitleButton * postTypeButton;                          //@synthesize postTypeButton=_postTypeButton - In the implementation block
@property (nonatomic,copy) NSArray * filterMediaTypeUnits;                                   //@synthesize filterMediaTypeUnits=_filterMediaTypeUnits - In the implementation block
@property (nonatomic,copy) NSString * filterSummaryTitle;                                    //@synthesize filterSummaryTitle=_filterSummaryTitle - In the implementation block
@property (assign,nonatomic) char needRefreshView;                                           //@synthesize needRefreshView=_needRefreshView - In the implementation block
@property (nonatomic,copy) NSArray * titles;                                                 //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) unsigned activeIndex;                                           //@synthesize activeIndex=_activeIndex - In the implementation block
@property (nonatomic,retain) IGInsightsQuery * buttonQuery;                                  //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (nonatomic,copy) NSArray * educationUnits;                                         //@synthesize educationUnits=_educationUnits - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGInsightsQuery *)buttonQuery;
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(void)failedToGetAccessTokenForDataProvider:(id)arg1 ;
-(void)setButtonQuery:(IGInsightsQuery *)arg1 ;
-(id)initWithButtonQuery:(id)arg1 ;
-(void)setActiveIndex:(unsigned)arg1 ;
-(unsigned)activeIndex;
-(void)setFilterMediaTypeUnits:(NSArray *)arg1 ;
-(void)setFilterSummaryTitle:(NSString *)arg1 ;
-(void)setEducationUnits:(NSArray *)arg1 ;
-(void)initializeSpinner;
-(void)didSelectNavigateInSeeAllPostsTabContentViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(NSArray *)educationUnits;
-(NSString *)filterSummaryTitle;
-(NSArray *)filterMediaTypeUnits;
-(IGInsightsTabBarController *)tabBarViewController;
-(void)setupTabBarViewController;
-(void)requestTabBarItemsAndDefaultTabContent;
-(void)setDefaultTabComponents:(NSArray *)arg1 ;
-(void)setUpDefaultComponentsEducationUnit;
-(void)setDefaultTabMediaOrderSelectorTabs:(NSArray *)arg1 ;
-(id)createTabContentViewControllerWithQuery:(id)arg1 isDefaultTab:(char)arg2 ;
-(NSArray *)defaultTabComponents;
-(void)insightsTabBarController:(id)arg1 tappedSegmentIndex:(unsigned)arg2 ;
-(id)getTitlesFromDropDownCells:(id)arg1 ;
-(void)setTabBarViewController:(IGInsightsTabBarController *)arg1 ;
-(NSArray *)defaultTabMediaOrderSelectorTabs;
-(IGChevronTitleButton *)postTypeButton;
-(void)setPostTypeButton:(IGChevronTitleButton *)arg1 ;
-(char)needRefreshView;
-(void)setNeedRefreshView:(char)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setTitles:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(NSArray *)titles;
-(void)setDataProvider:(IGInsightsDataProvider *)arg1 ;
-(IGInsightsDataProvider *)dataProvider;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)startRequest;
@end

