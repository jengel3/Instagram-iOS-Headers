
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGInsightsDataProviderDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGInsightsComponentNavigationDelegate.h>

@protocol IGInsightsTabContentViewControllerDelegate;
@class UICollectionView, NSArray, IGInsightsDataProvider, NSDictionary, UIActivityIndicatorView, IGPullToRefreshViewManager, IGPullToRefreshView, NSString;

@interface IGInsightsTabContentViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGInsightsDataProviderDelegate, IGPullToRefreshProtocol, IGInsightsComponentNavigationDelegate> {

	id<IGInsightsTabContentViewControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	NSArray* _items;
	NSArray* _components;
	NSArray* _adapters;
	IGInsightsDataProvider* _dataProvider;
	NSDictionary* _queryItems;
	UIActivityIndicatorView* _spinner;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	IGPullToRefreshView* _pullRefreshControlView;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic,__weak) id<IGInsightsTabContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                               //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * components;                                                          //@synthesize components=_components - In the implementation block
@property (nonatomic,copy) NSArray * adapters;                                                            //@synthesize adapters=_adapters - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * dataProvider;                                       //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,copy) NSDictionary * queryItems;                                                     //@synthesize queryItems=_queryItems - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                           //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;                       //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (nonatomic,retain) IGPullToRefreshView * pullRefreshControlView;                                //@synthesize pullRefreshControlView=_pullRefreshControlView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(IGPullToRefreshView *)pullRefreshControlView;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)setPullRefreshControlView:(IGPullToRefreshView *)arg1 ;
-(void)didSelectNavigateInComponentAdapter:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(id)initWithQueryItems:(id)arg1 ;
-(char)shouldFetchOnInit;
-(void)initializeSpinner;
-(char)shouldFetchOnViewDidLoad;
-(void)setupAdapters;
-(void)requestTabContentForQueryItems:(id)arg1 ;
-(void)setAdapters:(NSArray *)arg1 ;
-(NSArray *)adapters;
-(id)initWithComponents:(id)arg1 queryItems:(id)arg2 ;
-(void)setDelegate:(id<IGInsightsTabContentViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<IGInsightsTabContentViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(NSArray *)components;
-(void)setDataProvider:(IGInsightsDataProvider *)arg1 ;
-(IGInsightsDataProvider *)dataProvider;
-(void)setQueryItems:(NSDictionary *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(NSDictionary *)queryItems;
-(void)setComponents:(NSArray *)arg1 ;
@end

