
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemMediaCell.h>
#import <Instagram/IGFeedVideoCell.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>

@protocol IGFeedVideoCellInteractionDelegate, IGFeedVideoCellAnalyticsDelegate, IGFeedVideoCellPlayerDelegate;
@class IGPost, IGFeedItemVideoView, NSString;

@interface IGFeedItemVideoCell : IGFeedItemMediaCell <IGFeedVideoCell, IGFeedItemVideoViewDelegate> {

	IGPost* _post;
	float _percentVisible;
	id<IGFeedVideoCellInteractionDelegate> _interactionDelegate;
	id<IGFeedVideoCellAnalyticsDelegate> _analyticsDelegate;
	id<IGFeedVideoCellPlayerDelegate> _playerDelegate;
	IGFeedItemVideoView* _videoView;

}

@property (assign,nonatomic,__weak) id<IGFeedVideoCellInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellAnalyticsDelegate> analyticsDelegate;                  //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellPlayerDelegate> playerDelegate;                        //@synthesize playerDelegate=_playerDelegate - In the implementation block
@property (nonatomic,readonly) IGFeedItemVideoView * videoView;                                              //@synthesize videoView=_videoView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float percentVisible;                                                         //@synthesize percentVisible=_percentVisible - In the implementation block
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)feedItemVideoViewDidDoubleTap:(id)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)feedItemVideoViewDidPlay:(id)arg1 ;
-(void)feedItemVideoViewDidPlayToEnd:(id)arg1 ;
-(void)feedItemVideoViewDidLongPress:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didToggleAudio:(char)arg2 ;
-(id<IGFeedVideoCellAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGFeedVideoCellAnalyticsDelegate>)arg1 ;
-(void)setPlayerDelegate:(id<IGFeedVideoCellPlayerDelegate>)arg1 ;
-(id)post;
-(void)setPost:(id)arg1 ;
-(id)accessibleElements;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(unsigned)updatePercentVisible:(float)arg1 ;
-(float)percentVisible;
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

