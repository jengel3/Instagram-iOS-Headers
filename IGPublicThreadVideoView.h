
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGDirectVideoViewDelegate.h>

@class IGDirectVideoView, NSString;

@interface IGPublicThreadVideoView : UIView <IGDirectVideoViewDelegate> {

	IGDirectVideoView* _videoView;

}

@property (nonatomic,retain) IGDirectVideoView * videoView;              //@synthesize videoView=_videoView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForWidth:(float)arg1 postMediaSize:(CGSize)arg2 ;
-(void)stopAnimated:(char)arg1 ;
-(void)videoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)togglePlayStatus;
-(void)setVideoContent:(id)arg1 ;
-(void)setVideoView:(IGDirectVideoView *)arg1 ;
-(void)play;
-(IGDirectVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(void)stop;
@end

