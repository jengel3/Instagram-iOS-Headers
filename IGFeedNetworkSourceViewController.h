
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCollectionViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedStatusViewDynamicHeightProtocol.h>
#import <Instagram/IGCollectionViewControllerDataSource.h>
#import <Instagram/IGCollectionViewControllerDelegate.h>

@class NSMapTable, IGFeedNetworkSource, UIBarButtonItem, IGFeedStatusView, NSArray, NSString;

@interface IGFeedNetworkSourceViewController : IGCollectionViewController <IGFeedNetworkSourceDelegate, IGFeedStatusViewDynamicHeightProtocol, IGCollectionViewControllerDataSource, IGCollectionViewControllerDelegate> {

	NSMapTable* _headerViewsToRank;
	NSMapTable* _footerViewsToRank;
	char _showRefreshButton;
	char _allowEmptyStateAndEmptyFeedLoadingIndicator;
	IGFeedNetworkSource* _feedSource;
	UIBarButtonItem* _refreshButton;
	unsigned _videoSizeToPrefetch;
	UIBarButtonItem* _backItem;
	IGFeedStatusView* _feedStatusView;
	int _imageURLOptionToPrefetch;
	CGSize _imageSizeToPrefetch;

}

@property (nonatomic,retain) IGFeedNetworkSource * feedSource;                              //@synthesize feedSource=_feedSource - In the implementation block
@property (nonatomic,readonly) char shouldPrefetchMediaForFeedItems; 
@property (assign,nonatomic) char showRefreshButton;                                        //@synthesize showRefreshButton=_showRefreshButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshButton;                               //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,readonly) NSArray * promotionBannerConfigurations; 
@property (assign,nonatomic) char allowEmptyStateAndEmptyFeedLoadingIndicator;              //@synthesize allowEmptyStateAndEmptyFeedLoadingIndicator=_allowEmptyStateAndEmptyFeedLoadingIndicator - In the implementation block
@property (assign,nonatomic) CGSize imageSizeToPrefetch;                                    //@synthesize imageSizeToPrefetch=_imageSizeToPrefetch - In the implementation block
@property (assign,nonatomic) unsigned videoSizeToPrefetch;                                  //@synthesize videoSizeToPrefetch=_videoSizeToPrefetch - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backItem;                                    //@synthesize backItem=_backItem - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                             //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (assign,nonatomic) int imageURLOptionToPrefetch;                                  //@synthesize imageURLOptionToPrefetch=_imageURLOptionToPrefetch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(id)rankToken;
-(IGFeedNetworkSource *)feedSource;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2 ;
-(id)rankTokenForFeedNetworkSource:(id)arg1 isTail:(char)arg2 ;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(void)removeHeaderView:(id)arg1 animated:(char)arg2 ;
-(void)addHeaderView:(id)arg1 withRank:(int)arg2 animated:(char)arg3 ;
-(void)layoutHeaderViews;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)reloadWithNewObjects:(id)arg1 ;
-(void)showErrorLoadMessageIfPossible;
-(void)addFooterView:(id)arg1 withRank:(int)arg2 animated:(char)arg3 ;
-(IGFeedStatusView *)feedStatusView;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(id)restrictedView;
-(char)isTopOnly;
-(void)onRestrictedLearnMoreTapped:(id)arg1 ;
-(void)setRestrictedView:(id)arg1 ;
-(void)removeFooterView:(id)arg1 animated:(char)arg2 ;
-(void)updateRestrictedViewWithName:(id)arg1 ;
-(NSArray *)promotionBannerConfigurations;
-(void)onTabBarTapped:(id)arg1 ;
-(void)onNetworkTransferRateChanged:(id)arg1 ;
-(char)showRefreshButton;
-(char)shouldPrefetchMediaForFeedItems;
-(CGSize)imageSizeToPrefetch;
-(int)imageURLOptionToPrefetch;
-(unsigned)videoSizeToPrefetch;
-(id)currentReloadContext;
-(void)finishPullToRefreshIfNecessary;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)handleDidEndScrolling;
-(void)onRefreshTapped:(id)arg1 ;
-(void)reloadDataFromServer;
-(void)layoutFooterViews;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(void)feedStatusView:(id)arg1 wantsChangeToHeight:(float)arg2 ;
-(float)visibleContentHeight;
-(id)collectionViewController:(id)arg1 viewForSupplementaryViewOfKind:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(int)collectionViewController:(id)arg1 numberOfSectionsForObjects:(id)arg2 context:(id)arg3 ;
-(int)collectionViewController:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4 ;
-(CGSize)collectionViewController:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5 ;
-(void)collectionViewControllerDidStartPullToRefreshAction:(id)arg1 ;
-(void)collectionViewController:(id)arg1 didScrollWithDistanceToEndOfContent:(float)arg2 isScrollingDown:(char)arg3 ;
-(id)initWithFeedNetworkSource:(id)arg1 layout:(id)arg2 showsPullToRefresh:(char)arg3 ;
-(void)performMediaPrefetchWithProfiles:(char)arg1 ;
-(char)analyticsLogNetworkContent;
-(void)setShowRefreshButton:(char)arg1 ;
-(void)setAllowEmptyStateAndEmptyFeedLoadingIndicator:(char)arg1 ;
-(void)setImageSizeToPrefetch:(CGSize)arg1 ;
-(void)setVideoSizeToPrefetch:(unsigned)arg1 ;
-(void)setBackItem:(UIBarButtonItem *)arg1 ;
-(void)setImageURLOptionToPrefetch:(int)arg1 ;
-(void)dealloc;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)navigationItem;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(int)preferredStatusBarUpdateAnimation;
-(UIBarButtonItem *)backItem;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(char)automaticallyAdjustsScrollViewInsets;
-(void)setRefreshButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)refreshButton;
@end

