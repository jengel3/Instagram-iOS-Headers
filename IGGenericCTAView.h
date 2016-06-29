
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCTAPresentationViewType.h>

@protocol IGGenericCTAVViewDelegate;
@class UIButton, UIView, NSString;

@interface IGGenericCTAView : UIView <IGCTAPresentationViewType> {

	UIButton* _ctaButton;
	float _hairlineHeight;
	UIView* _bottomHairline;
	id<IGGenericCTAVViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIButton * ctaButton;                                       //@synthesize ctaButton=_ctaButton - In the implementation block
@property (nonatomic,readonly) float hairlineHeight;                                       //@synthesize hairlineHeight=_hairlineHeight - In the implementation block
@property (nonatomic,readonly) UIView * bottomHairline;                                    //@synthesize bottomHairline=_bottomHairline - In the implementation block
@property (nonatomic,__weak,readonly) id<IGGenericCTAVViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)allowedPresentationLifeCycleTime;
-(void)ctaButtonTapped:(id)arg1 ;
-(float)hairlineHeight;
-(UIButton *)ctaButton;
-(id)initWithButtonTitle:(id)arg1 delegate:(id)arg2 ;
-(int)preferredPresentationPosition;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGGenericCTAVViewDelegate>)delegate;
-(UIView *)bottomHairline;
@end

