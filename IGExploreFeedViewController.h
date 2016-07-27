
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGExploreCellDelegate.h>
#import <Instagram/IGFeedStatusViewDelegate.h>

@class NSArray, IGExploreTTILogger, IGFeedStatusView, UIActivityIndicatorView, IGRefreshControl, UICollectionView, UIView, NSMutableSet, IGFeedItemPreviewingHandler, NSString;

@interface IGExploreFeedViewController : IGViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGExploreCellDelegate, IGFeedStatusViewDelegate> {

	NSArray* _items;
	IGExploreTTILogger* _ttiLogger;
	IGFeedStatusView* _feedStatusView;
	UIActivityIndicatorView* _loadingMoreView;
	IGRefreshControl* _refreshControl;
	UICollectionView* _collectionView;
	UIActivityIndicatorView* _initialIndicatorView;
	UIView* _headerView;
	NSMutableSet* _lastVisibleIndexPaths;
	NSMutableSet* _lastIndexPaths;
	NSMutableSet* _lastVisibleImageURLs;
	NSMutableSet* _lastImageURLs;
	IGFeedItemPreviewingHandler* _thumbnailPreviewDelegate;
	NSString* _rankToken;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                                   //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingMoreView;                           //@synthesize loadingMoreView=_loadingMoreView - In the implementation block
@property (nonatomic,retain) IGRefreshControl * refreshControl;                                   //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * initialIndicatorView;                      //@synthesize initialIndicatorView=_initialIndicatorView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastVisibleIndexPaths;                                //@synthesize lastVisibleIndexPaths=_lastVisibleIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastIndexPaths;                                       //@synthesize lastIndexPaths=_lastIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastVisibleImageURLs;                                 //@synthesize lastVisibleImageURLs=_lastVisibleImageURLs - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastImageURLs;                                        //@synthesize lastImageURLs=_lastImageURLs - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewingHandler * thumbnailPreviewDelegate;              //@synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate - In the implementation block
@property (nonatomic,readonly) NSString * rankToken;                                              //@synthesize rankToken=_rankToken - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) IGExploreTTILogger * ttiLogger;                                      //@synthesize ttiLogger=_ttiLogger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(NSString *)rankToken;
-(void)setInitialIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)initialIndicatorView;
-(IGExploreTTILogger *)ttiLogger;
-(void)setThumbnailPreviewDelegate:(IGFeedItemPreviewingHandler *)arg1 ;
-(IGFeedItemPreviewingHandler *)thumbnailPreviewDelegate;
-(void)stopInitialIndicatorView;
-(void)updateCellVisibility:(id)arg1 indexPath:(id)arg2 ;
-(UIActivityIndicatorView *)loadingMoreView;
-(NSMutableSet *)lastIndexPaths;
-(NSMutableSet *)lastVisibleIndexPaths;
-(NSMutableSet *)lastVisibleImageURLs;
-(NSMutableSet *)lastImageURLs;
-(void)updateCellVisibility:(id)arg1 indexPath:(id)arg2 imageView:(id)arg3 mediaIndex:(unsigned)arg4 ;
-(void)updateCellVisibility:(id)arg1 imageView:(id)arg2 mediaIndex:(unsigned)arg3 ;
-(void)exploreCellDidTapFollow:(id)arg1 ;
-(void)exploreCellDidTapDismiss:(id)arg1 ;
-(void)exploreCellDidTapFollowing:(id)arg1 ;
-(void)exploreCell:(id)arg1 didTapMediaAtIndex:(unsigned)arg2 ;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(void)setLoadingMoreView:(UIActivityIndicatorView *)arg1 ;
-(void)setLastVisibleIndexPaths:(NSMutableSet *)arg1 ;
-(void)setLastIndexPaths:(NSMutableSet *)arg1 ;
-(void)setLastVisibleImageURLs:(NSMutableSet *)arg1 ;
-(void)setLastImageURLs:(NSMutableSet *)arg1 ;
-(void)setTtiLogger:(IGExploreTTILogger *)arg1 ;
-(void)fetchDidFinishWithItems:(id)arg1 ;
-(void)fetchDidFailWithMessage:(id)arg1 ;
-(void)fetchDidFinishWithMoreItems:(id)arg1 ;
-(void)reloadObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(char)enableNavState;
-(id)feedStatusViewDataSource;
-(void)fetchMoreData;
-(id)exploreViewModelForObject:(id)arg1 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didDismissObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didFollowObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didUnfollowObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(id)rankTokenForFeedNetworkSource:(id)arg1 isTail:(char)arg2 ;
-(IGFeedStatusView *)feedStatusView;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(void)fetchData;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(CGRect)visibleContentRect;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setRefreshControl:(IGRefreshControl *)arg1 ;
-(IGRefreshControl *)refreshControl;
@end

