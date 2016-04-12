
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGCTAPresenterContext, UIButton, UIView;

@interface IGGenericCTAView : UIView {

	IGCTAPresenterContext* _context;
	UIButton* _ctaButton;
	float _hairlineHeight;
	UIView* _bottomHairline;

}

@property (nonatomic,readonly) IGCTAPresenterContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIButton * ctaButton;                         //@synthesize ctaButton=_ctaButton - In the implementation block
@property (nonatomic,readonly) float hairlineHeight;                         //@synthesize hairlineHeight=_hairlineHeight - In the implementation block
@property (nonatomic,readonly) UIView * bottomHairline;                      //@synthesize bottomHairline=_bottomHairline - In the implementation block
-(void)ctaButtonTapped:(id)arg1 ;
-(float)hairlineHeight;
-(UIButton *)ctaButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IGCTAPresenterContext *)context;
-(id)initWithContext:(id)arg1 ;
-(UIView *)bottomHairline;
@end

