
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>
#import <Instagram/IGFeedItemVideoViewAudioDelegate.h>
#import <Instagram/IGFeedItemVideoViewDoubleTapDelegate.h>
#import <Instagram/IGFeedItemVideoViewSingleTapDelegate.h>

@protocol IGVideoCellDelegate, IGFeedItemZoomControllerZoomingDelegate;
@class IGFeedItemVideoView, IGPostItem, IGFeedItemZoomController, NSString;

@interface IGVideoCell : UICollectionViewCell <IGFeedItemVideoViewDelegate, IGFeedItemVideoViewAudioDelegate, IGFeedItemVideoViewDoubleTapDelegate, IGFeedItemVideoViewSingleTapDelegate> {

	IGFeedItemVideoView* _videoView;
	IGPostItem* _post;
	id<IGVideoCellDelegate> _delegate;
	id<IGFeedItemZoomControllerZoomingDelegate> _zoomingDelegate;
	IGFeedItemZoomController* _zoomController;

}

@property (nonatomic,retain) IGFeedItemVideoView * videoView;                                                 //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) IGFeedItemZoomController * zoomController;                                       //@synthesize zoomController=_zoomController - In the implementation block
@property (assign,nonatomic,__weak) IGPostItem * post;                                                        //@synthesize post=_post - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoCellDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemZoomControllerZoomingDelegate> zoomingDelegate;              //@synthesize zoomingDelegate=_zoomingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPost:(IGPostItem *)arg1 ;
-(IGPostItem *)post;
-(IGFeedItemZoomController *)zoomController;
-(void)setZoomController:(IGFeedItemZoomController *)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didToggleAudio:(char)arg2 ;
-(void)didDoubleTapFeedItemVideoView:(id)arg1 ;
-(void)didSingleTapFeedItemVideoView:(id)arg1 ;
-(void)configureWithPostItem:(id)arg1 coverImageURL:(id)arg2 videoLogger:(id)arg3 ;
-(void)setZoomingDelegate:(id<IGFeedItemZoomControllerZoomingDelegate>)arg1 ;
-(id<IGFeedItemZoomControllerZoomingDelegate>)zoomingDelegate;
-(void)setVideoView:(IGFeedItemVideoView *)arg1 ;
-(IGFeedItemVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGVideoCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGVideoCellDelegate>)delegate;
-(void)prepareForReuse;
@end

