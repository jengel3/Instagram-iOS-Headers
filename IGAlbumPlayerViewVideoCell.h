
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>

@protocol IGAlbumPlayerViewVideoCellDelegate;
@class IGFeedItemVideoView, NSString;

@interface IGAlbumPlayerViewVideoCell : UICollectionViewCell <IGFeedItemVideoViewDelegate> {

	IGFeedItemVideoView* _videoView;
	id<IGAlbumPlayerViewVideoCellDelegate> _delegate;

}

@property (nonatomic,readonly) IGFeedItemVideoView * videoView;                                     //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumPlayerViewVideoCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithVideo:(id)arg1 coverPhoto:(id)arg2 videoCacheKey:(id)arg3 delegate:(id)arg4 ;
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)feedItemVideoViewDidDoubleTap:(id)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)feedItemVideoViewDidPlay:(id)arg1 ;
-(void)feedItemVideoViewDidPlayToEnd:(id)arg1 ;
-(void)feedItemVideoViewDidLongPress:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didToggleAudio:(char)arg2 ;
-(id)feedItemVideoViewCurrentIGAnalyticsMetadata:(id)arg1 ;
-(int)feedItemVideoViewPosition:(id)arg1 ;
-(IGFeedItemVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<IGAlbumPlayerViewVideoCellDelegate>)delegate;
@end

