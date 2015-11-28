
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@protocol IGMediaCaptureButtonDelegate;
@class CAShapeLayer;

@interface IGMediaCaptureButton : UIButton {

	id<IGMediaCaptureButtonDelegate> _delegate;
	int _mediaType;
	CAShapeLayer* _baseLayer;

}

@property (assign,nonatomic,__weak) id<IGMediaCaptureButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mediaType;                                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) CAShapeLayer * baseLayer;                                      //@synthesize baseLayer=_baseLayer - In the implementation block
-(void)onCaptureButtonTouchedUpInside;
-(void)onCaptureButtonTouchedDown;
-(void)onCaptureButtonTouchedUpOutside;
-(void)onCaptureButtonDraggedOutside;
-(void)onCaptureButtonTouchCancelled;
-(void)setBaseLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)baseLayer;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGMediaCaptureButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGMediaCaptureButtonDelegate>)delegate;
-(id)baseColor;
@end

