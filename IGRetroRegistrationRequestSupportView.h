
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationBackgroundView, IGRetroRegistrationRequestSupportScrollView;

@interface IGRetroRegistrationRequestSupportView : UIView {

	IGRetroRegistrationBackgroundView* _backgroundView;
	IGRetroRegistrationRequestSupportScrollView* _requestSupportScrollView;

}

@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationRequestSupportScrollView * requestSupportScrollView;              //@synthesize requestSupportScrollView=_requestSupportScrollView - In the implementation block
-(void)setRequestSupportScrollView:(IGRetroRegistrationRequestSupportScrollView *)arg1 ;
-(IGRetroRegistrationRequestSupportScrollView *)requestSupportScrollView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

