
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface IGVideoLoadProgressView : UIView {

	float _progress;
	float _playbackProgress;
	float _duration;
	UIView* _progressView;
	UIView* _playbackProgressView;
	float _frameHeight;
	UILabel* _progressLabel;

}

@property (assign,nonatomic) float frameHeight;                          //@synthesize frameHeight=_frameHeight - In the implementation block
@property (nonatomic,retain) UILabel * progressLabel;                    //@synthesize progressLabel=_progressLabel - In the implementation block
@property (assign,nonatomic) float progress;                             //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) float playbackProgress;                     //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (assign,nonatomic) float duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) UIView * progressView;                      //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * playbackProgressView;              //@synthesize playbackProgressView=_playbackProgressView - In the implementation block
-(float)frameHeight;
-(UILabel *)progressLabel;
-(void)setPlaybackProgressView:(UIView *)arg1 ;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(float)playbackProgress;
-(void)setPlaybackProgress:(float)arg1 ;
-(void)setFrameHeight:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(void)reset;
-(void)setProgress:(float)arg1 ;
-(void)setProgressView:(UIView *)arg1 ;
-(UIView *)progressView;
-(float)progress;
-(UIView *)playbackProgressView;
@end

