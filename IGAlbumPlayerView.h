
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGAlbumPlayerViewVideoCellDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGAlbumPlayerViewProgressDelegate;
@class IGAlbumFocusCoordinator, IGAlbumPlayerViewConfiguration, IGFeedItem, UICollectionView, IGBulkMediaRequestManager, IGImagePreparer, IGFeedVideoManager, NSTimer, CADisplayLink, NSString;

@interface IGAlbumPlayerView : UIView <IGAlbumPlayerViewVideoCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {

	id<IGAlbumPlayerViewProgressDelegate> _progressDelegate;
	IGAlbumFocusCoordinator* _focusCoordinator;
	IGAlbumPlayerViewConfiguration* _config;
	IGFeedItem* _feedItem;
	int _page;
	UICollectionView* _collectionView;
	IGBulkMediaRequestManager* _requestManager;
	IGImagePreparer* _imagePreparer;
	IGFeedVideoManager* _feedVideoManager;
	NSTimer* _timer;
	CADisplayLink* _displayLink;
	int _state;
	double _timerStartTime;

}

@property (assign,nonatomic,__weak) id<IGAlbumPlayerViewProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (nonatomic,retain) IGAlbumFocusCoordinator * focusCoordinator;                                 //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,retain) IGAlbumPlayerViewConfiguration * config;                                    //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                      //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic) int page;                                                                   //@synthesize page=_page - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGBulkMediaRequestManager * requestManager;                               //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,readonly) IGImagePreparer * imagePreparer;                                          //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (nonatomic,readonly) IGFeedVideoManager * feedVideoManager;                                    //@synthesize feedVideoManager=_feedVideoManager - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                            //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double timerStartTime;                                                      //@synthesize timerStartTime=_timerStartTime - In the implementation block
@property (assign,nonatomic) int state;                                                                  //@synthesize state=_state - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(void)configureWithFocusCoordinator:(id)arg1 configuration:(id)arg2 ;
-(void)goToNextPage;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setFocusCoordinator:(IGAlbumFocusCoordinator *)arg1 ;
-(int)indexOfCurrentItem;
-(void)prefetchMedia;
-(void)setContentOffsetToCurrentPage;
-(int)currentMediaType;
-(void)recycleVideoPlayer;
-(void)goToNextPageWithLooping;
-(void)playCurrentItem;
-(void)stopCurrentItem;
-(void)advanceTimerFired:(id)arg1 ;
-(void)setTimerStartTime:(double)arg1 ;
-(void)onDisplayLinkDidFire:(id)arg1 ;
-(double)timerStartTime;
-(void)preloadAdjacentCellsForIndex:(int)arg1 ;
-(IGImagePreparer *)imagePreparer;
-(void)requestVideoPlayback;
-(id)videoViewForCurrentPage;
-(IGFeedVideoManager *)feedVideoManager;
-(IGBulkMediaRequestManager *)requestManager;
-(void)albumPlayerViewVideoCellDidPlayToEnd:(id)arg1 ;
-(int)pageForOffset:(float)arg1 ;
-(void)play;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)stop;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
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
-(IGAlbumPlayerViewConfiguration *)config;
-(void)setConfig:(IGAlbumPlayerViewConfiguration *)arg1 ;
-(id<IGAlbumPlayerViewProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<IGAlbumPlayerViewProgressDelegate>)arg1 ;
-(void)cancelTimer;
@end

