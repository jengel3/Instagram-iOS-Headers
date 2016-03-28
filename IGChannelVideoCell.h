
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemVideoCell.h>

@class IGChannelOverlayView, CALayer;

@interface IGChannelVideoCell : IGFeedItemVideoCell {

	IGChannelOverlayView* _overlayView;
	CALayer* _touchDownLayer;

}

@property (nonatomic,readonly) IGChannelOverlayView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) CALayer * touchDownLayer;                        //@synthesize touchDownLayer=_touchDownLayer - In the implementation block
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)feedItemVideoViewDidPlay:(id)arg1 ;
-(void)setupSubviewsWithFrame:(CGRect)arg1 ;
-(void)configureVideoView;
-(void)configureWithChannel:(id)arg1 playerDelegate:(id)arg2 ;
-(void)setupOverlayViewWithFrame:(CGRect)arg1 ;
-(void)setupTouchDownLayer;
-(CALayer *)touchDownLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(IGChannelOverlayView *)overlayView;
@end

