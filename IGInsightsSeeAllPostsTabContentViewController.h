
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGInsightsInsightsDataOrderingSelectorViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGInsightsSeeAllPostsTabContentViewDataSourceDelegate.h>

@protocol IGInsightsSeeAllPostsTabContentViewControllerDelegate;
@class IGListAdapter, NSMutableArray, IGListCollectionView, IGInsightsMediaFeedListItemController, IGInsightsInsightsDataOrderingSelectorView, UIActivityIndicatorView, NSDictionary, IGPullToRefreshViewManager, IGPullToRefreshView, IGInsightsSeeAllPostsTabContentViewDataSource, NSString;

@interface IGInsightsSeeAllPostsTabContentViewController : UIViewController <IGFeedNetworkSourceDelegate, IGListAdapterDataSource, UICollectionViewDelegate, IGInsightsInsightsDataOrderingSelectorViewDelegate, IGPullToRefreshProtocol, IGInsightsSeeAllPostsTabContentViewDataSourceDelegate> {

	char _isDefaultTab;
	id<IGInsightsSeeAllPostsTabContentViewControllerDelegate> _delegate;
	IGListAdapter* _listAdapter;
	NSMutableArray* _objects;
	IGListCollectionView* _collectionView;
	IGInsightsMediaFeedListItemController* _feedListItemController;
	int _mediaCellCategory;
	IGInsightsInsightsDataOrderingSelectorView* _orderingSelectorView;
	UIActivityIndicatorView* _spinner;
	NSDictionary* _buttonToMediaCellCategoryMapping;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	IGPullToRefreshView* _pullRefreshControlView;
	IGInsightsSeeAllPostsTabContentViewDataSource* _dataSource;

}

@property (assign,nonatomic,__weak) id<IGInsightsSeeAllPostsTabContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGListAdapter * listAdapter;                                                            //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                                                               //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) IGListCollectionView * collectionView;                                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGInsightsMediaFeedListItemController * feedListItemController;                         //@synthesize feedListItemController=_feedListItemController - In the implementation block
@property (assign,nonatomic) int mediaCellCategory;                                                                  //@synthesize mediaCellCategory=_mediaCellCategory - In the implementation block
@property (nonatomic,retain) IGInsightsInsightsDataOrderingSelectorView * orderingSelectorView;                      //@synthesize orderingSelectorView=_orderingSelectorView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                      //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,copy) NSDictionary * buttonToMediaCellCategoryMapping;                                          //@synthesize buttonToMediaCellCategoryMapping=_buttonToMediaCellCategoryMapping - In the implementation block
@property (assign,nonatomic) char isDefaultTab;                                                                      //@synthesize isDefaultTab=_isDefaultTab - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;                                  //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (nonatomic,retain) IGPullToRefreshView * pullRefreshControlView;                                           //@synthesize pullRefreshControlView=_pullRefreshControlView - In the implementation block
@property (nonatomic,retain) IGInsightsSeeAllPostsTabContentViewDataSource * dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(IGPullToRefreshView *)pullRefreshControlView;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)setPullRefreshControlView:(IGPullToRefreshView *)arg1 ;
-(id)initWithQueryItems:(id)arg1 ;
-(int)mediaCellCategory;
-(void)setMediaCellCategory:(int)arg1 ;
-(void)_initializeButtonToMediaCellCategoryMapping;
-(char)shouldFetchOnInit;
-(void)setButtonToMediaCellCategoryMapping:(NSDictionary *)arg1 ;
-(void)setOrderingSelectorView:(IGInsightsInsightsDataOrderingSelectorView *)arg1 ;
-(IGInsightsInsightsDataOrderingSelectorView *)orderingSelectorView;
-(id)getOrderingStringArrayFromTabDictionary:(id)arg1 ;
-(void)initializeSpinner;
-(char)shouldFetchOnViewDidLoad;
-(char)isDefaultTab;
-(IGInsightsMediaFeedListItemController *)feedListItemController;
-(NSDictionary *)buttonToMediaCellCategoryMapping;
-(void)didTapOrderingSelectorView:(id)arg1 index:(unsigned*)arg2 ;
-(void)didUpdateMediaBundlesForInsightsSeeAllPostsTabContentViewDataSource:(id)arg1 ;
-(void)didUpdateMediaOrderSelectorTabsForInsightsSeeAllPostsTabContentViewDataSource:(id)arg1 ;
-(id)initWithCollectionViewComponent:(id)arg1 mediaOrderSelectorTabs:(id)arg2 queryItems:(id)arg3 ;
-(void)setFeedListItemController:(IGInsightsMediaFeedListItemController *)arg1 ;
-(void)setIsDefaultTab:(char)arg1 ;
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
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
@end

