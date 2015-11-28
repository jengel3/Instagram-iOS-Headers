
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemMediaCell.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>

@protocol IGFeedItemVideoCellDelegate;
@class IGPost, IGFeedItemVideoView, NSString;

@interface IGFeedItemVideoCell : IGFeedItemMediaCell <IGFeedItemVideoViewDelegate> {

	IGPost* _post;
	id<IGFeedItemVideoCellDelegate> _delegate;
	IGFeedItemVideoView* _videoView;
	float _percentVisible;
	unsigned _visibility;

}

@property (assign,nonatomic,__weak) id<IGFeedItemVideoCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFeedItemVideoView * videoView;                              //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic) float percentVisible;                                         //@synthesize percentVisible=_percentVisible - In the implementation block
@property (assign,nonatomic) unsigned visibility;                                          //@synthesize visibility=_visibility - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)post;
-(void)setPost:(id)arg1 ;
-(id)accessibleElements;
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)feedItemVideoViewDidDoubleTapToLike:(id)arg1 ;
-(id)feedItemVideoViewCurrentIGAnalyticsMetadata:(id)arg1 ;
-(int)feedItemVideoViewPosition:(id)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)feedItemVideoViewDidPlayToEnd:(id)arg1 ;
-(void)feedItemVideoViewDidLongPress:(id)arg1 ;
-(void)setPercentVisible:(float)arg1 ;
-(float)percentVisible;
-(void)setVideoView:(IGFeedItemVideoView *)arg1 ;
-(IGFeedItemVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemVideoCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemVideoCellDelegate>)delegate;
-(void)prepareForReuse;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)setVisibility:(unsigned)arg1 ;
-(unsigned)visibility;
@end

