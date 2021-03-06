
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UITapGestureRecognizer, UIColor, NSArray, NSString;

@interface FBSDKTooltipView : UIView {

	CGPoint _positionInView;
	double _displayTime;
	double _minimumDisplayDuration;
	UILabel* _textLabel;
	UITapGestureRecognizer* _insideTapGestureRecognizer;
	float _leftWidth;
	float _rightWidth;
	float _arrowMidpoint;
	char _pointingUp;
	char _isFadingOut;
	UIColor* _innerStrokeColor;
	float _arrowHeight;
	float _textPadding;
	float _maximumTextWidth;
	float _verticalTextOffset;
	float _verticalCrossOffset;
	unsigned _colorStyle;
	NSArray* _gradientColors;
	UIColor* _crossCloseGlyphColor;
	NSString* _message;
	NSString* _tagline;
	double _displayDuration;

}

@property (assign,nonatomic) double displayDuration;              //@synthesize displayDuration=_displayDuration - In the implementation block
@property (assign,nonatomic) unsigned colorStyle; 
@property (nonatomic,copy) NSString * message;                    //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * tagline;                    //@synthesize tagline=_tagline - In the implementation block
-(void)setColorStyle:(unsigned)arg1 ;
-(void)presentFromView:(id)arg1 ;
-(void)setMessage:(id)arg1 tagline:(id)arg2 ;
-(void)onTapInTooltip:(id)arg1 ;
-(NSString *)tagline;
-(void)presentInView:(id)arg1 withArrowPosition:(CGPoint)arg2 direction:(unsigned)arg3 ;
-(CGRect)layoutSubviewsAndDetermineFrame;
-(void)scheduleAutomaticFadeout;
-(void)animateFadeIn;
-(void)cancelAllScheduledFadeOutMethods;
-(void)animateFadeOutWithCompletion:(/*^block*/id)arg1 ;
-(void)scheduleFadeoutRespectingMinimumDisplayDuration;
-(id)initWithTagline:(id)arg1 message:(id)arg2 colorStyle:(unsigned)arg3 ;
-(void)setTagline:(NSString *)arg1 ;
-(unsigned)colorStyle;
-(double)displayDuration;
-(void)setDisplayDuration:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)dismiss;
@end

