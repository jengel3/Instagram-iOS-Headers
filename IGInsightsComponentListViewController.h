
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGInsightsDataProviderDelegate.h>
#import <Instagram/IGInsightsContentRowListViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGInsightsComponentNavigationDelegate.h>

@protocol IGInsightsComponentListViewControllerDelegate;
@class UICollectionView, NSArray, IGInsightsDataProvider, IGInsightsQuery, UIActivityIndicatorView, IGInsightsContentRowListView, IGPullToRefreshViewManager, IGPullToRefreshView, IGInsightsLoggingHelper, NSString;

@interface IGInsightsComponentListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGInsightsDataProviderDelegate, IGInsightsContentRowListViewDelegate, IGPullToRefreshProtocol, IGInsightsComponentNavigationDelegate> {

	id<IGInsightsComponentListViewControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	NSArray* _items;
	NSArray* _components;
	NSArray* _adapters;
	IGInsightsDataProvider* _dataProvider;
	IGInsightsQuery* _query;
	UIActivityIndicatorView* _spinner;
	IGInsightsContentRowListView* _educationView;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	IGPullToRefreshView* _pullRefreshControlView;
	unsigned _surface;
	IGInsightsLoggingHelper* _loggingHelper;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic,__weak) id<IGInsightsComponentListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * components;                                                             //@synthesize components=_components - In the implementation block
@property (nonatomic,copy) NSArray * adapters;                                                               //@synthesize adapters=_adapters - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * dataProvider;                                          //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) IGInsightsQuery * query;                                                        //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGInsightsContentRowListView * educationView;                                   //@synthesize educationView=_educationView - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;                          //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (nonatomic,retain) IGPullToRefreshView * pullRefreshControlView;                                   //@synthesize pullRefreshControlView=_pullRefreshControlView - In the implementation block
@property (assign,nonatomic) unsigned surface;                                                               //@synthesize surface=_surface - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                        //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(IGPullToRefreshView *)pullRefreshControlView;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)setPullRefreshControlView:(IGPullToRefreshView *)arg1 ;
-(void)didSelectNavigateInComponentAdapter:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(void)requestFailureForDataProvider:(id)arg1 errorMessage:(id)arg2 ;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)setSurface:(unsigned)arg1 ;
-(id)initWithQuery:(id)arg1 surface:(unsigned)arg2 loggingHelper:(id)arg3 ;
-(void)initializeSpinner;
-(IGInsightsContentRowListView *)educationView;
-(void)needAnimateContentRowListView:(id)arg1 upForDistance:(float)arg2 ;
-(void)setEducationView:(IGInsightsContentRowListView *)arg1 ;
-(void)initializeDataProvider;
-(void)requestTabContentForQuery:(id)arg1 ;
-(void)reloadContentRowListItemAndScrollToBottom:(char)arg1 ;
-(void)updateWithDataProvider;
-(void)setupAdapters;
-(void)logLoadComplete;
-(void)logLoadError:(id)arg1 ;
-(void)setAdapters:(NSArray *)arg1 ;
-(NSArray *)adapters;
-(void)setDelegate:(id<IGInsightsComponentListViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<IGInsightsComponentListViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(IGInsightsQuery *)query;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setQuery:(IGInsightsQuery *)arg1 ;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(NSArray *)components;
-(void)setDataProvider:(IGInsightsDataProvider *)arg1 ;
-(IGInsightsDataProvider *)dataProvider;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(unsigned)surface;
-(void)setComponents:(NSArray *)arg1 ;
@end

