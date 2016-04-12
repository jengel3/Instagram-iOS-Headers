
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface IGAlbumFullscreenProgressView : UIView {

	float _progress;
	UIView* _progressView;

}

@property (assign,nonatomic) float progress;                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIView * progressView;              //@synthesize progressView=_progressView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(void)setProgressView:(UIView *)arg1 ;
-(UIView *)progressView;
-(float)progress;
@end

