
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>

@protocol IGVideoCellDelegate;
@class IGFeedItemVideoView, NSString;

@interface IGVideoCell : UICollectionViewCell <IGFeedItemVideoViewDelegate> {

	IGFeedItemVideoView* _videoView;
	id<IGVideoCellDelegate> _delegate;

}

@property (nonatomic,retain) IGFeedItemVideoView * videoView;                      //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)feedItemVideoViewDidDoubleTap:(id)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)feedItemVideoViewDidPlay:(id)arg1 ;
-(void)feedItemVideoViewDidPauseWithEmptyBuffer:(id)arg1 ;
-(void)feedItemVideoViewDidPlayToEnd:(id)arg1 ;
-(void)feedItemVideoViewDidLongPress:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didToggleAudio:(char)arg2 ;
-(void)setPost:(id)arg1 ;
-(void)setVideoView:(IGFeedItemVideoView *)arg1 ;
-(IGFeedItemVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGVideoCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGVideoCellDelegate>)delegate;
@end

