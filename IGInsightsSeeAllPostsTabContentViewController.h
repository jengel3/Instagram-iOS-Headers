
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGInsightsSeeAllPostsTabContentViewDataSourceDelegate.h>
#import <Instagram/IGInsightsSeeAllPostsFilterSelectorViewDelegate.h>
#import <Instagram/IGInsightsContentRowListViewDelegate.h>

@protocol IGInsightsSeeAllPostsTabContentViewControllerDelegate;
@class IGListAdapter, NSMutableArray, IGListCollectionView, IGInsightsMediaFeedListItemController, UIActivityIndicatorView, NSDictionary, IGPullToRefreshViewManager, IGPullToRefreshView, IGInsightsSeeAllPostsTabContentViewDataSource, IGInsightsSeeAllPostsFilterSummaryView, IGInsightsSeeAllPostsFilterSelectorView, NSArray, UIView, NSString;

@interface IGInsightsSeeAllPostsTabContentViewController : UIViewController <IGFeedNetworkSourceDelegate, IGListAdapterDataSource, UICollectionViewDelegate, IGPullToRefreshProtocol, IGInsightsSeeAllPostsTabContentViewDataSourceDelegate, IGInsightsSeeAllPostsFilterSelectorViewDelegate, IGInsightsContentRowListViewDelegate> {

	char _isDefaultTab;
	char _showSelectorView;
	id<IGInsightsSeeAllPostsTabContentViewControllerDelegate> _delegate;
	IGListAdapter* _listAdapter;
	NSMutableArray* _objects;
	IGListCollectionView* _collectionView;
	IGInsightsMediaFeedListItemController* _feedListItemController;
	int _mediaCellCategory;
	UIActivityIndicatorView* _spinner;
	NSDictionary* _buttonToMediaCellCategoryMapping;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	IGPullToRefreshView* _pullRefreshControlView;
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
	NSArray* _filterMediaTypeUnits;
	NSArray* _educationUnits;
	UIView* _overlayForMainView;

}

