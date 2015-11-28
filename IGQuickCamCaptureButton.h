
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGQuickCamCaptureButtonDelegate;
@class CAShapeLayer, UIView, IGTouchGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, NSString;

@interface IGQuickCamCaptureButton : UIButton <UIGestureRecognizerDelegate> {

	id<IGQuickCamCaptureButtonDelegate> _delegate;
	int _buttonState;
	float _videoRecordProgress;
	CAShapeLayer* _progress;
	UIView* _background;
	UIView* _confirmOverlay;
	IGTouchGestureRecognizer* _touch;
	UILongPressGestureRecognizer* _longPress;
	UITapGestureRecognizer* _tap;
	UIView* _innerCircle;

}

@property (assign,nonatomic,__weak) id<IGQuickCamCaptureButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int buttonState;                                                  //@synthesize buttonState=_buttonState - In the implementation block
@property (assign,nonatomic) float videoRecordProgress;                                        //@synthesize videoRecordProgress=_videoRecordProgress - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progress;                                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIView * background;                                              //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) UIView * confirmOverlay;                                          //@synthesize confirmOverlay=_confirmOverlay - In the implementation block
@property (nonatomic,retain) IGTouchGestureRecognizer * touch;                                 //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPress;                         //@synthesize longPress=_longPress - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tap;                                     //@synthesize tap=_tap - In the implementation block
@property (nonatomic,retain) UIView * innerCircle;                                             //@synthesize innerCircle=_innerCircle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITapGestureRecognizer *)tap;
-(void)setTap:(UITapGestureRecognizer *)arg1 ;
-(void)setConfirmOverlay:(UIView *)arg1 ;
-(UIView *)confirmOverlay;
-(void)setInnerCircle:(UIView *)arg1 ;
-(UIView *)innerCircle;
-(void)setButtonState:(int)arg1 ;
-(void)setVideoRecordProgress:(float)arg1 ;
-(int)buttonState;
-(float)videoRecordProgress;
-(void)setLongPress:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGQuickCamCaptureButtonDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGQuickCamCaptureButtonDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(void)setProgress:(CAShapeLayer *)arg1 ;
-(void)longPress:(id)arg1 ;
-(IGTouchGestureRecognizer *)touch;
-(UIView *)background;
-(void)setBackground:(UIView *)arg1 ;
-(CAShapeLayer *)progress;
-(void)setTouch:(IGTouchGestureRecognizer *)arg1 ;
-(void)tap:(id)arg1 ;
-(void)touch:(id)arg1 ;
@end

