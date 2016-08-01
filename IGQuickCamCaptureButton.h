
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol IGQuickCamCaptureButtonDelegate;
@class CAShapeLayer, UIView, IGAppColorGradientLayer, IGTouchGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, NSString;

@interface IGQuickCamCaptureButton : UIButton <UIGestureRecognizerDelegate, NSCopying> {

	id<IGQuickCamCaptureButtonDelegate> _delegate;
	int _buttonState;
	float _videoRecordProgress;
	CAShapeLayer* _progress;
	UIView* _background;
	UIView* _confirmOverlay;
	IGAppColorGradientLayer* _gradientLayer;
	IGTouchGestureRecognizer* _touch;
	UILongPressGestureRecognizer* _longPress;
	UITapGestureRecognizer* _tap;
	UIView* _innerCircle;
	float _captureButtonSize;
	float _captureButtonVideoSize;
	float _captureInnerCircleSize;
	float _captureInnerCircleShrinkSize;
	int _ringStyle;

}

@property (nonatomic,retain) CAShapeLayer * progress;                                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIView * background;                                              //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) UIView * confirmOverlay;                                          //@synthesize confirmOverlay=_confirmOverlay - In the implementation block
@property (nonatomic,retain) IGAppColorGradientLayer * gradientLayer;                          //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) IGTouchGestureRecognizer * touch;                                 //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPress;                         //@synthesize longPress=_longPress - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tap;                                     //@synthesize tap=_tap - In the implementation block
@property (nonatomic,retain) UIView * innerCircle;                                             //@synthesize innerCircle=_innerCircle - In the implementation block
@property (assign,nonatomic) float captureButtonSize;                                          //@synthesize captureButtonSize=_captureButtonSize - In the implementation block
@property (assign,nonatomic) float captureButtonVideoSize;                                     //@synthesize captureButtonVideoSize=_captureButtonVideoSize - In the implementation block
@property (assign,nonatomic) float captureInnerCircleSize;                                     //@synthesize captureInnerCircleSize=_captureInnerCircleSize - In the implementation block
@property (assign,nonatomic) float captureInnerCircleShrinkSize;                               //@synthesize captureInnerCircleShrinkSize=_captureInnerCircleShrinkSize - In the implementation block
@property (assign,nonatomic) int ringStyle;                                                    //@synthesize ringStyle=_ringStyle - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamCaptureButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int buttonState;                                                  //@synthesize buttonState=_buttonState - In the implementation block
@property (assign,nonatomic) float videoRecordProgress;                                        //@synthesize videoRecordProgress=_videoRecordProgress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCenter:(CGPoint)arg1 buttonSize:(float)arg2 buttonVideoSize:(float)arg3 innerCircleSize:(float)arg4 innerCircleShrinkSize:(float)arg5 ringStyle:(int)arg6 ;
-(void)setButtonState:(int)arg1 ;
-(void)setVideoRecordProgress:(float)arg1 ;
-(int)buttonState;
-(UITapGestureRecognizer *)tap;
-(void)setTap:(UITapGestureRecognizer *)arg1 ;
-(void)setCaptureButtonSize:(float)arg1 ;
-(void)setCaptureButtonVideoSize:(float)arg1 ;
-(void)setCaptureInnerCircleSize:(float)arg1 ;
-(void)setCaptureInnerCircleShrinkSize:(float)arg1 ;
-(void)setRingStyle:(int)arg1 ;
-(void)setConfirmOverlay:(UIView *)arg1 ;
-(UIView *)confirmOverlay;
-(void)setInnerCircle:(UIView *)arg1 ;
-(UIView *)innerCircle;
-(float)captureButtonSize;
-(float)captureButtonVideoSize;
-(void)animateButton:(/*^block*/id)arg1 ;
-(int)ringStyle;
-(void)animateGradientRotation;
-(float)captureInnerCircleSize;
-(float)captureInnerCircleShrinkSize;
-(float)videoRecordProgress;
-(void)setLongPress:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPress;
-(void)setDelegate:(id<IGQuickCamCaptureButtonDelegate>)arg1 ;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGQuickCamCaptureButtonDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgress:(CAShapeLayer *)arg1 ;
-(IGAppColorGradientLayer *)gradientLayer;
-(void)longPress:(id)arg1 ;
-(IGTouchGestureRecognizer *)touch;
-(UIView *)background;
-(void)setBackground:(UIView *)arg1 ;
-(CAShapeLayer *)progress;
-(void)setTouch:(IGTouchGestureRecognizer *)arg1 ;
-(void)tap:(id)arg1 ;
-(void)setGradientLayer:(IGAppColorGradientLayer *)arg1 ;
-(void)touch:(id)arg1 ;
@end

