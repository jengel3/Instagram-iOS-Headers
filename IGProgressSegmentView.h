
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface IGProgressSegmentView : UIView {

	float _progress;
	UIView* _progressView;

}

@property (assign,nonatomic) float progress;                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIView * progressView;              //@synthesize progressView=_progressView - In the implementation block
-(void)endScrubAnimation;
-(void)animateToScale:(float)arg1 color:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startScrubAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(void)setProgressView:(UIView *)arg1 ;
-(UIView *)progressView;
-(float)progress;
@end

