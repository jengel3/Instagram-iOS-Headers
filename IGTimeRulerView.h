
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@interface IGTimeRulerView : UIView {

	float _maxVideoDuration;
	float _pixelsPerSecond;
	float _totalTime;

}

@property (assign,nonatomic) float maxVideoDuration;              //@synthesize maxVideoDuration=_maxVideoDuration - In the implementation block
@property (assign,nonatomic) float pixelsPerSecond;               //@synthesize pixelsPerSecond=_pixelsPerSecond - In the implementation block
@property (assign,nonatomic) float totalTime;                     //@synthesize totalTime=_totalTime - In the implementation block
-(void)setMaxVideoDuration:(float)arg1 ;
-(float)maxVideoDuration;
-(float)pixelsPerSecond;
-(id)durationStringForNumber:(id)arg1 ;
-(void)setPixelsPerSecond:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)totalTime;
-(void)setTotalTime:(float)arg1 ;
@end

