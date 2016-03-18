
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGPhotoCellDelegate.h>
#import <Instagram/IGVideoCellDelegate.h>
#import <Instagram/IGHorizontalFeedViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGFeedVideoCell.h>

@protocol IGFeedItemAlbumCell2Delegate, IGFeedItemActionCellDelegate, IGFeedVideoCellPlayerDelegate, IGNavigationContext, IGPresentationContext;
@class IGFeedItem, IGUser, IGHorizontalFeedView, IGBulkMediaRequestManager, IGImagePreparer, NSString;

@interface IGFeedItemAlbumCell2 : UICollectionViewCell <IGPhotoCellDelegate, IGVideoCellDelegate, IGHorizontalFeedViewDelegate, UIGestureRecognizerDelegate, IGFeedVideoCell> {

	float _percentVisible;
	IGFeedItem* _feedItem;
	id<IGFeedItemAlbumCell2Delegate> _delegate;
	id<IGFeedItemActionCellDelegate> _actionCellDelegate;
	id<IGFeedVideoCellPlayerDelegate> _playerDelegate;
	id<IGNavigationContext> _navigationContext;
	id<IGPresentationContext> _presentationContext;
	IGUser* _user;
	IGHorizontalFeedView* _feedView;
	IGBulkMediaRequestManager* _requestManager;
	IGImagePreparer* _imagePreparer;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                   //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemAlbumCell2Delegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemActionCellDelegate> actionCellDelegate;              //@synthesize actionCellDelegate=_actionCellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellPlayerDelegate> playerDelegate;                 //@synthesize playerDelegate=_playerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGNavigationContext> navigationContext;                        //@synthesize navigationContext=_navigationContext - In the implementation block
@property (assign,nonatomic,__weak) id<IGPresentationContext> presentationContext;                    //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,retain) IGUser * user;                                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGHorizontalFeedView * feedView;                                         //@synthesize feedView=_feedView - In the implementation block
@property (nonatomic,readonly) IGBulkMediaRequestManager * requestManager;                            //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,readonly) IGImagePreparer * imagePreparer;                                       //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float percentVisible;                                                  //@synthesize percentVisible=_percentVisible - In the implementation block
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(void)setPlayerDelegate:(id<IGFeedVideoCellPlayerDelegate>)arg1 ;
-(void)setActionCellDelegate:(id<IGFeedItemActionCellDelegate>)arg1 ;
-(void)setPresentationContext:(id<IGPresentationContext>)arg1 ;
-(void)setNavigationContext:(id<IGNavigationContext>)arg1 ;
-(id<IGNavigationContext>)navigationContext;
-(IGBulkMediaRequestManager *)requestManager;
-(id<IGPresentationContext>)presentationContext;
-(id<IGFeedItemActionCellDelegate>)actionCellDelegate;
-(void)horizontalFeedView:(id)arg1 didChangeViewHeight:(float)arg2 ;
-(int)pageForOffset:(float)arg1 ;
-(void)horizontalFeedView:(id)arg1 didScrollToOffset:(float)arg2 ;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(void)reloadWithFeedItem:(id)arg1 ;
-(void)prefetchMedia;
-(void)preloadAdjacentCellsForIndex:(int)arg1 ;
-(IGImagePreparer *)imagePreparer;
-(void)photoCellDidInitialSingleTap:(id)arg1 ;
-(void)photoCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)photoCellDidDoubleTapToLike:(id)arg1 ;
-(void)photoCellImageDidLoadImage:(id)arg1 ;
-(void)videoCellDidRequestVideoPlayback:(id)arg1 ;
-(void)videoCellDidLoadImage:(id)arg1 ;
-(void)videoCellDidPlayToEnd:(id)arg1 ;
-(void)videoCellDidDoubleTap:(id)arg1 ;
-(unsigned)updatePercentVisible:(float)arg1 ;
-(float)percentVisible;
-(id)contentViewForHeartAnimation;
-(void)setFeedView:(IGHorizontalFeedView *)arg1 ;
-(IGHorizontalFeedView *)feedView;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)videoView;
-(void)scrollToPage:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemAlbumCell2Delegate>)arg1 ;
-(void)dealloc;
-(id<IGFeedItemAlbumCell2Delegate>)delegate;
-(void)setPage:(int)arg1 ;
-(char)isSponsored;
@end

