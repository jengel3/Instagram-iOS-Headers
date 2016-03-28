
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGAlbumPlayerViewVideoCellDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGAlbumPlayerViewDelegate;
@class IGAlbumFocusCoordinator, IGFeedItem, UICollectionView, IGBulkMediaRequestManager, IGImagePreparer, IGFeedVideoManager, NSTimer, IGFeedItemVideoView, NSString;

@interface IGAlbumPlayerView : UIView <IGAlbumPlayerViewVideoCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {

	id<IGAlbumPlayerViewDelegate> _delegate;
	IGAlbumFocusCoordinator* _focusCoordinator;
	int _config;
	IGFeedItem* _feedItem;
	int _page;
	UICollectionView* _collectionView;
	IGBulkMediaRequestManager* _requestManager;
	IGImagePreparer* _imagePreparer;
	IGFeedVideoManager* _feedVideoManager;
	NSTimer* _timer;
	int _state;

}

@property (assign,nonatomic,__weak) id<IGAlbumPlayerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFeedItemVideoView * videoView; 
@property (nonatomic,retain) IGAlbumFocusCoordinator * focusCoordinator;                 //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (assign,nonatomic) int config;                                                 //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                      //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic) int page;                                                   //@synthesize page=_page - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGBulkMediaRequestManager * requestManager;               //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,readonly) IGImagePreparer * imagePreparer;                          //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (nonatomic,readonly) IGFeedVideoManager * feedVideoManager;                    //@synthesize feedVideoManager=_feedVideoManager - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                            //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(void)configureWithFocusCoordinator:(id)arg1 configuration:(int)arg2 ;
-(void)goToNextPage;
-(void)setFocusCoordinator:(IGAlbumFocusCoordinator *)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(int)indexOfCurrentItem;
-(void)prefetchMedia;
-(void)setContentOffsetToCurrentPage;
-(int)currentMediaType;
-(void)recycleVideoPlayer;
-(void)goToNextPageWithLooping;
-(void)playCurrentItem;
-(void)stopCurrentItem;
-(void)advanceTimerFired:(id)arg1 ;
-(void)preloadAdjacentCellsForIndex:(int)arg1 ;
-(IGImagePreparer *)imagePreparer;
-(void)requestVideoPlayback;
-(IGFeedVideoManager *)feedVideoManager;
-(IGBulkMediaRequestManager *)requestManager;
-(void)albumPlayerViewVideoCellDidPlayToEnd:(id)arg1 ;
-(int)pageForOffset:(float)arg1 ;
-(void)play;
-(IGFeedItemVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumPlayerViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAlbumPlayerViewDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)prepareForReuse;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3 ;
-(id)currentItem;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)startTimer;
-(int)page;
-(void)setPage:(int)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(int)config;
-(void)setConfig:(int)arg1 ;
-(void)cancelTimer;
@end

