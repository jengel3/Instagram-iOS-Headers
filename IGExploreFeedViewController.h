/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGExploreCellDelegate.h>
#import <Instagram/IGMarqueeAttributionViewDelegate.h>

@class NSArray, IGExploreMarqueeItem, UIView, IGExploreTTILogger, IGFeedStatusView, UIActivityIndicatorView, IGPullToRefreshViewManager, UICollectionView, NSMutableSet, IGFeedThumbnailPreviewingHandler, NSString;

@interface IGExploreFeedViewController : IGViewController <UICollectionViewDataSource, UICollectionViewDelegate, IGPullToRefreshProtocol, UICollectionViewDelegateFlowLayout, IGExploreCellDelegate, IGMarqueeAttributionViewDelegate> {

	NSArray* _items;
	IGExploreMarqueeItem* _marqueeItem;
	UIView* _headerView;
	IGExploreTTILogger* _ttiLogger;
	IGFeedStatusView* _feedStatusView;
	UIActivityIndicatorView* _loadingMoreView;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	UICollectionView* _collectionView;
	UIActivityIndicatorView* _initialIndicatorView;
	NSMutableSet* _lastVisibleIndexPaths;
	NSMutableSet* _lastIndexPaths;
	NSMutableSet* _lastVisibleImageURLs;
	NSMutableSet* _lastImageURLs;
	IGFeedThumbnailPreviewingHandler* _thumbnailPreviewDelegate;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                                               //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) IGExploreMarqueeItem * marqueeItem;                                       //@synthesize marqueeItem=_marqueeItem - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                      //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGExploreTTILogger * ttiLogger;                                           //@synthesize ttiLogger=_ttiLogger - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                                        //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingMoreView;                                //@synthesize loadingMoreView=_loadingMoreView - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;                    //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * initialIndicatorView;                           //@synthesize initialIndicatorView=_initialIndicatorView - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastVisibleIndexPaths;                                     //@synthesize lastVisibleIndexPaths=_lastVisibleIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastIndexPaths;                                            //@synthesize lastIndexPaths=_lastIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastVisibleImageURLs;                                      //@synthesize lastVisibleImageURLs=_lastVisibleImageURLs - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastImageURLs;                                             //@synthesize lastImageURLs=_lastImageURLs - In the implementation block
@property (nonatomic,retain) IGFeedThumbnailPreviewingHandler * thumbnailPreviewDelegate;              //@synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)rankTokenForFeedNetworkSource:(id)arg1 isTail:(char)arg2 ;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(IGExploreTTILogger *)ttiLogger;
-(void)setThumbnailPreviewDelegate:(IGFeedThumbnailPreviewingHandler *)arg1 ;
-(IGFeedThumbnailPreviewingHandler *)thumbnailPreviewDelegate;
-(void)setTtiLogger:(IGExploreTTILogger *)arg1 ;
-(void)exploreCell:(id)arg1 didTapMediaAtIndex:(unsigned)arg2 ;
-(void)exploreCellDidTapFollow:(id)arg1 ;
-(void)exploreCellDidTapDismiss:(id)arg1 ;
-(void)exploreCellDidTapFollowing:(id)arg1 ;
-(void)marqueeAttributionView:(id)arg1 didTapUsername:(id)arg2 ;
-(void)fetchMoreData;
-(void)fetchDidFinishWithItems:(id)arg1 ;
-(void)fetchDidFinishWithMoreItems:(id)arg1 ;
-(void)fetchDidFailWithMessage:(id)arg1 ;
-(void)reloadObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)feedStatusViewDataSource;
-(id)exploreViewModelForObject:(id)arg1 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didFollowObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didUnfollowObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(IGExploreMarqueeItem *)marqueeItem;
-(void)setInitialIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)initialIndicatorView;
-(void)stopInitialIndicatorView;
-(IGFeedStatusView *)feedStatusView;
-(void)updateCellVisibility:(id)arg1 indexPath:(id)arg2 ;
-(UIActivityIndicatorView *)loadingMoreView;
-(NSMutableSet *)lastIndexPaths;
-(NSMutableSet *)lastVisibleIndexPaths;
-(NSMutableSet *)lastVisibleImageURLs;
-(NSMutableSet *)lastImageURLs;
-(void)didDismissObject:(id)arg1 atIndex:(int)arg2 ;
-(void)updateCellVisibility:(id)arg1 indexPath:(id)arg2 mediaIndex:(unsigned)arg3 ;
-(id)tabSyncIdentifier;
-(void)setMarqueeItem:(IGExploreMarqueeItem *)arg1 ;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(void)setLoadingMoreView:(UIActivityIndicatorView *)arg1 ;
-(void)setLastVisibleIndexPaths:(NSMutableSet *)arg1 ;
-(void)setLastIndexPaths:(NSMutableSet *)arg1 ;
-(void)setLastVisibleImageURLs:(NSMutableSet *)arg1 ;
-(void)setLastImageURLs:(NSMutableSet *)arg1 ;
-(void)fetchData;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
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
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(CGRect)visibleContentRect;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

