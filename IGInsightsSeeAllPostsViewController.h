
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGInsightsSeeAllPostsTabContentViewDataSourceDelegate.h>
#import <Instagram/IGInsightsSeeAllPostsFilterSelectorViewDelegate.h>
#import <Instagram/IGInsightsContentRowListViewDelegate.h>

@class IGListAdapter, IGListAdapterUpdaterLogger, NSMutableArray, IGListCollectionView, IGInsightsMediaFeedListItemController, UIActivityIndicatorView, IGRefreshControl, IGInsightsSeeAllPostsTabContentViewDataSource, IGInsightsSeeAllPostsFilterSummaryView, IGInsightsSeeAllPostsFilterSelectorView, NSArray, IGInsightsFilterUnit, UIView, IGInsightsLoggingHelper, IGInsightsQuery, NSString;

@interface IGInsightsSeeAllPostsViewController : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGInsightsSeeAllPostsTabContentViewDataSourceDelegate, IGInsightsSeeAllPostsFilterSelectorViewDelegate, IGInsightsContentRowListViewDelegate> {

	char _showSelectorView;
	IGListAdapter* _listAdapter;
	IGListAdapterUpdaterLogger* _adapterPerfLogger;
	NSMutableArray* _objects;
	IGListCollectionView* _collectionView;
	IGInsightsMediaFeedListItemController* _feedListItemController;
	int _mediaCellCategory;
	UIActivityIndicatorView* _spinner;
	IGRefreshControl* _refreshControl;
	IGInsightsSeeAllPostsTabContentViewDataSource* _dataSource;
	IGInsightsSeeAllPostsFilterSummaryView* _summaryView;
	IGInsightsSeeAllPostsFilterSelectorView* _selectorView;
	unsigned _activeMediaTypeIndex;
	unsigned _activeDataOrderingIndex;
	unsigned _activeTimeframeIndex;
	unsigned _queriedMediaTypeIndex;
	unsigned _queriedDataOrderingIndex;
	unsigned _queriedTimeframeIndex;
	NSArray* _mediaTypes;
	NSArray* _dataOrderings;
	NSArray* _timeframes;
	NSArray* _mediaTypeQueryItems;
	NSArray* _dataOrderingQueryItems;
	NSArray* _timeframeQueryItems;
	IGInsightsFilterUnit* _filterUnit;
	NSArray* _educationUnits;
	UIView* _overlayForMainView;
	IGInsightsLoggingHelper* _loggingHelper;
	IGInsightsQuery* _buttonQuery;

}

