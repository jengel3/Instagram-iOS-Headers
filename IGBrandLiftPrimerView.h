
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface IGBrandLiftPrimerView : UIView {

	UIButton* _nextButton;

}

@property (nonatomic,readonly) UIButton * nextButton;              //@synthesize nextButton=_nextButton - In the implementation block
-(id)initWithPrimerText:(id)arg1 showResults:(char)arg2 withFrame:(CGRect)arg3 ;
-(UIButton *)nextButton;
@end

