
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationAddEmailScrollView, IGRetroRegistrationBackgroundView;

@interface IGRetroRegistrationAddEmailView : UIView {

	IGRetroRegistrationAddEmailScrollView* _addEmailScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationAddEmailScrollView * addEmailScrollView;              //@synthesize addEmailScrollView=_addEmailScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                      //@synthesize backgroundView=_backgroundView - In the implementation block
-(IGRetroRegistrationAddEmailScrollView *)addEmailScrollView;
-(void)setAddEmailScrollView:(IGRetroRegistrationAddEmailScrollView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

