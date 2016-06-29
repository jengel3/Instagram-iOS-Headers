
#import <UIKit/UIView.h>

@class UIActivityIndicatorView, CAShapeLayer;

@interface IGEventViewerLoadingView : UIView {

	UIActivityIndicatorView* _spinner;
	CAShapeLayer* _spinnerBackgroundLayer;

}

@property (assign,nonatomic,__weak) UIActivityIndicatorView * spinner;                  //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * spinnerBackgroundLayer;              //@synthesize spinnerBackgroundLayer=_spinnerBackgroundLayer - In the implementation block
-(void)setupSpinnerBackgroundLayer;
-(void)setupSpinner;
-(CAShapeLayer *)spinnerBackgroundLayer;
-(void)setSpinnerBackgroundLayer:(CAShapeLayer *)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setupSubviews;
@end