@property (nonatomic,retain) IGListAdapter * listAdapter;                                                 //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGListAdapterUpdaterLogger * adapterPerfLogger;                            //@synthesize adapterPerfLogger=_adapterPerfLogger - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                                                    //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) IGListCollectionView * collectionView;                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGInsightsMediaFeedListItemController * feedListItemController;              //@synthesize feedListItemController=_feedListItemController - In the implementation block
@property (assign,nonatomic) int mediaCellCategory;                                                       //@synthesize mediaCellCategory=_mediaCellCategory - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                           //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGRefreshControl * refreshControl;                                           //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) IGInsightsSeeAllPostsTabContentViewDataSource * dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGInsightsSeeAllPostsFilterSummaryView * summaryView;                        //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,retain) IGInsightsSeeAllPostsFilterSelectorView * selectorView;                      //@synthesize selectorView=_selectorView - In the implementation block
@property (assign,nonatomic) unsigned activeMediaTypeIndex;                                               //@synthesize activeMediaTypeIndex=_activeMediaTypeIndex - In the implementation block
@property (assign,nonatomic) unsigned activeDataOrderingIndex;                                            //@synthesize activeDataOrderingIndex=_activeDataOrderingIndex - In the implementation block
@property (assign,nonatomic) unsigned activeTimeframeIndex;                                               //@synthesize activeTimeframeIndex=_activeTimeframeIndex - In the implementation block
@property (assign,nonatomic) unsigned queriedMediaTypeIndex;                                              //@synthesize queriedMediaTypeIndex=_queriedMediaTypeIndex - In the implementation block
@property (assign,nonatomic) unsigned queriedDataOrderingIndex;                                           //@synthesize queriedDataOrderingIndex=_queriedDataOrderingIndex - In the implementation block
@property (assign,nonatomic) unsigned queriedTimeframeIndex;                                              //@synthesize queriedTimeframeIndex=_queriedTimeframeIndex - In the implementation block
@property (nonatomic,copy) NSArray * mediaTypes;                                                          //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (nonatomic,copy) NSArray * dataOrderings;                                                       //@synthesize dataOrderings=_dataOrderings - In the implementation block
@property (nonatomic,copy) NSArray * timeframes;                                                          //@synthesize timeframes=_timeframes - In the implementation block
@property (nonatomic,retain) NSArray * mediaTypeQueryItems;                                               //@synthesize mediaTypeQueryItems=_mediaTypeQueryItems - In the implementation block
@property (nonatomic,retain) NSArray * dataOrderingQueryItems;                                            //@synthesize dataOrderingQueryItems=_dataOrderingQueryItems - In the implementation block
@property (nonatomic,retain) NSArray * timeframeQueryItems;                                               //@synthesize timeframeQueryItems=_timeframeQueryItems - In the implementation block
@property (nonatomic,retain) IGInsightsFilterUnit * filterUnit;                                           //@synthesize filterUnit=_filterUnit - In the implementation block
@property (nonatomic,copy) NSArray * educationUnits;                                                      //@synthesize educationUnits=_educationUnits - In the implementation block
@property (assign,nonatomic) char showSelectorView;                                                       //@synthesize showSelectorView=_showSelectorView - In the implementation block
@property (nonatomic,retain) UIView * overlayForMainView;                                                 //@synthesize overlayForMainView=_overlayForMainView - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                     //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) IGInsightsQuery * buttonQuery;                                               //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(char)canHostInlineGallery:(char)arg1 ;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)reloadDataFromPullToRefresh;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(IGListAdapterUpdaterLogger *)adapterPerfLogger;
-(void)overlayViewTapped:(id)arg1 ;
-(UIView *)overlayForMainView;
-(void)setOverlayForMainView:(UIView *)arg1 ;
-(IGInsightsQuery *)buttonQuery;
-(void)setButtonQuery:(IGInsightsQuery *)arg1 ;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)initializeSpinner;
-(void)needAnimateContentRowListView:(id)arg1 upForDistance:(float)arg2 ;
-(void)setFilterUnit:(IGInsightsFilterUnit *)arg1 ;
-(NSArray *)educationUnits;
-(void)mediaBundleRequestFailureForInsightsSeeAllPostsTabContentViewDataSource:(id)arg1 errorMessage:(id)arg2 ;
-(void)setEducationUnits:(NSArray *)arg1 ;
-(void)didUpdateMediaBundlesForInsightsSeeAllPostsTabContentViewDataSource:(id)arg1 ;
-(id)initWithQuery:(id)arg1 loggingHelper:(id)arg2 ;
-(int)mediaCellCategory;
-(void)setMediaCellCategory:(int)arg1 ;
-(void)setSummaryView:(IGInsightsSeeAllPostsFilterSummaryView *)arg1 ;
-(void)summaryViewClick:(id)arg1 ;
-(IGInsightsSeeAllPostsFilterSummaryView *)summaryView;
-(void)setSelectorView:(IGInsightsSeeAllPostsFilterSelectorView *)arg1 ;
-(IGInsightsSeeAllPostsFilterSelectorView *)selectorView;
-(char)showSelectorView;
-(void)setActiveMediaTypeIndex:(unsigned)arg1 ;
-(void)updateOrderingAndTimeframeForMediaTypeCell:(id)arg1 ;
-(void)resetOrderingandTimeframeActiveIndexIfNeeded;
-(NSArray *)dataOrderings;
-(void)setDataOrderings:(NSArray *)arg1 ;
-(NSArray *)timeframes;
-(void)setTimeframes:(NSArray *)arg1 ;
-(unsigned)activeDataOrderingIndex;
-(void)setActiveDataOrderingIndex:(unsigned)arg1 ;
-(unsigned)activeTimeframeIndex;
-(void)setActiveTimeframeIndex:(unsigned)arg1 ;
-(id)currentQueryItems;
-(void)dismissSelectorViewAndStartQuery:(id)arg1 ;
-(void)setQueriedDataOrderingIndex:(unsigned)arg1 ;
-(unsigned)activeMediaTypeIndex;
-(void)setQueriedMediaTypeIndex:(unsigned)arg1 ;
-(void)setQueriedTimeframeIndex:(unsigned)arg1 ;
-(void)updateSummaryView;
-(unsigned)queriedDataOrderingIndex;
-(int)mediaCellCategoryFromActiveDataOrderingIndex:(unsigned)arg1 ;
-(void)logFilterApply;
-(void)parseFilterUnit;
-(void)updateFilterViews;
-(IGInsightsMediaFeedListItemController *)feedListItemController;
-(void)logSeeAllPostsPageLoaded;
-(void)logMediaBundleFetchFailureWithErrorMessage:(id)arg1 ;
-(void)dismissSelectorView;
-(void)resetSelectorViewActiveIndexAfterDismiss;
-(void)setShowSelectorView:(char)arg1 ;
-(void)startRequestHideCollectionView;
-(unsigned)queriedMediaTypeIndex;
-(unsigned)queriedTimeframeIndex;
-(void)logFilterAppear;
-(NSArray *)mediaTypeQueryItems;
-(NSArray *)dataOrderingQueryItems;
-(NSArray *)timeframeQueryItems;
-(void)setMediaTypeQueryItems:(NSArray *)arg1 ;
-(void)updateActiveMediaType;
-(void)updateActiveOrderingAndTimeframe;
-(unsigned)getActiveIndexForMediaType:(id)arg1 ;
-(unsigned)getActiveIndexForDataOrdering:(id)arg1 ;
-(unsigned)getActiveIndexForTimeframe:(id)arg1 ;
-(void)setDataOrderingQueryItems:(NSArray *)arg1 ;
-(void)setTimeframeQueryItems:(NSArray *)arg1 ;
-(void)didSelectMediaTypeOnSelectorView:(id)arg1 AtIndex:(unsigned)arg2 ;
-(void)didSelectDataOrderingOnSelectorView:(id)arg1 AtIndex:(unsigned)arg2 ;
-(void)didSelectTimeframeOnSelectorView:(id)arg1 AtIndex:(unsigned)arg2 ;
-(void)didTapSubmitButton;
-(void)setFeedListItemController:(IGInsightsMediaFeedListItemController *)arg1 ;
-(IGInsightsFilterUnit *)filterUnit;
-(NSMutableArray *)objects;
-(void)setDataSource:(IGInsightsSeeAllPostsTabContentViewDataSource *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(IGInsightsSeeAllPostsTabContentViewDataSource *)dataSource;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setMediaTypes:(NSArray *)arg1 ;
-(NSArray *)mediaTypes;
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
-(void)setRefreshControl:(IGRefreshControl *)arg1 ;
-(IGRefreshControl *)refreshControl;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)startRequest;
-(void)setObjects:(NSMutableArray *)arg1 ;
@end

