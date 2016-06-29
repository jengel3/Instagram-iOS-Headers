
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentExpandableCell.h>
#import <Instagram/IGDirectVideoViewDelegate.h>

@class IGDirectVideoView, NSString;

@interface IGDirectVideoExpandableCell : IGDirectContentExpandableCell <IGDirectVideoViewDelegate> {

	IGDirectVideoView* _videoView;

}

@property (nonatomic,retain) IGDirectVideoView * videoView;              //@synthesize videoView=_videoView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completeAnimation;
-(void)stopAnimated:(char)arg1 ;
-(void)videoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)togglePlayStatus;
-(id)contentImage;
-(void)setVideoView:(IGDirectVideoView *)arg1 ;
-(void)play;
-(IGDirectVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)stop;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
-(void)beginAnimation;
@end

