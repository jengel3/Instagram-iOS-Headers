
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, NSMutableArray;

@interface IGAudioIndicatorButton : UIButton {

	UIView* _indicatorBars;
	NSMutableArray* _bars;

}

@property (nonatomic,retain) UIView * indicatorBars;              //@synthesize indicatorBars=_indicatorBars - In the implementation block
@property (nonatomic,retain) NSMutableArray * bars;               //@synthesize bars=_bars - In the implementation block
+(void)showAudioIndicator:(id)arg1 soundOn:(char)arg2 ;
-(void)animateSoundOn;
-(void)animateSoundOff;
-(void)startAnimationForSoundOn:(char)arg1 ;
-(UIView *)indicatorBars;
-(void)setIndicatorBars:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimation;
-(NSMutableArray *)bars;
-(void)setBars:(NSMutableArray *)arg1 ;
@end

