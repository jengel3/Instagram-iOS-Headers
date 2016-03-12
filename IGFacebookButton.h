
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIActivityIndicatorView;

@interface IGFacebookButton : UIButton {

	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 buttonColor:(int)arg2 ;
-(void)configureButtonAndTextColor:(int)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end

