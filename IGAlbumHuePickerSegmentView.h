
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImageView, CALayer;

@interface IGAlbumHuePickerSegmentView : UIView {

	UIColor* _beginningColor;
	UIColor* _endingColor;
	UIColor* _maxBrightnessColor;
	UIColor* _minBrightnessColor;
	UIImageView* _gradientImageView;
	CALayer* _maskLayer;
	CGRect _maskFrame;
	/*^block*/id _dismissalCompletionBlock;

}
-(id)initWithFrame:(CGRect)arg1 beginningColor:(id)arg2 endingColor:(id)arg3 ;
-(void)presentFromFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end

