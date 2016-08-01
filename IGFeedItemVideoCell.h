
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemMediaCell.h>
#import <Instagram/IGFeedVideoCell.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>
#import <Instagram/IGFeedItemVideoViewDoubleTapDelegate.h>
#import <Instagram/IGFeedItemVideoViewSingleTapDelegate.h>

@protocol IGFeedVideoCellInteractionDelegate, IGFeedVideoCellPlayerDelegate, IGFeedItemZoomControllerZoomingDelegate;
@class IGFeedItem, IGFeedItemVideoView, IGFeedItemZoomController, NSString;

@interface IGFeedItemVideoCell : IGFeedItemMediaCell <IGFeedVideoCell, IGFeedItemVideoViewDelegate, IGFeedItemVideoViewDoubleTapDelegate, IGFeedItemVideoViewSingleTapDelegate> {

	IGFeedItem* _post;
	float _percentVisible;
	id<IGFeedVideoCellInteractionDelegate> _interactionDelegate;
	id<IGFeedVideoCellPlayerDelegate> _playerDelegate;
	id<IGFeedItemZoomControllerZoomingDelegate> _zoomingDelegate;
	IGFeedItemVideoView* _videoView;
	IGFeedItemZoomController* _zoomController;

}

@property (nonatomic,readonly) IGFeedItemVideoView * videoView;                                               //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) IGFeedItemZoomController * zoomController;                                       //@synthesize zoomController=_zoomController - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellInteractionDelegate> interactionDelegate;               //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellPlayerDelegate> playerDelegate;                         //@synthesize playerDelegate=_playerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemZoomControllerZoomingDelegate> zoomingDelegate;              //@synthesize zoomingDelegate=_zoomingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float percentVisible;                                                          //@synthesize percentVisible=_percentVisible - In the implementation block
-(id)post;
-(void)setPlayerDelegate:(id<IGFeedVideoCellPlayerDelegate>)arg1 ;
-(id)accessibleElements;
-(void)configureWithPost:(id)arg1 coverImageURL:(id)arg2 logger:(id)arg3 ;
-(unsigned)updatePercentVisible:(float)arg1 ;
-(float)percentVisible;
-(void)handleDidBeginPlaying;
-(void)handleDidPause;
-(void)handleDidEndPlaying;
-(void)handleDidRequestPlayback;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(IGFeedItemZoomController *)zoomController;
-(void)setZoomController:(IGFeedItemZoomController *)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)didDoubleTapFeedItemVideoView:(id)arg1 ;
-(void)didSingleTapFeedItemVideoView:(id)arg1 ;
-(void)setZoomingDelegate:(id<IGFeedItemZoomControllerZoomingDelegate>)arg1 ;
-(id<IGFeedItemZoomControllerZoomingDelegate>)zoomingDelegate;
-(IGFeedItemVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setInteractionDelegate:(id<IGFeedVideoCellInteractionDelegate>)arg1 ;
-(id<IGFeedVideoCellInteractionDelegate>)interactionDelegate;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(char)isSponsored;
@end

