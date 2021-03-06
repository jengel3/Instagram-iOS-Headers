
#import <UIKit/UISlider.h>

@class UIImage;

@interface RCTSlider : UISlider {

	float _unclippedValue;
	/*^block*/id _onValueChange;
	/*^block*/id _onSlidingComplete;
	float _step;
	float _lastValue;
	UIImage* _trackImage;

}

@property (nonatomic,copy) id onValueChange;                           //@synthesize onValueChange=_onValueChange - In the implementation block
@property (nonatomic,copy) id onSlidingComplete;                       //@synthesize onSlidingComplete=_onSlidingComplete - In the implementation block
@property (assign,nonatomic) float step;                               //@synthesize step=_step - In the implementation block
@property (assign,nonatomic) float lastValue;                          //@synthesize lastValue=_lastValue - In the implementation block
@property (nonatomic,retain) UIImage * trackImage;                     //@synthesize trackImage=_trackImage - In the implementation block
@property (nonatomic,retain) UIImage * minimumTrackImage; 
@property (nonatomic,retain) UIImage * maximumTrackImage; 
@property (nonatomic,retain) UIImage * thumbImage; 
-(void)setMinimumTrackImage:(UIImage *)arg1 ;
-(UIImage *)minimumTrackImage;
-(void)setMaximumTrackImage:(UIImage *)arg1 ;
-(UIImage *)maximumTrackImage;
-(void)setThumbImage:(UIImage *)arg1 ;
-(UIImage *)thumbImage;
-(id)onValueChange;
-(void)setOnValueChange:(id)arg1 ;
-(id)onSlidingComplete;
-(void)setOnSlidingComplete:(id)arg1 ;
-(float)lastValue;
-(void)setLastValue:(float)arg1 ;
-(void)setValue:(float)arg1 ;
-(void)setMinimumValue:(float)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(void)setTrackImage:(UIImage *)arg1 ;
-(UIImage *)trackImage;
-(void)setStep:(float)arg1 ;
-(float)step;
@end

