/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:57 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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
-(CGPoint)startPointInView:(id)arg1 ;
-(void)setRightToLeftPanDisabled:(char)arg1 ;
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

