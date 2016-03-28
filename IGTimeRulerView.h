
#import <UIKit/UIView.h>

@interface IGTimeRulerView : UIView {

	float _pixelsPerSecond;
	float _totalTime;
	int _tickFrequency;
	int _tickLabelfrequency;

}

@property (assign,nonatomic) float pixelsPerSecond;               //@synthesize pixelsPerSecond=_pixelsPerSecond - In the implementation block
@property (assign,nonatomic) float totalTime;                     //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) int tickFrequency;                   //@synthesize tickFrequency=_tickFrequency - In the implementation block
@property (assign,nonatomic) int tickLabelfrequency;              //@synthesize tickLabelfrequency=_tickLabelfrequency - In the implementation block
-(float)pixelsPerSecond;
-(id)durationStringForNumber:(id)arg1 ;
-(void)updateTickValues;
-(void)sizeToFitTickFrequency:(float)arg1 ;
-(void)setPixelsPerSecond:(float)arg1 ;
-(void)sizeToFitNextMajorTick;
-(void)sizeToFitNextMinorTick;
-(int)tickFrequency;
-(void)setTickFrequency:(int)arg1 ;
-(int)tickLabelfrequency;
-(void)setTickLabelfrequency:(int)arg1 ;
-(void)layoutSubviews;
-(float)totalTime;
-(void)setTotalTime:(float)arg1 ;
@end

