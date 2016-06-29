
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@protocol IGMediaCaptureButtonDelegate;
@class CAShapeLayer;

@interface IGMediaCaptureButton : UIButton {

	id<IGMediaCaptureButtonDelegate> _delegate;
	int _mediaType;
	CAShapeLayer* _enabledOverlayLayer;
	CAShapeLayer* _baseLayer;
	CAShapeLayer* _innerLayer;
	CAShapeLayer* _whiteLayer;

}

@property (assign,nonatomic,__weak) CAShapeLayer * enabledOverlayLayer;                     //@synthesize enabledOverlayLayer=_enabledOverlayLayer - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * baseLayer;                               //@synthesize baseLayer=_baseLayer - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * innerLayer;                              //@synthesize innerLayer=_innerLayer - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * whiteLayer;                              //@synthesize whiteLayer=_whiteLayer - In the implementation block
@property (assign,nonatomic,__weak) id<IGMediaCaptureButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mediaType;                                                 //@synthesize mediaType=_mediaType - In the implementation block
-(void)setBaseLayer:(CAShapeLayer *)arg1 ;
-(void)setInnerLayer:(CAShapeLayer *)arg1 ;
-(void)setWhiteLayer:(CAShapeLayer *)arg1 ;
-(void)setEnabledOverlayLayer:(CAShapeLayer *)arg1 ;
-(void)internalSetEnabled:(char)arg1 ;
-(CAShapeLayer *)baseLayer;
-(CAShapeLayer *)innerLayer;
-(CAShapeLayer *)whiteLayer;
-(CAShapeLayer *)enabledOverlayLayer;
-(void)onCaptureButtonTouchedUpInside;
-(void)onCaptureButtonTouchedDown;
-(void)onCaptureButtonTouchedUpOutside;
-(void)onCaptureButtonDraggedOutside;
-(void)onCaptureButtonTouchCancelled;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGMediaCaptureButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGMediaCaptureButtonDelegate>)delegate;
-(void)setEnabled:(char)arg1 ;
-(id)baseColor;
@end

