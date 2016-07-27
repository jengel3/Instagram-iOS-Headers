
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIImageView, UIView, UIPanGestureRecognizer, UITapGestureRecognizer, UIButton, NSString;

@interface IGSloppyTouchSlider : UIControl <UIGestureRecognizerDelegate> {

	char _positiveOnlySlider;
	char _defaultColorOnlySlider;
	char _isSliding;
	float _value;
	UIImageView* _thumbView;
	UIView* _trackView;
	UIView* _highlightedTrackView;
	UIImageView* _centerView;
	float _panValueOrigin;
	float _sliderPosition;
	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _tapGesture;
	UIButton* _addAccessibilityButton;
	UIButton* _subtractAccessibilityButton;
	CGSize _touchTargetInflation;
	CGPoint _panOrigin;

}

@property (nonatomic,retain) UIImageView * thumbView;                             //@synthesize thumbView=_thumbView - In the implementation block
@property (nonatomic,retain) UIView * trackView;                                  //@synthesize trackView=_trackView - In the implementation block
@property (nonatomic,retain) UIView * highlightedTrackView;                       //@synthesize highlightedTrackView=_highlightedTrackView - In the implementation block
@property (nonatomic,retain) UIImageView * centerView;                            //@synthesize centerView=_centerView - In the implementation block
@property (assign,nonatomic) CGPoint panOrigin;                                   //@synthesize panOrigin=_panOrigin - In the implementation block
@property (assign,nonatomic) float panValueOrigin;                                //@synthesize panValueOrigin=_panValueOrigin - In the implementation block
@property (assign,nonatomic) float sliderPosition;                                //@synthesize sliderPosition=_sliderPosition - In the implementation block
@property (assign,nonatomic) char isSliding;                                      //@synthesize isSliding=_isSliding - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGesture;                 //@synthesize panGesture=_panGesture - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                 //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) UIButton * addAccessibilityButton;                   //@synthesize addAccessibilityButton=_addAccessibilityButton - In the implementation block
@property (nonatomic,retain) UIButton * subtractAccessibilityButton;              //@synthesize subtractAccessibilityButton=_subtractAccessibilityButton - In the implementation block
@property (assign,nonatomic) float value;                                         //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) CGSize touchTargetInflation;                         //@synthesize touchTargetInflation=_touchTargetInflation - In the implementation block
@property (assign,nonatomic) char positiveOnlySlider;                             //@synthesize positiveOnlySlider=_positiveOnlySlider - In the implementation block
@property (assign,nonatomic) char defaultColorOnlySlider;                         //@synthesize defaultColorOnlySlider=_defaultColorOnlySlider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessibilityNudgeButtonWithLabel:(id)arg1 initialValue:(id)arg2 ;
-(void)setPositiveOnlySlider:(char)arg1 ;
-(void)setDefaultColorOnlySlider:(char)arg1 ;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(UIView *)trackView;
-(void)setThumbView:(UIImageView *)arg1 ;
-(id)defaultTrackColor;
-(id)highlightedTrackColor;
-(void)setCenterView:(UIImageView *)arg1 ;
-(void)onPan:(id)arg1 ;
-(void)onTap:(id)arg1 ;
-(void)onAccessibilityAdd:(id)arg1 ;
-(void)onAccessibilitySubtract:(id)arg1 ;
-(void)voiceOverStatusChangedNotification:(id)arg1 ;
-(float)sliderPositionForValue:(float)arg1 ;
-(UIImageView *)centerView;
-(float)unitDisplacementInPoints;
-(UIView *)highlightedTrackView;
-(void)toggleAccessibilityButtonsOnValueChange;
-(void)setSliderPosition:(float)arg1 ;
-(void)setIsSliding:(char)arg1 ;
-(UIPanGestureRecognizer *)panGesture;
-(float)valueForSliderPosition:(float)arg1 ;
-(CGSize)touchTargetInflation;
-(void)setTouchTargetInflation:(CGSize)arg1 ;
-(char)positiveOnlySlider;
-(char)defaultColorOnlySlider;
-(UIImageView *)thumbView;
-(void)setTrackView:(UIView *)arg1 ;
-(void)setHighlightedTrackView:(UIView *)arg1 ;
-(CGPoint)panOrigin;
-(void)setPanOrigin:(CGPoint)arg1 ;
-(float)panValueOrigin;
-(void)setPanValueOrigin:(float)arg1 ;
-(float)sliderPosition;
-(char)isSliding;
-(void)setPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(UIButton *)addAccessibilityButton;
-(void)setAddAccessibilityButton:(UIButton *)arg1 ;
-(UIButton *)subtractAccessibilityButton;
-(void)setSubtractAccessibilityButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(float)minValue;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setValue:(float)arg1 animated:(char)arg2 ;
-(void)setAccessibilityValue:(id)arg1 ;
@end

