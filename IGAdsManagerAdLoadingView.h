
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface IGAdsManagerAdLoadingView : UIView {

	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)spinner;
@end

