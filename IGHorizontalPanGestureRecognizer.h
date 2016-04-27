
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface IGHorizontalPanGestureRecognizer : UIGestureRecognizer {

	double _currentTime;
	double _lastTime;
	CGPoint _currentPoint;
	CGPoint _lastPoint;
	CGPoint _startDeltas;
	char _rightToLeftPanDisabled;
	UITouch* _touch;
	CGPoint _startPoint;

}

@property (assign,nonatomic) char rightToLeftPanDisabled;              //@synthesize rightToLeftPanDisabled=_rightToLeftPanDisabled - In the implementation block
@property (assign,nonatomic) CGPoint startPoint;                       //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,retain) UITouch * touch;                          //@synthesize touch=_touch - In the implementation block
-(char)rightToLeftPanDisabled;
-(void)setRightToLeftPanDisabled:(char)arg1 ;
-(CGPoint)startPointInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(CGPoint)velocity;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(CGPoint)translation;
@end