@property (assign,nonatomic,__weak) id<IGInsightsSeeAllPostsTabContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGListAdapter * listAdapter;                                                            //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                                                               //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) IGListCollectionView * collectionView;                                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGInsightsMediaFeedListItemController * feedListItemController;                         //@synthesize feedListItemController=_feedListItemController - In the implementation block
@property (assign,nonatomic) int mediaCellCategory;                                                                  //@synthesize mediaCellCategory=_mediaCellCategory - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                      //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,copy) NSDictionary * buttonToMediaCellCategoryMapping;                                          //@synthesize buttonToMediaCellCategoryMapping=_buttonToMediaCellCategoryMapping - In the implementation block
@property (assign,nonatomic) char isDefaultTab;                                                                      //@synthesize isDefaultTab=_isDefaultTab - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;                                  //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (nonatomic,retain) IGPullToRefreshView * pullRefreshControlView;                                           //@synthesize pullRefreshControlView=_pullRefreshControlView - In the implementation block
@property (nonatomic,retain) IGInsightsSeeAllPostsTabContentViewDataSource * dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGInsightsSeeAllPostsFilterSummaryView * summaryView;                                   //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,retain) IGInsightsSeeAllPostsFilterSelectorView * selectorView;                                 //@synthesize selectorView=_selectorView - In the implementation block
@property (assign,nonatomic) unsigned activeMediaTypeIndex;                                                          //@synthesize activeMediaTypeIndex=_activeMediaTypeIndex - In the implementation block
@property (assign,nonatomic) unsigned activeDataOrderingIndex;                                                       //@synthesize activeDataOrderingIndex=_activeDataOrderingIndex - In the implementation block
@property (assign,nonatomic) unsigned activeTimeframeIndex;                                                          //@synthesize activeTimeframeIndex=_activeTimeframeIndex - In the implementation block
@property (assign,nonatomic) unsigned queriedMediaTypeIndex;                                                         //@synthesize queriedMediaTypeIndex=_queriedMediaTypeIndex - In the implementation block
@property (assign,nonatomic) unsigned queriedDataOrderingIndex;                                                      //@synthesize queriedDataOrderingIndex=_queriedDataOrderingIndex - In the implementation block
@property (assign,nonatomic) unsigned queriedTimeframeIndex;                                                         //@synthesize queriedTimeframeIndex=_queriedTimeframeIndex - In the implementation block
@property (nonatomic,copy) NSArray * mediaTypes;                                                                     //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (nonatomic,copy) NSArray * dataOrderings;                                                                  //@synthesize dataOrderings=_dataOrderings - In the implementation block
@property (nonatomic,copy) NSArray * timeframes;                                                                     //@synthesize timeframes=_timeframes - In the implementation block
@property (nonatomic,retain) NSArray * mediaTypeQueryItems;                                                          //@synthesize mediaTypeQueryItems=_mediaTypeQueryItems - In the implementation block
@property (nonatomic,retain) NSArray * dataOrderingQueryItems;                                                       //@synthesize dataOrderingQueryItems=_dataOrderingQueryItems - In the implementation block
@property (nonatomic,retain) NSArray * timeframeQueryItems;                                                          //@synthesize timeframeQueryItems=_timeframeQueryItems - In the implementation block
@property (nonatomic,copy) NSArray * filterMediaTypeUnits;                                                           //@synthesize filterMediaTypeUnits=_filterMediaTypeUnits - In the implementation block
@property (nonatomic,copy) NSArray * educationUnits;                                                                 //@synthesize educationUnits=_educationUnits - In the implementation block
@property (assign,nonatomic) char showSelectorView;                                                                  //@synthesize showSelectorView=_showSelectorView - In the implementation block
@property (nonatomic,retain) UIView * overlayForMainView;                                                            //@synthesize overlayForMainView=_overlayForMainView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(IGPullToRefreshView *)pullRefreshControlView;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)setPullRefreshControlView:(IGPullToRefreshView *)arg1 ;
-(int)mediaCellCategory;
-(void)setMediaCellCategory:(int)arg1 ;
-(void)setFilterMediaTypeUnits:(NSArray *)arg1 ;
-(void)setEducationUnits:(NSArray *)arg1 ;
-(void)_initializeButtonToMediaCellCategoryMapping;
-(unsigned)activeDataOrderingIndex;
-(char)shouldFetchOnInit;
-(void)setButtonToMediaCellCategoryMapping:(NSDictionary *)arg1 ;
-(void)setSummaryView:(IGInsightsSeeAllPostsFilterSummaryView *)arg1 ;
-(void)summaryViewClick:(id)arg1 ;
-(IGInsightsSeeAllPostsFilterSummaryView *)summaryView;
-(void)loadOverlays;
-(void)setSelectorView:(IGInsightsSeeAllPostsFilterSelectorView *)arg1 ;
-(IGInsightsSeeAllPostsFilterSelectorView *)selectorView;
-(void)setOverlayForMainView:(UIView *)arg1 ;
-(UIView *)overlayForMainView;
-(void)overlayViewTapped:(id)arg1 ;
-(void)dismissSelectorView;
-(void)setShowSelectorView:(char)arg1 ;
-(void)resetSelectorViewActiveIndexAfterDismiss;
-(unsigned)queriedDataOrderingIndex;
-(unsigned)queriedMediaTypeIndex;
-(unsigned)queriedTimeframeIndex;
-(void)initializeSpinner;
-(char)shouldFetchOnViewDidLoad;
-(char)isDefaultTab;
-(char)showSelectorView;
-(void)setActiveMediaTypeIndex:(unsigned)arg1 ;
-(void)setActiveDataOrderingIndex:(unsigned)arg1 ;
-(void)setActiveTimeframeIndex:(unsigned)arg1 ;
-(id)currentQueryItems;
-(void)updateSummaryView;
-(void)setQueriedDataOrderingIndex:(unsigned)arg1 ;
-(unsigned)activeMediaTypeIndex;
-(void)setQueriedMediaTypeIndex:(unsigned)arg1 ;
-(unsigned)activeTimeframeIndex;
-(void)setQueriedTimeframeIndex:(unsigned)arg1 ;
-(void)parseFilterMediaTypeCells;
-(void)updateFilterViews;
-(IGInsightsMediaFeedListItemController *)feedListItemController;
-(NSArray *)mediaTypeQueryItems;
-(NSArray *)dataOrderingQueryItems;
-(NSArray *)timeframeQueryItems;
-(NSArray *)dataOrderings;
-(void)setDataOrderings:(NSArray *)arg1 ;
-(NSArray *)timeframes;
-(void)setTimeframes:(NSArray *)arg1 ;
-(NSArray *)educationUnits;
-(NSArray *)filterMediaTypeUnits;
-(void)updateOrderingAndTimeframeForMediaTypeCell:(id)arg1 ;
-(void)setMediaTypeQueryItems:(NSArray *)arg1 ;
-(void)setDataOrderingQueryItems:(NSArray *)arg1 ;
-(void)setTimeframeQueryItems:(NSArray *)arg1 ;
-(void)didUpdateMediaBundlesForInsightsSeeAllPostsTabContentViewDataSource:(id)arg1 ;
-(void)didSelectMediaTypeOnSelectorView:(id)arg1 AtIndex:(unsigned)arg2 ;
-(void)didSelectDataOrderingOnSelectorView:(id)arg1 AtIndex:(unsigned)arg2 ;
-(void)didSelectTimeframeOnSelectorView:(id)arg1 AtIndex:(unsigned)arg2 ;
-(void)didTapSubmitButton;
-(void)didExpandContentRowListView:(id)arg1 ;
-(void)didCollapseContentRowListView:(id)arg1 ;
-(id)initWithCollectionViewComponent:(id)arg1 filterMediaTypeUnits:(id)arg2 filterSummaryText:(id)arg3 educationUnits:(id)arg4 query:(id)arg5 ;
-(id)activeDataOrderingText;
-(void)setFeedListItemController:(IGInsightsMediaFeedListItemController *)arg1 ;
-(NSDictionary *)buttonToMediaCellCategoryMapping;
-(void)setIsDefaultTab:(char)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(NSMutableArray *)objects;
-(void)setDataSource:(IGInsightsSeeAllPostsTabContentViewDataSource *)arg1 ;
-(void)setDelegate:(id<IGInsightsSeeAllPostsTabContentViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(IGInsightsSeeAllPostsTabContentViewDataSource *)dataSource;
-(id<IGInsightsSeeAllPostsTabContentViewControllerDelegate>)delegate;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(void)setMediaTypes:(NSArray *)arg1 ;
-(NSArray *)mediaTypes;
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
@end

