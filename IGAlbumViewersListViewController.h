
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumOverviewUploadStatusViewDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGPendingAlbumItemStatusDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IGAlbumItemType, IGAlbumViewersListDelegate;
@class UIView, IGAlbumOverviewUploadStatusView, IGAlbumViewersHeaderView, IGListCollectionView, IGListAdapter, IGPendingAlbumItemStatusObserver, NSMutableOrderedSet, NSString;

@interface IGAlbumViewersListViewController : UIViewController <IGAlbumOverviewUploadStatusViewDelegate, IGListAdapterDataSource, IGPendingAlbumItemStatusDelegate, UIScrollViewDelegate> {

	char _hasLoadedOnce;
	char _lastFetchFailed;
	char _isLoading;
	char _moreAvailable;
	UIView* _emptyStateView;
	IGAlbumOverviewUploadStatusView* _uploadStatusView;
	id<IGAlbumItemType> _item;
	id<IGAlbumViewersListDelegate> _delegate;
	IGAlbumViewersHeaderView* _headerView;
	IGListCollectionView* _collectionView;
	IGListAdapter* _adapter;
	IGPendingAlbumItemStatusObserver* _pendingItemObserver;
	NSMutableOrderedSet* _viewers;
	NSString* _maxID;

}

@property (nonatomic,readonly) IGAlbumViewersHeaderView * headerView;                               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * adapter;                                             //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,readonly) IGAlbumOverviewUploadStatusView * uploadStatusView;                  //@synthesize uploadStatusView=_uploadStatusView - In the implementation block
@property (nonatomic,readonly) UIView * emptyStateView;                                             //@synthesize emptyStateView=_emptyStateView - In the implementation block
@property (nonatomic,readonly) IGPendingAlbumItemStatusObserver * pendingItemObserver;              //@synthesize pendingItemObserver=_pendingItemObserver - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * viewers;                                         //@synthesize viewers=_viewers - In the implementation block
@property (assign,nonatomic) char hasLoadedOnce;                                                    //@synthesize hasLoadedOnce=_hasLoadedOnce - In the implementation block
@property (assign,nonatomic) char lastFetchFailed;                                                  //@synthesize lastFetchFailed=_lastFetchFailed - In the implementation block
@property (assign,nonatomic) char isLoading;                                                        //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) char moreAvailable;                                                    //@synthesize moreAvailable=_moreAvailable - In the implementation block
@property (nonatomic,retain) NSString * maxID;                                                      //@synthesize maxID=_maxID - In the implementation block
@property (nonatomic,readonly) id<IGAlbumItemType> item;                                            //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumViewersListDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(IGPendingAlbumItemStatusObserver *)pendingItemObserver;
-(NSMutableOrderedSet *)viewers;
-(void)pendingItemObserver:(id)arg1 didUpdateToStatus:(int)arg2 ;
-(void)pendingItemObserver:(id)arg1 didUpdateToProgress:(float)arg2 ;
-(IGAlbumOverviewUploadStatusView *)uploadStatusView;
-(void)viewerCountUpdated:(id)arg1 ;
-(void)deleteButtonPressed;
-(void)shareButtonPressed;
-(void)saveButtonPressed;
-(void)updateHeaderButtonVisibility;
-(void)tryFetchUsers;
-(char)lastFetchFailed;
-(char)canTryLoading;
-(UIView *)emptyStateView;
-(void)fetchIfNeededForTargetOffset:(CGPoint)arg1 ;
-(NSString *)maxID;
-(void)setHasLoadedOnce:(char)arg1 ;
-(void)setLastFetchFailed:(char)arg1 ;
-(void)setMaxID:(NSString *)arg1 ;
-(char)hasLoadedOnce;
-(void)uploadStatusViewDidTapRetry:(id)arg1 ;
-(void)setViewers:(NSMutableOrderedSet *)arg1 ;
-(IGListAdapter *)adapter;
-(void)setDelegate:(id<IGAlbumViewersListDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<IGAlbumViewersListDelegate>)delegate;
-(id<IGAlbumItemType>)item;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(IGAlbumViewersHeaderView *)headerView;
-(char)isLoading;
-(void)setMoreAvailable:(char)arg1 ;
-(char)moreAvailable;
-(void)setIsLoading:(char)arg1 ;
-(id)initWithItem:(id)arg1 ;
@end

