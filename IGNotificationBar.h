
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, IGImageView, UILabel, NSTimer, UIPanGestureRecognizer, IGTouchGestureRecognizer, UITapGestureRecognizer, NSString;

@interface IGNotificationBar : UIWindow <UIGestureRecognizerDelegate> {

	char _visible;
	char _startedDraggingBanner;
	UIView* _containerView;
	IGImageView* _imageView;
	UILabel* _label;
	NSTimer* _timer;
	UIPanGestureRecognizer* _pan;
	NSTimer* _hideTimer;
	/*^block*/id _block;
	IGTouchGestureRecognizer* _touchRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	float _initialFingerPointY;
	float _initialCenterY;

}

@property (nonatomic,retain) UIView * containerView;                                  //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) IGImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                           //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * pan;                            //@synthesize pan=_pan - In the implementation block
@property (nonatomic,retain) NSTimer * hideTimer;                                     //@synthesize hideTimer=_hideTimer - In the implementation block
@property (nonatomic,copy) id block;                                                  //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) IGTouchGestureRecognizer * touchRecognizer;              //@synthesize touchRecognizer=_touchRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                  //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (assign,nonatomic) char startedDraggingBanner;                              //@synthesize startedDraggingBanner=_startedDraggingBanner - In the implementation block
@property (assign,nonatomic) float initialFingerPointY;                               //@synthesize initialFingerPointY=_initialFingerPointY - In the implementation block
@property (assign,nonatomic) float initialCenterY;                                    //@synthesize initialCenterY=_initialCenterY - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)showWithImageProvider:(id)arg1 andAttributedText:(id)arg2 shouldRoundImage:(char)arg3 block:(/*^block*/id)arg4 ;
+(id)attributedStringWithTitle:(id)arg1 andBody:(id)arg2 ;
+(char)showWithImage:(id)arg1 andAttributedText:(id)arg2 shouldRoundImage:(char)arg3 block:(/*^block*/id)arg4 ;
+(char)showWithImageURL:(id)arg1 andAttributedText:(id)arg2 shouldRoundImage:(char)arg3 block:(/*^block*/id)arg4 ;
+(char)showBarIfAllowedWithBlock:(/*^block*/id)arg1 ;
+(id)sharedInstance;
+(id)defaultTextAttributes;
-(void)setTouchRecognizer:(IGTouchGestureRecognizer *)arg1 ;
-(IGTouchGestureRecognizer *)touchRecognizer;
-(void)setupContainerView;
-(void)beginDraggingWithFingerPoint:(CGPoint)arg1 ;
-(char)startedDraggingBanner;
-(void)dragWithFingerPont:(CGPoint)arg1 ;
-(void)endDraggingWithFingerPoint:(CGPoint)arg1 ;
-(float)initialCenterY;
-(void)setVisible:(char)arg1 velocity:(float)arg2 ;
-(void)notifyWithAction:(unsigned)arg1 ;
-(void)setPressedState:(char)arg1 ;
-(float)imageViewWidth;
-(void)setStartedDraggingBanner:(char)arg1 ;
-(void)setInitialCenterY:(float)arg1 ;
-(void)setInitialFingerPointY:(float)arg1 ;
-(float)initialFingerPointY;
-(NSTimer *)hideTimer;
-(void)hideTimer:(id)arg1 ;
-(void)setHideTimer:(NSTimer *)arg1 ;
-(float)labelHeightForWidth:(float)arg1 ;
-(void)dismissAction:(id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setPan:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)pan;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIView *)containerView;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)rootViewController;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setVisible:(char)arg1 ;
-(IGImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(char)isVisible;
-(void)startTimer;
-(void)tap:(id)arg1 ;
-(void)setImageView:(IGImageView *)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)pan:(id)arg1 ;
-(void)cancelTimer;
-(void)touch:(id)arg1 ;
@end

