
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UIImage;

@interface IGTrimView : UIControl {

	float _touchOffset;
	char _autotracking;
	float _minWidth;
	float _maxWidth;
	unsigned _draggingMode;
	UIView* _trimHandles;
	UIImage* _trimImage;

}

@property (nonatomic,retain) UIView * trimHandles;               //@synthesize trimHandles=_trimHandles - In the implementation block
@property (nonatomic,retain) UIImage * trimImage;                //@synthesize trimImage=_trimImage - In the implementation block
@property (assign,nonatomic) unsigned draggingMode;              //@synthesize draggingMode=_draggingMode - In the implementation block
@property (assign,nonatomic) char autotracking;                  //@synthesize autotracking=_autotracking - In the implementation block
@property (assign,nonatomic) float minWidth;                     //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) float maxWidth;                     //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,readonly) IGRange trimRange; 
-(UIImage *)trimImage;
-(UIView *)trimHandles;
-(void)setDraggingMode:(unsigned)arg1 ;
-(unsigned)draggingMode;
-(char)autotracking;
-(IGRange)trimRange;
-(void)setAutotracking:(char)arg1 ;
-(void)continueTracking;
-(void)updateTrimHandles:(IGRange)arg1 ;
-(void)setTrimHandles:(UIView *)arg1 ;
-(void)setTrimImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(float)maxWidth;
-(void)setMaxWidth:(float)arg1 ;
-(float)minWidth;
-(void)stopTracking;
-(void)setMinWidth:(float)arg1 ;
@end

