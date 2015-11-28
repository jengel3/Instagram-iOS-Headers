
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@interface IGTimeRulerView : UIView {

	float _pixelsPerSecond;
	float _totalTime;

}

@property (assign,nonatomic) float pixelsPerSecond;              //@synthesize pixelsPerSecond=_pixelsPerSecond - In the implementation block
@property (assign,nonatomic) float totalTime;                    //@synthesize totalTime=_totalTime - In the implementation block
-(float)pixelsPerSecond;
-(id)durationStringForNumber:(id)arg1 ;
-(void)setPixelsPerSecond:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)totalTime;
-(void)setTotalTime:(float)arg1 ;
@end

